/*
 * XREFs of WPP_SF_qqDDD @ 0x1C00490D0
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000BA0C (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_a32982da72aa344f3768c69018313f42_Traceguids);
}
