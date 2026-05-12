/*
 * XREFs of WPP_SF_qdd @ 0x1C003BB90
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C00032C0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_2427d071e20036a288b852fd33055616_Traceguids);
}
