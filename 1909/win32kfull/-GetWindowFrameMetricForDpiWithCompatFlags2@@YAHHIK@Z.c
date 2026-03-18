/*
 * XREFs of ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0033F60
 * Callers:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0033E80 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetWindowFrameMetricForDpi @ 0x1C012C374 (GetWindowFrameMetricForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C004A144 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpiWithCompatFlags2(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // r11d

  if ( (a3 & 0x10000000) != 0 || (a3 & 0x20000000) != 0 )
    return 0LL;
  if ( a2 == *(unsigned __int16 *)(gpsi + 6998LL) )
    return *(unsigned int *)(gpsi + 2400LL);
  if ( a2 == 96 )
    return *(unsigned int *)(gpsi + 2520LL);
  if ( (unsigned int)GetDpiCacheSlot(a2) == -1 )
    return ScaleSystemMetricForDPIWithoutCache(29LL, v4);
  return GetDpiDependentMetric(29LL, v4);
}
