/*
 * XREFs of _AdjustWindowRectExForDpi @ 0x1C0092608
 * Callers:
 *     DwmChildRectChange @ 0x1C0092168 (DwmChildRectChange.c)
 * Callees:
 *     NeedsWindowEdge @ 0x1C0092828 (NeedsWindowEdge.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C009327C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCD30 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExForDpi(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // r15d
  __int64 v13; // r8
  unsigned int v14; // ebp
  int v15; // eax
  int DpiDependentMetric; // eax
  int DpiCacheSlot; // eax
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v20; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned int v22; // r14d
  int v23; // esi
  int v24; // eax
  __int64 result; // rax

  v8 = NeedsWindowEdge(a2, a4, *(_DWORD *)(gptiCurrent + 624LL) >= 0x400u);
  v13 = HIWORD(a2);
  v12 = v8;
  LOBYTE(v13) = BYTE2(a2) & 0xC0;
  v14 = 2;
  if ( (BYTE2(a2) & 0xC0) == 0xC0 )
  {
    v10 = gpsi;
    v15 = *(unsigned __int16 *)(gpsi + 6998LL);
    if ( (a4 & 0x80u) == 0 )
    {
      if ( a5 == v15 )
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
      v18 = 2LL;
    }
    else
    {
      if ( a5 == v15 )
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
      v18 = 22LL;
    }
    if ( DpiCacheSlot == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v18, a5);
    else
      DpiDependentMetric = GetDpiDependentMetric(v18, a5);
    goto LABEL_16;
  }
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v13, v11) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v20 = *ThreadWin32Thread;
  }
  if ( *(_DWORD *)(v20 + 624) <= 0x9900u )
    v22 = *(_DWORD *)(v20 + 640);
  else
    v22 = 0;
  if ( !v12 )
    v14 = (a4 & 0x20000) != 0;
  if ( (a2 & 0xC00000) != 0 || (a4 & 1) != 0 )
    ++v14;
  if ( (v22 & 0x10000000) != 0 || (v22 & 0x20000000) != 0 )
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
      v24 = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
    else
      v24 = GetDpiDependentMetric(29LL, a5);
    v23 = v24;
  }
  if ( (a2 & 0x40000) != 0 || v23 > 0 && ((a2 & 0xC00000) == 12582912 || (a2 & 0x40000) != 0) && (v22 & 0x30000000) == 0 )
    v14 += v23 + GetResizeBorderWidthForDpiWithAppCompat2(a5, v22);
  result = v14 + 2;
  if ( (a4 & 0x200) == 0 )
    result = v14;
  if ( (_DWORD)result )
  {
    *a1 -= result;
    a1[2] += result;
    a1[1] -= result;
    a1[3] += result;
  }
  return result;
}
