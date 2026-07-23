/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140002E10
 * Callers:
 *     sub_1405882BC @ 0x1405882BC (sub_1405882BC.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405DDE70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DFB10 (FsRtlAcquireFileExclusiveCommon.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14071EBB0 (IoWMIDeviceObjectToInstanceName.c)
 *     PipSetDevNodeStateFlags @ 0x140829798 (PipSetDevNodeStateFlags.c)
 *     PipRecordOpenHandleVeto @ 0x140841928 (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140868BA4 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
