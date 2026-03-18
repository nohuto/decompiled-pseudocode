/*
 * XREFs of IoCreateSymbolicLink @ 0x14071B4E0
 * Callers:
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x1409F51F8 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140A18760 (WmipDriverEntry.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401C1850 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int v2; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+60h] [rbp+8h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = SymbolicLinkName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  v2 = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, DeviceName);
  if ( v2 >= 0 )
    ZwClose(SymbolicLinkHandle);
  return v2;
}
