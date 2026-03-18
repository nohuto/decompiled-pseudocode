/*
 * XREFs of ObQueryNameString @ 0x14062BC10
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14003B450 (SeSetLearningModeObjectInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400887D0 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 *     IopGetFileVolumeNameInformation @ 0x1401385B0 (IopGetFileVolumeNameInformation.c)
 *     SmKmEtwAppendObjectName @ 0x140324694 (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x14059C56C (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x14059CC40 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140980D80 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14062E570 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
