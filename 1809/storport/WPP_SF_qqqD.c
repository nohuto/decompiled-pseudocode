/*
 * XREFs of WPP_SF_qqqD @ 0x1C00449DC
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C0013118 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids);
}
