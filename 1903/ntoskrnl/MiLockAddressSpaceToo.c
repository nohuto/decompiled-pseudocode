/*
 * XREFs of MiLockAddressSpaceToo @ 0x1400ABE04
 * Callers:
 *     MiPrepareVadDelete @ 0x140670574 (MiPrepareVadDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 */

_QWORD *__fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v4; // rbp
  struct _KTHREAD *v5; // rbx
  unsigned __int8 AbEntrySummary; // cl
  __int64 v7; // rax
  _KLOCK_ENTRY *v8; // rsi
  int SessionId; // eax
  _QWORD *result; // rax
  __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+50h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v14 = 0;
  v4 = a1 + 880;
  v5 = KeGetCurrentThread();
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
  {
    v8 = 0LL;
    goto LABEL_10;
  }
  AbEntrySummary = v5->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_3;
  if ( v5->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v5->AbEntrySummary;
LABEL_3:
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v15 = v7;
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    v8 = &v5->LockEntries[v7];
    goto LABEL_4;
  }
  v8 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_10;
  EtwTraceAutoBoostEntryExhaustion(v5, v4);
LABEL_4:
  if ( !v8 )
  {
LABEL_10:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_11;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140467440[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  else
    SessionId = -1;
  v8->LockState.SessionId = SessionId;
  v8->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(v4 & 0x7FFFFFFFFFFFFFFCLL);
LABEL_11:
  --v5->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)v5, v4, &v14);
  if ( v5->SpecialApcDisable++ == -1 )
  {
    result = &v5->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery(v11);
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v4, v8);
    MiUnlockVad((__int64)CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    return (_QWORD *)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    if ( v8 )
      v8->AcquiredByte |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  return result;
}
