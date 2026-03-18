/*
 * XREFs of GetMonitorRectForDpi @ 0x1C012EBC8
 * Callers:
 *     GetScreenRectForDpi @ 0x1C0034948 (GetScreenRectForDpi.c)
 *     InternalGetRealClientRect @ 0x1C00EC190 (InternalGetRealClientRect.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C012E55C (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     FindOldMonitor @ 0x1C012EA18 (FindOldMonitor.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C01300C8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C01303AC (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C025941C (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025958C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C0035A70 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C0035AD0 (ScaleDPIRect.c)
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rax

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v6 = ExpandMonitorSpaceVertex(a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 66LL), a1->m128i_i64[0]);
    ScaleDPIRect(a1, a1, a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 64LL), v6, a1->m128i_i64[0]);
  }
  return a1;
}
