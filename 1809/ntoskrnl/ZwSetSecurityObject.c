/*
 * XREFs of ZwSetSecurityObject @ 0x1401BB6F0
 * Callers:
 *     BiZwSetSecurityObject @ 0x14016E6DC (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1401B2F98 (CmpApplyAdminSdOnHiveFiles.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1405828F0 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140808734 (CmpDoReDoSetSecurityDescriptor.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408AED3C (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x1409017C0 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
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
