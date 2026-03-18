/*
 * XREFs of _AdjustWindowRectExForDpi @ 0x1C0033330
 * Callers:
 *     DwmChildRectChange @ 0x1C0032E90 (DwmChildRectChange.c)
 * Callees:
 *     NeedsWindowEdge @ 0x1C0033550 (NeedsWindowEdge.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0033FA4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C004A144 (GetDpiCacheSlot.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExForDpi(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // r8
  unsigned int v13; // ebp
  int v14; // eax
  int DpiDependentMetric; // eax
  int DpiCacheSlot; // eax
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v19; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned int v21; // r14d
  int v22; // esi
  int v23; // eax
  __int64 result; // rax

  v8 = NeedsWindowEdge(a2, a4, *(_DWORD *)(gptiCurrent + 624LL) >= 0x400u);
  v12 = HIWORD(a2);
  v11 = v8;
  LOBYTE(v12) = BYTE2(a2) & 0xC0;
  v13 = 2;
  if ( (BYTE2(a2) & 0xC0) == 0xC0 )
  {
    v10 = gpsi;
    v14 = *(unsigned __int16 *)(gpsi + 6998LL);
    if ( (a4 & 0x80u) == 0 )
    {
      if ( a5 == v14 )
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
      v17 = 2LL;
    }
    else
    {
      if ( a5 == v14 )
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
      v17 = 22LL;
    }
    if ( DpiCacheSlot == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v17, a5);
    else
      DpiDependentMetric = GetDpiDependentMetric(v17, a5);
    goto LABEL_16;
  }
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v12) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
  }
  if ( *(_DWORD *)(v19 + 624) <= 0x9900u )
    v21 = *(_DWORD *)(v19 + 640);
  else
    v21 = 0;
  if ( !v11 )
    v13 = (a4 & 0x20000) != 0;
  if ( (a2 & 0xC00000) != 0 || (a4 & 1) != 0 )
    ++v13;
  if ( (v21 & 0x10000000) != 0 || (v21 & 0x20000000) != 0 )
  {
    v22 = 0;
  }
  else if ( a5 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v22 = *(_DWORD *)(gpsi + 2400LL);
  }
  else if ( a5 == 96 )
  {
    v22 = *(_DWORD *)(gpsi + 2520LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(a5) == -1 )
      v23 = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
    else
      v23 = GetDpiDependentMetric(29LL, a5);
    v22 = v23;
  }
  if ( (a2 & 0x40000) != 0 || v22 > 0 && ((a2 & 0xC00000) == 12582912 || (a2 & 0x40000) != 0) && (v21 & 0x30000000) == 0 )
    v13 += v22 + GetResizeBorderWidthForDpiWithAppCompat2(a5, v21);
  result = v13 + 2;
  if ( (a4 & 0x200) == 0 )
    result = v13;
  if ( (_DWORD)result )
  {
    *a1 -= result;
    a1[2] += result;
    a1[1] -= result;
    a1[3] += result;
  }
  return result;
}
