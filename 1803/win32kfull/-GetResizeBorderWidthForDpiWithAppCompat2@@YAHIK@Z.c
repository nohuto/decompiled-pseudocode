/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0073410
 * Callers:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0022430 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00731D4 (_AdjustWindowRectExForDpi.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00C3254 (GetResizeBorderWidthForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpiWithAppCompat2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int DpiDependentMetric; // eax

  v4 = a2;
  v5 = a1;
  if ( (a2 & 0x10000000) != 0 )
  {
    return 1;
  }
  else
  {
    v6 = ((int)a1 * *(_DWORD *)(Get96DpiServerInfo(a1, a2, a3, a4) + 4) + 48) / 96;
    if ( (v4 & 0x20000000) != 0 )
    {
      if ( v5 == *(unsigned __int16 *)(gpsi + 6998LL) )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2400LL);
      }
      else if ( v5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2520LL);
      }
      else if ( (unsigned int)GetDpiCacheSlot(v5) == -1 )
      {
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, v5);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(29LL, v5);
      }
      v6 += DpiDependentMetric;
    }
  }
  return v6;
}
