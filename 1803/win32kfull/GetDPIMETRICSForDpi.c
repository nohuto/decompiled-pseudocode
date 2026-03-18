/*
 * XREFs of GetDPIMETRICSForDpi @ 0x1C0013D64
 * Callers:
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C000B45C (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000CED4 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0013858 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0013DB8 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C01048F8 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C01FECA4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01FF2E4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C0013D84 (GetDPIMETRICSForDpiUnsafe.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
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
