/*
 * XREFs of ZwSetSystemInformation @ 0x1401C3550
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1403251C0 (SmKmStoreTerminateWorker.c)
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1408E897C (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1408E8A74 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1408E8C48 (SmStoreResize.c)
 *     KitpInitAitSampleRate @ 0x140A20168 (KitpInitAitSampleRate.c)
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
