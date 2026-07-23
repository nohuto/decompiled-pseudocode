/*
 * XREFs of ZwSetSecurityObject @ 0x1401C34F0
 * Callers:
 *     BiZwSetSecurityObject @ 0x140177AB4 (BiZwSetSecurityObject.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406FD5C8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     CmpInitBackupHive @ 0x140831660 (CmpInitBackupHive.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140840D94 (CmpDoReDoSetSecurityDescriptor.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EAA54 (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlSetKeySecurity @ 0x14093F004 (_RegRtlSetKeySecurity.c)
 *     IopApplySystemPartitionProt @ 0x140A3A4B4 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
