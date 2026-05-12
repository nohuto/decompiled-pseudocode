/*
 * XREFs of WPP_SF_qqqD @ 0x1C00413D0
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C00112EC (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids);
}
