/*
 * XREFs of ZwQueryWnfStateData @ 0x1401BACF0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F55A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
