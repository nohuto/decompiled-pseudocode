/*
 * XREFs of IopAllowRemoteDASD @ 0x140284D84
 * Callers:
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406804F4 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1406C68D0 (IopOpenRegistryKey.c)
 */

bool IopAllowRemoteDASD()
{
  bool v0; // bl
  char v2; // [rsp+20h] [rbp-38h]
  UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h]

  v0 = 0;
  RtlInitUnicodeString(&DestinationString, L"AllowRemoteDASD");
  RtlInitUnicodeString(&v3, L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\RemovableStorageDevices");
  v2 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, &v3, 131097LL, v2) >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( *((_DWORD *)P + 3) )
        v0 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  return v0;
}
