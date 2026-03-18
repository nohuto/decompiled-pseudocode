/*
 * XREFs of IopBuildFullDriverPath @ 0x14070D600
 * Callers:
 *     PiNormalizeDeviceText @ 0x1406FE3AC (PiNormalizeDeviceText.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     PpCheckInDriverDatabase @ 0x140709DAC (PpCheckInDriverDatabase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 */

__int64 __fastcall IopBuildFullDriverPath(UNICODE_STRING *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS appended; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v8; // rsi
  unsigned int v9; // eax
  wchar_t *v10; // r14
  unsigned __int16 Length; // bx
  unsigned int v12; // edx
  wchar_t *Pool_0; // rax
  UNICODE_STRING v15; // xmm0
  UNICODE_STRING String2; // [rsp+20h] [rbp-39h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING v19; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING v20; // [rsp+60h] [rbp+7h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+17h] BYREF
  UNICODE_STRING v22; // [rsp+80h] [rbp+27h]
  PVOID P; // [rsp+D8h] [rbp+7Fh] BYREF

  *(_QWORD *)&String1.Length = 1703960LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&v19.Length = 0LL;
  v19.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *(_QWORD *)&v20.Length = 0LL;
  v20.Buffer = 0LL;
  String1.Buffer = L"\\SystemRoot\\";
  v22.Buffer = L"System32\\Drivers\\";
  *(_QWORD *)&v22.Length = 2359330LL;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  RtlInitUnicodeString(&String2, 0LL);
  RtlInitUnicodeString(&v20, 0LL);
  P = 0LL;
  appended = IopQueryRegistryKeySystemPath(a2, &DestinationString);
  if ( appended < 0 )
    goto LABEL_16;
  RegistryValue = IopGetRegistryValue(a2, L"ImagePath", 256, &P);
  v8 = P;
  if ( RegistryValue < 0 || (v9 = *((_DWORD *)P + 3), v9 < 2) )
  {
    Source = DestinationString;
    v15 = *a1;
    v19 = v22;
    String2 = v15;
    RtlInitUnicodeString(&v20, L".SYS");
    Length = String2.Length;
  }
  else
  {
    if ( v9 > 0xFFFF )
      goto LABEL_20;
    v10 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    String2.MaximumLength = *((_DWORD *)P + 3);
    Length = v9 - 2;
    String2.Buffer = v10;
    String2.Length = v9 - 2;
    if ( *v10 == 92 )
    {
      if ( RtlPrefixUnicodeString(&String1, &String2, 1u) )
      {
        Length -= 24;
        Source = DestinationString;
        String2.Length = Length;
        String2.Buffer = v10 + 12;
      }
      else
      {
        RtlInitUnicodeString(&Source, 0LL);
      }
    }
    else
    {
      Source = DestinationString;
    }
  }
  v12 = Source.Length + 2 + v19.Length + v20.Length + Length;
  if ( v12 <= 0xFFFF )
  {
    a3->MaximumLength = v12;
    a3->Length = 0;
    Pool_0 = (wchar_t *)IopVerifierExAllocatePool_0(PagedPool, (unsigned __int16)v12);
    a3->Buffer = Pool_0;
    if ( Pool_0 )
    {
      appended = RtlAppendUnicodeStringToString(a3, &Source);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(a3, &v19);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(a3, &String2);
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeStringToString(a3, &v20);
            if ( appended >= 0 )
              a3->Buffer[(unsigned __int64)a3->Length >> 1] = 0;
          }
        }
      }
    }
    else
    {
      appended = -1073741670;
    }
    goto LABEL_14;
  }
LABEL_20:
  appended = -2147483643;
LABEL_14:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_16:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)appended;
}
