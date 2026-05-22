/*
 * XREFs of ?GetHitTestSpanHimetric@EdgeGestureMetrics@@SA?AUD2D_VECTOR_2F@@XZ @ 0x180102A48
 * Callers:
 *     ?EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z @ 0x1801008E8 (-EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z.c)
 * Callees:
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x180102A74 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 */

struct D2D_VECTOR_2F EdgeGestureMetrics::GetHitTestSpanHimetric(void)
{
  struct RegistryWatcher **v0; // rax

  v0 = EdgeGestureMetrics::s_edgeGestureMetrics;
  if ( !EdgeGestureMetrics::s_edgeGestureMetrics )
  {
    EdgeGestureMetrics::Initialize();
    v0 = EdgeGestureMetrics::s_edgeGestureMetrics;
  }
  return (struct D2D_VECTOR_2F)v0[1];
}
