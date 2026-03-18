/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140002E10
 * Callers:
 *     sub_1405872BC @ 0x1405872BC (sub_1405872BC.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405DCE70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DD0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x1405DE940 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405DEB10 (FsRtlAcquireFileExclusiveCommon.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14071D930 (IoWMIDeviceObjectToInstanceName.c)
 *     PipSetDevNodeStateFlags @ 0x1408285B8 (PipSetDevNodeStateFlags.c)
 *     PipRecordOpenHandleVeto @ 0x1408406E8 (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140867964 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
