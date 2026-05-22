/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x18002CF42
 * Callers:
 *     __imp_load_GetSystemMetrics @ 0x18002CF36 (__imp_load_GetSystemMetrics.c)
 *     __imp_load_SystemParametersInfoW @ 0x18002CFC1 (__imp_load_SystemParametersInfoW.c)
 *     __imp_load_GetMonitorInfoW @ 0x18002CFD3 (__imp_load_GetMonitorInfoW.c)
 *     __imp_load_EnumDisplayMonitors @ 0x18002CFE5 (__imp_load_EnumDisplayMonitors.c)
 *     __imp_load_DisplayConfigGetDeviceInfo @ 0x18002CFF7 (__imp_load_DisplayConfigGetDeviceInfo.c)
 *     __imp_load_GetDisplayConfigBufferSizes @ 0x18002D009 (__imp_load_GetDisplayConfigBufferSizes.c)
 *     __imp_load_QueryDisplayConfig @ 0x18002D01B (__imp_load_QueryDisplayConfig.c)
 *     __imp_load_MonitorFromPoint @ 0x18002D02D (__imp_load_MonitorFromPoint.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180008DA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
