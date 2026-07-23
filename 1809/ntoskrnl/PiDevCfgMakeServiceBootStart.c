/*
 * XREFs of PiDevCfgMakeServiceBootStart @ 0x14082E880
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x1406F6E14 (PnpRegSzToString.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 */

__int64 __fastcall PiDevCfgMakeServiceBootStart(PCWSTR SourceString)
{
  int RegistryValue; // ebx
  unsigned int *v2; // rdi
  unsigned int v3; // edx
  __int64 v4; // rcx
  unsigned __int16 v5; // ax
  __int64 v6; // rbx
  char *v7; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING String2; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING Data; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+98h] [rbp+38h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  v12 = 4;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  *(_DWORD *)&Data.Length = 0;
  Data.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 0x2001Fu, &KeyHandle, 0LL, 0);
  if ( RegistryValue < 0 )
    goto LABEL_19;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Start", 0, &P);
  if ( RegistryValue >= 0 )
  {
    v2 = (unsigned int *)P;
    if ( *((_DWORD *)P + 1) != 4 || *((_DWORD *)P + 3) != 4 )
    {
LABEL_15:
      RegistryValue = -1073741823;
      goto LABEL_17;
    }
    v12 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( (v12 & 0xFFFFFFFB) == 0 )
      goto LABEL_19;
    RegistryValue = IopGetRegistryValue(KeyHandle, L"ImagePath", 0, &P);
    if ( RegistryValue >= 0 )
    {
      v2 = (unsigned int *)P;
      if ( (unsigned int)(*((_DWORD *)P + 1) - 1) <= 1 )
      {
        v3 = *((_DWORD *)P + 3);
        if ( v3 >= 2 )
        {
          v4 = *((unsigned int *)P + 2);
          if ( !*(_WORD *)((char *)P + 2 * ((unsigned __int64)v3 >> 1) + v4 - 2) )
          {
            PnpRegSzToString((char *)P + v4, v3, (int *)&P);
            v5 = *((_WORD *)v2 + 6);
            v6 = v2[2];
            String2.Length = (unsigned __int16)P;
            v7 = (char *)v2 + v6;
            String2.Buffer = (wchar_t *)v7;
            String2.MaximumLength = v5;
            if ( RtlPrefixUnicodeString(&PiDevCfgSystemRoot, &String2, 1u) )
            {
              RtlInitUnicodeString(&Data, (PCWSTR)v7 + 12);
              *(_DWORD *)&DestinationString.Length = 1310738;
              DestinationString.Buffer = L"ImagePath";
              RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, v2[1], Data.Buffer, Data.Length + 2);
              if ( RegistryValue < 0 )
                goto LABEL_17;
              goto LABEL_14;
            }
            if ( RtlPrefixUnicodeString(&PiDevCfgSystem32, &String2, 1u) )
            {
LABEL_14:
              *(_DWORD *)&DestinationString.Length = 786442;
              DestinationString.Buffer = L"Start";
              v12 = 0;
              RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v12, 4u);
              goto LABEL_17;
            }
          }
        }
      }
      goto LABEL_15;
    }
  }
  v2 = (unsigned int *)P;
LABEL_17:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_19:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
