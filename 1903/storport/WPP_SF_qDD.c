/*
 * XREFs of WPP_SF_qdd @ 0x1C0037A58
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0006F80 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids);
}
