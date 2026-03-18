/*
 * XREFs of PpmIdleSnapConcurrency @ 0x1400BD6F0
 * Callers:
 *     PpmParkSnapNodeStatistics @ 0x1400BD654 (PpmParkSnapNodeStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

void __fastcall PpmIdleSnapConcurrency(PKSPIN_LOCK SpinLock, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rbp
  KSPIN_LOCK v5; // rax
  KSPIN_LOCK v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  size_t v9; // r8
  __int16 v10; // [rsp+20h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _disable();
  KxAcquireSpinLock(SpinLock);
  v5 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v5 )
  {
    SpinLock[2] = PerformanceCounter.QuadPart;
    v6 = PerformanceCounter.QuadPart - v5;
    v7 = *((unsigned int *)SpinLock + 3);
    SpinLock[3] += v6;
    SpinLock[v7 + 4] += v6;
  }
  v8 = *(void **)a2;
  v9 = 8LL * *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a2 + 24) = SpinLock[3];
  memmove(v8, SpinLock + 4, v9);
  KxReleaseSpinLock(SpinLock);
  if ( (v10 & 0x200) != 0 )
    _enable();
}
