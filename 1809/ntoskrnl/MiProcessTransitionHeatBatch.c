/*
 * XREFs of MiProcessTransitionHeatBatch @ 0x1402CF164
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryAcquirePushLockShared @ 0x140103CD0 (ExfTryAcquirePushLockShared.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiProcessTransitionHeatBatch(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KLOCK_ENTRY *v3; // rbx
  unsigned int *i; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&qword_14043DAB8, 0LL, 1);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_14043DAB8, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&qword_14043DAB8) )
  {
    if ( v3 )
      v3->AcquiredByte |= 1u;
    for ( i = a1 + 4; ; i += 2 )
    {
      if ( i >= &a1[2 * a1[1] + 4] )
      {
        MiNotifyPageHeat(a1, (__int64)i);
        goto LABEL_18;
      }
      v5 = *(_QWORD *)i >> 12;
      v6 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v7 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v6 <<= 9;
          v5 >>= 9;
          LODWORD(v7) = v7 - 1;
        }
        while ( (_DWORD)v7 );
      }
      v8 = v5 + v6;
      if ( v5 < v5 + v6 )
        break;
LABEL_15:
      ;
    }
    v9 = (_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL);
    while ( v5 <= 0xFFFFFFFFFLL && ((*v9 >> 53) & 1) != 0 )
    {
      ++v5;
      v9 += 6;
      if ( v5 >= v8 )
        goto LABEL_15;
    }
LABEL_18:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14043DAB8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14043DAB8);
    KeAbPostRelease((ULONG_PTR)&qword_14043DAB8);
  }
  else if ( v3 )
  {
    KeAbPostReleaseEx((ULONG_PTR)&qword_14043DAB8, v3);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
