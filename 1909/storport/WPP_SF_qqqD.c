/*
 * XREFs of WPP_SF_qqqD @ 0x1C00427C0
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C001148C (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids);
}
