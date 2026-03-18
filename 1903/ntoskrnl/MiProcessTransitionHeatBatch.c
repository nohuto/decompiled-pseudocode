/*
 * XREFs of MiProcessTransitionHeatBatch @ 0x1402EBFE8
 * Callers:
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockShared @ 0x14009DCF0 (ExfTryAcquirePushLockShared.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     MiNotifyPageHeat @ 0x1402EBFB4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiProcessTransitionHeatBatch(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v3; // rbx
  _KLOCK_ENTRY *v4; // rdi
  __int64 v5; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int *i; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  _QWORD *v16; // r8
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v18 = 0;
  v3 = KeGetCurrentThread();
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
  {
    v4 = 0LL;
LABEL_3:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0x10u);
    goto LABEL_16;
  }
  LOBYTE(v5) = v3->AbEntrySummary;
  if ( (_BYTE)v5 )
    goto LABEL_7;
  if ( v3->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    LOBYTE(v5) = v3->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_7:
    v7 = v5;
    _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
    v19 = v5;
    v3->AbEntrySummary = v7 & ~(1 << v5);
    v4 = &v3->LockEntries[v5];
    goto LABEL_8;
  }
  v4 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_3;
  EtwTraceAutoBoostEntryExhaustion((__int64)v3, (__int64)&qword_140468538);
LABEL_8:
  if ( !v4 )
    goto LABEL_3;
  if ( (unsigned __int64)&qword_140468538 >= 0xFFFF800000000000uLL
    && byte_140467440[(((unsigned __int64)&qword_140468538 >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  v4->LockState.SessionId = SessionId;
  v4->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)((unsigned __int64)&qword_140468538 & 0x7FFFFFFFFFFFFFFCLL);
LABEL_16:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&qword_140468538, &v18);
  v10 = v3->SpecialApcDisable++ == -1;
  if ( v10 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(v9);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140468538, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&qword_140468538) )
  {
    if ( v4 )
      v4->AcquiredByte |= 1u;
    for ( i = a1 + 4; ; i += 2 )
    {
      if ( i >= &a1[2 * a1[1] + 4] )
      {
        MiNotifyPageHeat(a1, (__int64)i);
        goto LABEL_36;
      }
      v12 = *(_QWORD *)i >> 12;
      v13 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v14 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v13 <<= 9;
          v12 >>= 9;
          LODWORD(v14) = v14 - 1;
        }
        while ( (_DWORD)v14 );
      }
      v15 = v12 + v13;
      if ( v12 < v12 + v13 )
        break;
LABEL_33:
      ;
    }
    v16 = (_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL);
    while ( v12 <= 0xFFFFFFFFFLL && ((*v16 >> 53) & 1) != 0 )
    {
      ++v12;
      v16 += 6;
      if ( v12 >= v15 )
        goto LABEL_33;
    }
LABEL_36:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140468538, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140468538);
    KeAbPostRelease((ULONG_PTR)&qword_140468538);
  }
  else if ( v4 )
  {
    KeAbPostReleaseEx((ULONG_PTR)&qword_140468538, v4);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
