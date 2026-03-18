/*
 * XREFs of GetMonitorRectForDpiContext @ 0x1C0095B68
 * Callers:
 *     InitializeDPIINFO @ 0x1C002A704 (InitializeDPIINFO.c)
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C0091B40 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     GetScreenRectForDpiContext @ 0x1C0093BA8 (GetScreenRectForDpiContext.c)
 *     GetMonitorTransform @ 0x1C0093D2C (GetMonitorTransform.c)
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C0259C28 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C0094D40 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 */

__m128i *__fastcall GetMonitorRectForDpiContext(__m128i *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v5; // di
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v9; // rax
  __m128i v10; // [rsp+30h] [rbp-18h] BYREF

  if ( (a3 & 0xF) == 2 && (a3 & 0x20000000) != 0 )
  {
    *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 72LL);
  }
  else
  {
    v5 = (a3 >> 8) & 0x1FF;
    v6 = *(_QWORD *)(a2 + 40);
    v7 = *(__m128i *)(v6 + 28);
    v10 = v7;
    if ( v5 )
    {
      v9 = ExpandMonitorSpaceVertex(v5, *(_WORD *)(v6 + 66), v10.m128i_i64[0]);
      ScaleDPIRect(&v10, &v10, v5, *(_WORD *)(*(_QWORD *)(a2 + 40) + 64LL), v9, v10.m128i_i64[0]);
      v7 = v10;
    }
    *a1 = v7;
  }
  return a1;
}
