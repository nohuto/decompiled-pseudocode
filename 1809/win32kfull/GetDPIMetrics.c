/*
 * XREFs of GetDPIMetrics @ 0x1C00AB99C
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00AA6A4 (GetWindowNCMetrics.c)
 *     xxxSetNCFonts @ 0x1C00BF664 (xxxSetNCFonts.c)
 *     MNSetupAnimationDC @ 0x1C00EBED8 (MNSetupAnimationDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     MNAllocMenuState @ 0x1C01F99E4 (MNAllocMenuState.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0209DFC (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C022DECC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0231004 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNAnimate @ 0x1C0231404 (MNAnimate.c)
 *     MNEraseBackground @ 0x1C0231918 (MNEraseBackground.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 */

__int64 __fastcall GetDPIMetrics(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // dx

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) == 0 )
    return Get96DpiMetrics();
  v3 = *(_WORD *)(PsGetCurrentProcessWin32Process(v2) + 284);
  if ( v3 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiMetrics();
  else
    return GetDPIMETRICSForDpi(v3);
}
