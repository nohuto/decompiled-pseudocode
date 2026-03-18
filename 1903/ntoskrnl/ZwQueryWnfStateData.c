/*
 * XREFs of ZwQueryWnfStateData @ 0x1401C2C70
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x1402A3CDC (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
