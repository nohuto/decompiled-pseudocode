/*
 * XREFs of GetMonitorRectForDpi @ 0x1C0091AB8
 * Callers:
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C008F870 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     FindOldMonitor @ 0x1C0091908 (FindOldMonitor.c)
 *     GetScreenRectForDpi @ 0x1C0093C20 (GetScreenRectForDpi.c)
 *     InternalGetRealClientRect @ 0x1C01112E0 (InternalGetRealClientRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C0259B5C (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0259CCC (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C0094D40 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 */

__int64 *__fastcall GetMonitorRectForDpi(__int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rax

  *(_OWORD *)a1 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v6 = ExpandMonitorSpaceVertex(a3, *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 66LL), *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 64LL), v6, *a1);
  }
  return a1;
}
