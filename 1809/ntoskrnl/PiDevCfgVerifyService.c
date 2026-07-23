/*
 * XREFs of PiDevCfgVerifyService @ 0x140706478
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 */

__int64 __fastcall PiDevCfgVerifyService(PCWSTR SourceString, bool *a2, _DWORD *a3)
{
  int v3; // r12d
  unsigned int v6; // r15d
  NTSTATUS RegistryValue; // ebx
  PVOID v9; // rcx
  char v10; // [rsp+20h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  LOBYTE(v3) = 0;
  P = 0LL;
  v6 = 4;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v10 = 0;
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &Handle, 0LL, v10);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &P);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      else
        RegistryValue = -1073741823;
      ExFreePoolWithTag(P, 0);
      if ( RegistryValue >= 0 )
      {
        if ( (v3 & 0xB) == 0 )
          goto LABEL_25;
        RegistryValue = IopGetRegistryValue(Handle, L"Start", 0, &P);
        if ( RegistryValue < 0 )
          goto LABEL_22;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        else
          RegistryValue = -1073741823;
        ExFreePoolWithTag(P, 0);
        if ( RegistryValue < 0 )
          goto LABEL_22;
        if ( v6 > 4 )
        {
LABEL_25:
          RegistryValue = -1073741823;
          goto LABEL_22;
        }
        if ( a2 )
          *a2 = v6 == 0;
        if ( a3 && IopGetRegistryValue(Handle, L"PnpFlags", 0, &P) >= 0 )
        {
          v9 = P;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            *a3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
          ExFreePoolWithTag(v9, 0);
        }
      }
    }
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValue;
}
