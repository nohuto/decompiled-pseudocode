/*
 * XREFs of PiDevCfgVerifyService @ 0x14072E390
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FD160 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x1407360F0 (PipOpenServiceEnumKeys.c)
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

  LOBYTE(v3) = 0;
  Handle = 0LL;
  P = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
