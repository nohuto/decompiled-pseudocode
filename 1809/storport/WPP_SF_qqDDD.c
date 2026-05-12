/*
 * XREFs of WPP_SF_qqDDD @ 0x1C004B868
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000DCE0 (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids);
}
