/*
 * XREFs of ObQueryNameString @ 0x140627DC0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14003B710 (SeSetLearningModeObjectInformation.c)
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400EBD70 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x140137F60 (IopGetFileVolumeNameInformation.c)
 *     SmKmEtwAppendObjectName @ 0x140324C44 (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x14059CCEC (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x14059D3C0 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140980D80 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
