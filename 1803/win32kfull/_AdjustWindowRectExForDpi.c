/*
 * XREFs of _AdjustWindowRectExForDpi @ 0x1C00731D4
 * Callers:
 *     DwmChildRectChange @ 0x1C0072D4C (DwmChildRectChange.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0073370 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     NeedsWindowEdge @ 0x1C00733B4 (NeedsWindowEdge.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0073410 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExForDpi(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rdx
  unsigned int v9; // esi
  int v10; // ebp
  __int64 ThreadWin32Thread; // rax
  int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  int WindowFrameMetricForDpiWithCompatFlags2; // ebp
  __int64 result; // rax
  int v17; // ecx
  int v18; // eax
  int DpiDependentMetric; // eax
  int DpiCacheSlot; // eax
  __int64 v21; // rcx

  if ( (unsigned int)NeedsWindowEdge(a2, a4, *(_DWORD *)(gptiCurrent + 624LL) >= 0x400u) )
    v9 = a4 | 0x100;
  else
    v9 = a4 & 0xFFFFFEFF;
  v10 = 2;
  if ( (BYTE2(a2) & 0xC0) != 0xC0 )
    goto LABEL_4;
  v18 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( (v9 & 0x80u) != 0 )
  {
    if ( a5 == v18 )
    {
      DpiDependentMetric = *(_DWORD *)(gpsi + 2372LL);
      goto LABEL_24;
    }
    if ( a5 == 96 )
    {
      DpiDependentMetric = *(_DWORD *)(gpsi + 2492LL);
      goto LABEL_24;
    }
    DpiCacheSlot = GetDpiCacheSlot(a5);
    v21 = 22LL;
LABEL_33:
    if ( DpiCacheSlot == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v21, a5);
    else
      DpiDependentMetric = GetDpiDependentMetric(v21, a5);
    goto LABEL_24;
  }
  if ( a5 != v18 )
  {
    if ( a5 == 96 )
    {
      DpiDependentMetric = *(_DWORD *)(gpsi + 2412LL);
      goto LABEL_24;
    }
    DpiCacheSlot = GetDpiCacheSlot(a5);
    v21 = 2LL;
    goto LABEL_33;
  }
  DpiDependentMetric = *(_DWORD *)(gpsi + 2292LL);
LABEL_24:
  a1[1] -= DpiDependentMetric;
LABEL_4:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
  if ( *(_DWORD *)(ThreadWin32Thread + 624) > 0x9900u )
    v13 = 0;
  else
    v13 = *(_DWORD *)(ThreadWin32Thread + 640);
  if ( (v9 & 0x100) == 0 )
    v10 = (v9 & 0x20000) != 0;
  v14 = v10 + 1;
  LOBYTE(v12) = (a2 & 0xC00000) == 0;
  if ( ((unsigned __int8)v12 & ((v9 & 1) == 0)) != 0 )
    v14 = v10;
  WindowFrameMetricForDpiWithCompatFlags2 = GetWindowFrameMetricForDpiWithCompatFlags2(v12, a5, v13);
  if ( (a2 & 0x40000) != 0
    || (result = v14, WindowFrameMetricForDpiWithCompatFlags2 > 0)
    && ((a2 & 0xC00000) == 12582912 || (a2 & 0x40000) != 0)
    && (v13 & 0x30000000) == 0 )
  {
    result = WindowFrameMetricForDpiWithCompatFlags2
           + v14
           + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(a5, v13);
  }
  v17 = result + 2;
  if ( (v9 & 0x200) == 0 )
    v17 = result;
  if ( v17 )
  {
    *a1 -= v17;
    a1[2] += v17;
    a1[1] -= v17;
    a1[3] += v17;
  }
  return result;
}
