/*
 * XREFs of GetMonitorRectForDpiContext @ 0x1C00368A0
 * Callers:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x1C00149A0 (_MonitorFromPoint.c)
 *     InitializeDPIINFO @ 0x1C0030B74 (InitializeDPIINFO.c)
 *     GetScreenRectForDpiContext @ 0x1C00348D0 (GetScreenRectForDpiContext.c)
 *     GetMonitorTransform @ 0x1C0034A54 (GetMonitorTransform.c)
 *     GetMonitorRectForWindow @ 0x1C0036864 (GetMonitorRectForWindow.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C02594E8 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C0035A70 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C0035AD0 (ScaleDPIRect.c)
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
