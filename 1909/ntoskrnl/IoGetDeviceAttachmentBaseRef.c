/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x1400889C0
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14029E0D8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     FsRtlReleaseFile @ 0x1405D5DE0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405D5FD0 (FsRtlAcquireFileExclusiveCommon.c)
 *     sub_140623F14 @ 0x140623F14 (sub_140623F14.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406247F0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140624A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140747F80 (IoWMIDeviceObjectToInstanceName.c)
 *     PipRecordOpenHandleVeto @ 0x14087B7C8 (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408A36EC (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
