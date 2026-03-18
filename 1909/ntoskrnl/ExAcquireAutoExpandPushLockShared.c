/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x1400EF150
 * Callers:
 *     MiLockAwePagesShared @ 0x1402D6BE0 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1402D6C3C (MiLockAweVadsShared.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rsi
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v7; // rcx
  int SessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // eax
  ULONG_PTR v13; // rbx
  unsigned __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // ecx
  volatile signed __int64 *v18; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+70h] [rbp+18h]
  unsigned int v22; // [rsp+78h] [rbp+20h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v20 = 0;
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
    v21 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    v2 = (__int64)&CurrentThread->LockEntries[v7];
    if ( v2 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140467140[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v20);
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v10, v9);
      }
      goto LABEL_13;
    }
LABEL_29:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_10;
  }
LABEL_13:
  v12 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v12 & 1) != 0 )
  {
    v15 = ((unsigned __int64)(v12 & 0xFFFFFFF8) >> 4) & 0x1FF;
    v16 = ((v12 & 0xFFFFFFF8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v17, v16);
    v22 = v17;
    v18 = (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v17 - 2)
                                                + 8LL * (v16 ^ (1 << v17))
                                                + 8)
                                    + 8 * v15);
    if ( _InterlockedCompareExchange64(v18, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v18, v2, BugCheckParameter2);
    v13 = (ULONG_PTR)v18;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, BugCheckParameter2);
    v13 = BugCheckParameter2 | 1;
  }
  if ( !v4 )
    v13 |= 2uLL;
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return v13;
}
