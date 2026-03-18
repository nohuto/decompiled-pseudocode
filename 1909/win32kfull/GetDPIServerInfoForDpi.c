/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C012AF80
 * Callers:
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     GetScaledLogFontForDpi @ 0x1C012A5EC (GetScaledLogFontForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C012A974 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     InitProcessSystemDpi @ 0x1C012AB20 (InitProcessSystemDpi.c)
 *     GetProcessDpiServerInfo @ 0x1C012C194 (GetProcessDpiServerInfo.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C013CBA0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C004A144 (GetDpiCacheSlot.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01CC5F4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(__int64 a1, __int64 a2, __int64 a3)
{
  int DpiCacheSlot; // eax
  int v5; // r11d
  int v6; // ecx
  struct tagDPISERVERINFO *v7; // rbx

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  if ( (_DWORD)a1 == 96 )
    return Get96DpiServerInfo(a1, a2, a3);
  DpiCacheSlot = GetDpiCacheSlot(a1);
  v6 = 0;
  if ( DpiCacheSlot != -1 )
    v6 = DpiCacheSlot;
  v7 = (struct tagDPISERVERINFO *)(gpsi + 104 * (v6 + 49LL));
  EnsureServerInfoForDpi(v7, v5);
  return (__int64)v7;
}
