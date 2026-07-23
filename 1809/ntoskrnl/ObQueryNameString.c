/*
 * XREFs of ObQueryNameString @ 0x140660820
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x1400DDAC4 (IopGetFileVolumeNameInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132810 (IopAttachDeviceToDeviceStackSafe.c)
 *     SmKmEtwAppendObjectName @ 0x1403073AC (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x14056E484 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x14056E9E0 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409424D0 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
