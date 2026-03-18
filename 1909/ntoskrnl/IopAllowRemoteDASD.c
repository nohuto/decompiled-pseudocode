/*
 * XREFs of IopAllowRemoteDASD @ 0x14029BD98
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x14070A534 (IopOpenRegistryKey.c)
 */

bool IopAllowRemoteDASD()
{
  bool v0; // bl
  char v2; // [rsp+20h] [rbp-30h]
  UNICODE_STRING v3; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+10h] BYREF
  PVOID P; // [rsp+68h] [rbp+18h]

  *(_QWORD *)&v3.Length = 0LL;
  v3.Buffer = 0LL;
  v0 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
