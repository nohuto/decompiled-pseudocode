/*
 * XREFs of EtwpCovSampContextCleanup @ 0x1408C5D5C
 * Callers:
 *     EtwpCoverageSamplerCleanup @ 0x1408C8E68 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1408C74E0 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampProcessCleanup @ 0x1408C83F0 (EtwpCovSampProcessCleanup.c)
 */

_QWORD *__fastcall EtwpCovSampContextCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // r10
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *i; // r8
  _QWORD *v7; // r8
  _QWORD *j; // rcx
  _QWORD *v9; // r10
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *k; // r8
  _QWORD *v13; // r8
  _QWORD *m; // rcx
  _QWORD *v15; // rsi
  void *v16; // rcx

  EtwpCovSampProcessCleanup(a1 + 736, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  v3 = *(_QWORD **)(a1 + 688);
  v4 = v3;
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_7;
    v5 = (_QWORD *)*v4;
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (_QWORD *)*v4;
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
LABEL_7:
      for ( i = v3 + 1; ; ++i )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 688) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 684) >> 5) )
        {
          v5 = 0LL;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v4 = (_QWORD *)*i;
      v3 = i;
      v5 = (_QWORD *)*i;
    }
    else
    {
      v4 = v5;
    }
LABEL_12:
    if ( !v5 )
      break;
    v7 = v4;
    for ( j = v3; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v4 )
      {
        *j = *v4;
        --*(_DWORD *)(a1 + 680);
        *v4 |= 0x8000000000000002uLL;
        v4 = j;
        goto LABEL_20;
      }
    }
    v7 = 0LL;
LABEL_20:
    *v7 = 0LL;
  }
  v9 = *(_QWORD **)(a1 + 704);
  v10 = v9;
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_27;
    v11 = (_QWORD *)*v10;
    if ( (*v10 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v11 = (_QWORD *)*v10;
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
LABEL_27:
      for ( k = v9 + 1; ; ++k )
      {
        if ( (unsigned __int64)k >= *(_QWORD *)(a1 + 704) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 700) >> 5) )
        {
          v11 = 0LL;
          goto LABEL_32;
        }
        if ( (*k & 1) == 0 )
          break;
      }
      v10 = (_QWORD *)*k;
      v9 = k;
      v11 = (_QWORD *)*k;
    }
    else
    {
      v10 = v11;
    }
LABEL_32:
    if ( !v11 )
      break;
    v13 = v10;
    for ( m = v9; (*m & 1) == 0; m = (_QWORD *)*m )
    {
      if ( (_QWORD *)*m == v10 )
      {
        *m = *v10;
        --*(_DWORD *)(a1 + 696);
        *v10 |= 0x8000000000000002uLL;
        v10 = m;
        goto LABEL_40;
      }
    }
    v13 = 0LL;
LABEL_40:
    *v13 = 0LL;
  }
  v15 = (_QWORD *)(a1 + 712);
  while ( (_QWORD *)*v15 != v15 )
  {
    *(_DWORD *)(*v15 - 72LL + 132) = 0;
    EtwpCovSampContextRemoveAndFreeModule(a1);
  }
  v16 = *(void **)(a1 + 688);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x56777445u);
  *(_QWORD *)(a1 + 672) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664));
  KeAbPostRelease(a1 + 664);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
