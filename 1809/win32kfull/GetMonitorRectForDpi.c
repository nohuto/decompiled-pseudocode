/*
 * XREFs of GetMonitorRectForDpi @ 0x1C001CCF4
 * Callers:
 *     GetMonitorRectForWindow @ 0x1C001CCB8 (GetMonitorRectForWindow.c)
 *     InitializeDPIINFO @ 0x1C0075F94 (InitializeDPIINFO.c)
 *     GetMonitorTransform @ 0x1C0079FE8 (GetMonitorTransform.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     GetScreenRectForDpi @ 0x1C007ABA4 (GetScreenRectForDpi.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C00CDC10 (FindOldMonitor.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CF3B4 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C010DD3C (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     InternalGetRealClientRect @ 0x1C010EABC (InternalGetRealClientRect.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C0240E40 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0240F0C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C001C9C4 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C001CA24 (ScaleDPIRect.c)
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v7 = ExpandMonitorSpaceVertex(a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 66LL), a1->m128i_i64[0]);
    ScaleDPIRect(a1, a1, a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 64LL), v7, a1->m128i_i64[0]);
  }
  return a1;
}
