/*
 * XREFs of GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0069244
 * Callers:
 *     GetWindowBordersWithDpiAwareness @ 0x1C00691A4 (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowBordersForDpi @ 0x1C00AC334 (GetWindowBordersForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C0020A38 (GetDpiCacheSlot.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C006BC28 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01B8D20 (_ScaleSystemMetricForDPIWithoutCache.c)
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
  __int64 v13; // r8
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
      DpiDependentMetric = GetDpiDependentMetric(29LL, a5, v13);
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
