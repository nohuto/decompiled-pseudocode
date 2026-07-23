/*
 * XREFs of PfpParametersInitialize @ 0x1409D572C
 * Callers:
 *     PfInitializeSuperfetch @ 0x1409D5634 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PfpSetBaseTime @ 0x14075324C (PfpSetBaseTime.c)
 *     PfpSetParameter @ 0x1407532E0 (PfpSetParameter.c)
 *     PfpParametersRead @ 0x14075333C (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x140753510 (PfSnParametersRead.c)
 *     PfpGetParameter @ 0x140753A78 (PfpGetParameter.c)
 *     PfpCreateEvent @ 0x140754060 (PfpCreateEvent.c)
 *     PfSnParametersSetDefaults @ 0x1409D5A20 (PfSnParametersSetDefaults.c)
 */

NTSTATUS __fastcall PfpParametersInitialize(__int64 a1)
{
  int v2; // ebx
  HANDLE *v3; // r14
  NTSTATUS result; // eax
  HANDLE v5; // rcx
  int *v6; // rsi
  __int64 v7; // r8
  HANDLE v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING v10; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG v12; // [rsp+B0h] [rbp+67h] BYREF

  memset((void *)a1, 0, 0x220uLL);
  v2 = 0;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 48) = PfpParametersWatcher;
  *(_QWORD *)(a1 + 56) = a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_QWORD *)(a1 + 76) = 0LL;
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_QWORD *)(a1 + 88) = 10000LL;
  *(_DWORD *)(a1 + 92) = 10000;
  *(_DWORD *)(a1 + 68) = 0x80000000;
  *(_DWORD *)(a1 + 80) = 16;
  *(_DWORD *)(a1 + 76) = 64;
  *(_DWORD *)(a1 + 84) = 5000;
  PfSnParametersSetDefaults(a1);
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchParametersChanged");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)a1);
  RtlInitUnicodeString(
    &v10,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
  v3 = (HANDLE *)(a1 + 8);
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey((PHANDLE)(a1 + 8), 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
  {
    *v3 = 0LL;
  }
  else
  {
    PfpParametersRead(a1);
    PfSnParametersRead(a1);
    v5 = *v3;
    v12 = 4;
    v6 = (int *)(a1 + 72);
    if ( PfpGetParameter(v5, L"BootId", 4, (void *)(a1 + 72), &v12) < 0 )
      *v6 = 0;
    else
      v2 = *v6;
    v8 = *v3;
    *v6 = v2 + 1;
    PfpSetParameter(v8, L"BootId", v7, (void *)(a1 + 72), v12);
    return PfpSetBaseTime(*v3, (_DWORD *)(a1 + 540));
  }
  return result;
}
