/*
 * XREFs of WPP_SF_dddd @ 0x1C003F8CC
 * Callers:
 *     StorPortDeviceBusy @ 0x1C003C590 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids);
}
