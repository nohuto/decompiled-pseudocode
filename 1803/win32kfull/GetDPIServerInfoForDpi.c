/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C0053A58
 * Callers:
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0013DB8 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0013F30 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GetScaledLogFontForDpi @ 0x1C00142A4 (GetScaledLogFontForDpi.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C0053960 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InitProcessSystemDpi @ 0x1C005F700 (InitProcessSystemDpi.c)
 *     GetProcessDpiServerInfo @ 0x1C00FB044 (GetProcessDpiServerInfo.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C0197934 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int DpiCacheSlot; // eax
  int v6; // r11d
  struct tagDPISERVERINFO *v7; // rbx

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( (_DWORD)a1 == 96 )
    return Get96DpiServerInfo(a1, a2, a3, a4);
  DpiCacheSlot = GetDpiCacheSlot(a1);
  if ( DpiCacheSlot == -1 )
    DpiCacheSlot = 0;
  v7 = (struct tagDPISERVERINFO *)(gpsi + 104 * (DpiCacheSlot + 49LL));
  EnsureServerInfoForDpi(v7, v6);
  return (__int64)v7;
}
