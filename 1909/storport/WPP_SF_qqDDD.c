/*
 * XREFs of WPP_SF_qqDDD @ 0x1C004A240
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000BA5C (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids);
}
