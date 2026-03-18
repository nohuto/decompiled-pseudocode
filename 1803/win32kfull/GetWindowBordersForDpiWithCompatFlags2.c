/*
 * XREFs of GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0022430
 * Callers:
 *     GetWindowBordersWithDpiAwareness @ 0x1C0022390 (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0073410 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowBordersForDpiWithCompatFlags2(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int16 v7; // bp
  int v9; // r8d
  unsigned int v10; // esi
  int v11; // ebx
  __int64 result; // rax
  int DpiDependentMetric; // eax

  v7 = a2;
  if ( (a2 & 0x100) != 0 )
    v9 = 2;
  else
    v9 = (a2 & 0x20000) != 0;
  v10 = v9 + 1;
  if ( (a1 & 0xC00000) == 0 && (a2 & 1) == 0 )
    v10 = v9;
  if ( (a6 & 0x10000000) != 0 || (a6 & 0x20000000) != 0 )
  {
    v11 = 0;
  }
  else if ( a5 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v11 = *(_DWORD *)(gpsi + 2400LL);
  }
  else if ( a5 == 96 )
  {
    v11 = *(_DWORD *)(gpsi + 2520LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(a5) == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
    else
      DpiDependentMetric = GetDpiDependentMetric(29LL, a5);
    v11 = DpiDependentMetric;
  }
  if ( (a1 & 0x40000) != 0 || (result = v10, v11 > 0) && (a1 & 0xC00000) == 0xC00000 && (a6 & 0x30000000) == 0 )
    result = v11 + v10 + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(a5, a6);
  if ( a4 )
  {
    if ( (v7 & 0x200) != 0 )
      return (unsigned int)(result + 2);
  }
  return result;
}
