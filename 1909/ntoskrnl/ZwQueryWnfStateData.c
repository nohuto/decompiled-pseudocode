/*
 * XREFs of ZwQueryWnfStateData @ 0x1401C37F0
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x1402A3A3C (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x140313D20 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
