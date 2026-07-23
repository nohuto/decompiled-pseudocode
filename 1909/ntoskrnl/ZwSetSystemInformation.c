/*
 * XREFs of ZwSetSystemInformation @ 0x1401C40D0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140324C10 (SmKmStoreTerminateWorker.c)
 *     IoShutdownSystem @ 0x1405A7968 (IoShutdownSystem.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1408E8284 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1408E837C (SmStoreDelete.c)
 *     SmStoreResize @ 0x1408E8550 (SmStoreResize.c)
 *     KitpInitAitSampleRate @ 0x140A20348 (KitpInitAitSampleRate.c)
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
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
