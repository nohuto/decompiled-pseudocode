/*
 * XREFs of WPP_SF_Zq @ 0x1C0004734
 * Callers:
 *     CiDispatchInitialize @ 0x1C000DCC0 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00036F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_afe1eb84e33d340bfb8547d758f773ef_Traceguids);
}
