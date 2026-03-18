/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x14009B6D0
 * Callers:
 *     MiLockAwePagesShared @ 0x1402D6E80 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1402D6EDC (MiLockAweVadsShared.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rsi
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v7; // rcx
  int SessionId; // eax
  bool v9; // zf
  int v10; // eax
  ULONG_PTR v11; // rbx
  unsigned __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // ecx
  volatile signed __int64 *v16; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]
  unsigned int v20; // [rsp+78h] [rbp+20h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v18 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_29;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v19 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    v2 = (__int64)&CurrentThread->LockEntries[v7];
    if ( v2 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140467440[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v2 + 40) = SessionId;
      *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v18);
      v9 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v9
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_13;
    }
LABEL_29:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_10;
  }
LABEL_13:
  v10 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v10 & 1) != 0 )
  {
    v13 = ((unsigned __int64)(v10 & 0xFFFFFFF8) >> 4) & 0x1FF;
    v14 = ((v10 & 0xFFFFFFF8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v15, v14);
    v20 = v15;
    v16 = (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v15 - 2)
                                                + 8LL * (v14 ^ (1 << v15))
                                                + 8)
                                    + 8 * v13);
    if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, v2, BugCheckParameter2);
    v11 = (ULONG_PTR)v16;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, BugCheckParameter2);
    v11 = BugCheckParameter2 | 1;
  }
  if ( !v4 )
    v11 |= 2uLL;
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return v11;
}
