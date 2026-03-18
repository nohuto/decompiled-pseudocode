/*
 * XREFs of PfpParametersInitialize @ 0x140A18E98
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A18DA0 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PfpSetBaseTime @ 0x1407777CC (PfpSetBaseTime.c)
 *     PfpSetParameter @ 0x140777860 (PfpSetParameter.c)
 *     PfpParametersRead @ 0x1407778C8 (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x140777A9C (PfSnParametersRead.c)
 *     PfpGetParameter @ 0x140777FE8 (PfpGetParameter.c)
 *     PfpCreateEvent @ 0x1407785F0 (PfpCreateEvent.c)
 *     PfSnParametersSetDefaults @ 0x140A191A4 (PfSnParametersSetDefaults.c)
 */

NTSTATUS __fastcall PfpParametersInitialize(HANDLE *a1)
{
  int v2; // edi
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

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&v10.Length = 0LL;
  v10.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(a1, 0, 0x220uLL);
  a1[7] = a1;
  a1[6] = PfpParametersWatcher;
  v2 = 0;
  a1[4] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  *((_DWORD *)a1 + 17) = 0x80000000;
  *((_DWORD *)a1 + 20) = 16;
  *((_DWORD *)a1 + 19) = 64;
  *((_DWORD *)a1 + 21) = 5000;
  *((_DWORD *)a1 + 22) = 10000;
  *((_DWORD *)a1 + 23) = 10000;
  PfSnParametersSetDefaults(a1);
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchParametersChanged");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, a1);
  RtlInitUnicodeString(
    &v10,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
  v3 = a1 + 1;
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(a1 + 1, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
  {
    *v3 = 0LL;
  }
  else
  {
    PfpParametersRead((__int64)a1);
    PfSnParametersRead((__int64)a1);
    v5 = *v3;
    v12 = 4;
    v6 = (int *)(a1 + 9);
    if ( PfpGetParameter(v5, L"BootId", 4, a1 + 9, &v12) >= 0 )
      v2 = *v6;
    v8 = *v3;
    *v6 = v2 + 1;
    PfpSetParameter(v8, L"BootId", v7, a1 + 9, v12);
    return PfpSetBaseTime(*v3, (_DWORD *)a1 + 135);
  }
  return result;
}
