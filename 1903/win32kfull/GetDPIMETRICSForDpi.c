/*
 * XREFs of GetDPIMETRICSForDpi @ 0x1C0021E08
 * Callers:
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C000C064 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C012FA60 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCD30 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F910 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C0021FA8 (GetDPIMETRICSForDpiUnsafe.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 GetDPIMETRICSForDpi()
{
  __int64 result; // rax

  result = GetDPIMETRICSForDpiUnsafe();
  if ( !result )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      return GetSessionDpiMetrics();
    else
      return Get96DpiMetrics();
  }
  return result;
}
