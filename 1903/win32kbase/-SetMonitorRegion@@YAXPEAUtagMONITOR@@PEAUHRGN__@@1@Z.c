/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C009B42C
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C001F930 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C003C510 (GetMonitorDC.c)
 * Callees:
 *     GreOffsetRgn @ 0x1C0015600 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C003CAD4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C003CB48 (GetMonitorRect.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C003DE78 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GreSetRectRgn @ 0x1C0053B00 (GreSetRectRgn.c)
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
