/*
 * XREFs of ObQueryNameString @ 0x14065F660
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x1400DDA44 (IopGetFileVolumeNameInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132740 (IopAttachDeviceToDeviceStackSafe.c)
 *     SmKmEtwAppendObjectName @ 0x1403071BC (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x14056D484 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x14056D9E0 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409414D0 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140660F50 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
