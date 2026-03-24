/*
 * XREFs of ZwSetSystemInformation @ 0x1401BB5F0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140307750 (SmKmStoreTerminateWorker.c)
 *     IoShutdownSystem @ 0x140577C68 (IoShutdownSystem.c)
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1408AB894 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1408AB9A0 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1408ABB7C (SmStoreResize.c)
 *     KitpInitAitSampleRate @ 0x1409DD5E8 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        SIZE_T SystemInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass, SystemInformation, SystemInformationLength);
}
