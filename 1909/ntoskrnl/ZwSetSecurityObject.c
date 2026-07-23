/*
 * XREFs of ZwSetSecurityObject @ 0x1401C4070
 * Callers:
 *     BiZwSetSecurityObject @ 0x1401781A4 (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1401BE7A4 (CmpApplyAdminSdOnHiveFiles.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406FF3A8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1408403F4 (CmpDoReDoSetSecurityDescriptor.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408EA35C (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlSetKeySecurity @ 0x14093EA74 (_RegRtlSetKeySecurity.c)
 *     IopApplySystemPartitionProt @ 0x140A3A284 (IopApplySystemPartitionProt.c)
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
