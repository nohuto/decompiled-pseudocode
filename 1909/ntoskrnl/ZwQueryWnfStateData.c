/*
 * XREFs of ZwQueryWnfStateData @ 0x1401C37F0
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x1402A3A3C (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x140313D20 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
