/*
 * XREFs of WPP_SF_dddd @ 0x1C0041854
 * Callers:
 *     StorPortDeviceBusy @ 0x1C003EA70 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids);
}
