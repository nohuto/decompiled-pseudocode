/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003A670
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 * Callees:
 *     GreOffsetRgn @ 0x1C001CB60 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C001E010 (GreSetRectRgn.c)
 *     GetMonitorRect @ 0x1C0039468 (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0039B78 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C003A6F0 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  _OWORD *MonitorRect; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  MonitorRegionForDpi = GetMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegionForDpi, 1) )
  {
    MonitorRect = GetMonitorRect(&v9, (__int64)a1);
    GreOffsetRgn(a2, -*(_DWORD *)MonitorRect, -HIDWORD(*(_QWORD *)MonitorRect));
  }
  else
  {
    GreSetRectRgn(a2, 0, 0, 0, 0);
  }
}
