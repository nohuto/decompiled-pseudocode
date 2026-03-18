/*
 * XREFs of _AdjustWindowRectExForDpi @ 0x1C00A7904
 * Callers:
 *     DwmChildRectChange @ 0x1C00A746C (DwmChildRectChange.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C0020A38 (GetDpiCacheSlot.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C006BC28 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     NeedsWindowEdge @ 0x1C00A7B24 (NeedsWindowEdge.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01B8D20 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExForDpi(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r15d
  unsigned int v11; // ebp
  int v12; // eax
  int DpiDependentMetric; // eax
  int DpiCacheSlot; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned int v21; // r14d
  int v22; // r15d
  int v23; // esi
  __int64 v24; // r8
  int v25; // eax
  __int64 result; // rax

  v10 = NeedsWindowEdge(a2, a4, *(_DWORD *)(gptiCurrent + 632LL) >= 0x400u);
  v11 = 2;
  if ( (BYTE2(a2) & 0xC0) == 0xC0 )
  {
    v9 = gpsi;
    v12 = *(unsigned __int16 *)(gpsi + 6998LL);
    if ( (a4 & 0x80u) == 0 )
    {
      if ( a5 == v12 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2292LL);
        goto LABEL_16;
      }
      if ( a5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2412LL);
        goto LABEL_16;
      }
      DpiCacheSlot = GetDpiCacheSlot(a5);
      v16 = 2LL;
    }
    else
    {
      if ( a5 == v12 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2372LL);
LABEL_16:
        a1[1] -= DpiDependentMetric;
        goto LABEL_17;
      }
      if ( a5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2492LL);
        goto LABEL_16;
      }
      DpiCacheSlot = GetDpiCacheSlot(a5);
      v16 = 22LL;
    }
    if ( DpiCacheSlot == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v16, a5);
    else
      DpiDependentMetric = GetDpiDependentMetric(v16, a5, v15);
    goto LABEL_16;
  }
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v18 = *ThreadWin32Thread;
  }
  if ( *(_DWORD *)(v18 + 632) <= 0x9900u )
    v21 = *(_DWORD *)(v18 + 648);
  else
    v21 = 0;
  if ( !v10 )
    v11 = (a4 & 0x20000) != 0;
  v22 = a2 & 0xC00000;
  if ( (a2 & 0xC00000) != 0 || (a4 & 1) != 0 )
    ++v11;
  if ( (v21 & 0x10000000) != 0 || (v21 & 0x20000000) != 0 )
  {
    v23 = 0;
  }
  else if ( a5 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v23 = *(_DWORD *)(gpsi + 2400LL);
  }
  else if ( a5 == 96 )
  {
    v23 = *(_DWORD *)(gpsi + 2520LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(a5) == -1 )
      v25 = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
    else
      v25 = GetDpiDependentMetric(29LL, a5, v24);
    v23 = v25;
  }
  if ( (a2 & 0x40000) != 0
    || v23 > 0 && (LOBYTE(v19) = v22 != 12582912, v22 == 12582912 || (a2 & 0x40000) != 0) && (v21 & 0x30000000) == 0 )
  {
    v11 += v23 + GetResizeBorderWidthForDpiWithAppCompat2(a5, v21, v19);
  }
  result = v11 + 2;
  if ( (a4 & 0x200) == 0 )
    result = v11;
  if ( (_DWORD)result )
  {
    *a1 -= result;
    a1[2] += result;
    a1[1] -= result;
    a1[3] += result;
  }
  return result;
}
