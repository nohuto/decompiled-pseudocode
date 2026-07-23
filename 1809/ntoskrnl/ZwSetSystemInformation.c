/*
 * XREFs of ZwSetSystemInformation @ 0x1401BB750
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140307940 (SmKmStoreTerminateWorker.c)
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1408ACAF4 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1408ACC00 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1408ACDDC (SmStoreResize.c)
 *     KitpInitAitSampleRate @ 0x1409DE5E8 (KitpInitAitSampleRate.c)
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
