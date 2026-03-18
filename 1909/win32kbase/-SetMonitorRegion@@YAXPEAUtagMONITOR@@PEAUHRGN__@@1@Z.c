/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0049F1C
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C002E29C (GetMonitorDC.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C000F200 (GreSetRectRgn.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C0049CF0 (GreOffsetRgn.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0049F9C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GetMonitorRect @ 0x1C004CC00 (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C004D4C8 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  _DWORD *MonitorRect; // rax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  MonitorRegionForDpi = GetMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegionForDpi, 1) )
  {
    MonitorRect = (_DWORD *)GetMonitorRect(v9, a1);
    GreOffsetRgn(a2, -*MonitorRect, -HIDWORD(*(_QWORD *)MonitorRect));
  }
  else
  {
    GreSetRectRgn(a2, 0, 0, 0, 0);
  }
}
