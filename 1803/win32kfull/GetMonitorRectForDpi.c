/*
 * XREFs of GetMonitorRectForDpi @ 0x1C00737A0
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00591B0 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C00642F8 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     FindOldMonitor @ 0x1C007223C (FindOldMonitor.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     GetScreenRectForDpi @ 0x1C0073584 (GetScreenRectForDpi.c)
 *     GetMonitorTransform @ 0x1C0073680 (GetMonitorTransform.c)
 *     GetMonitorRectForWindow @ 0x1C0073764 (GetMonitorRectForWindow.c)
 *     InitializeDPIINFO @ 0x1C0079F6C (InitializeDPIINFO.c)
 *     InternalGetRealClientRect @ 0x1C00F3E30 (InternalGetRealClientRect.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C022AEC4 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C022AF90 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00738F4 (ExpandMonitorSpaceVertex.c)
 */

__int64 *__fastcall GetMonitorRectForDpi(__int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax

  *(_OWORD *)a1 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v7 = ExpandMonitorSpaceVertex(a3, *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 66LL), *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 64LL), v7, *a1);
  }
  return a1;
}
