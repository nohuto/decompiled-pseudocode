/*
 * XREFs of GetDPIMETRICSForDpi @ 0x1C012A5CC
 * Callers:
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00E9A1C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00EB1C4 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0128B34 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F2F0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023F9CC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C012A76C (GetDPIMETRICSForDpiUnsafe.c)
 */

__int64 GetDPIMETRICSForDpi()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  result = GetDPIMETRICSForDpiUnsafe();
  if ( !result )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v2, v1, v3) & 0xF) != 0 )
      return GetSessionDpiMetrics();
    else
      return Get96DpiMetrics();
  }
  return result;
}
