/*
 * XREFs of ZwSetSystemInformation @ 0x1401BB5D0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140307650 (SmKmStoreTerminateWorker.c)
 *     IoShutdownSystem @ 0x140577C68 (IoShutdownSystem.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1408AB8B4 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1408AB9C0 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1408ABB9C (SmStoreResize.c)
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
