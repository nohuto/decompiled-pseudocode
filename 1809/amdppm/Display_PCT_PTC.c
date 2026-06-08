/*
 * XREFs of Display_PCT_PTC @ 0x1C0006F9C
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00209E4 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0020D1C (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C0003D18 (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C0007C04 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_PCT_PTC(__int64 a1, const char *a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x5Fu,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x60u,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
        a2);
    DisplayGenAddr(a1, "  ");
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x61u,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x62u,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
        a2);
    result = DisplayGenAddr(a1 + 12, "  ");
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x63u,
               (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
  }
  return result;
}
