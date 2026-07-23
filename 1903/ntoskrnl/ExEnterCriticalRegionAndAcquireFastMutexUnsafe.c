/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14009ED50
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  char v6; // cl
  int SessionId; // eax
  __int64 result; // rax
  unsigned __int8 AbOrphanedEntrySummary; // di
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  v10 = 0;
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  LOBYTE(v5) = v3->AbEntrySummary;
  if ( !(_BYTE)v5 )
  {
    if ( !v3->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v3, BugCheckParameter2);
      goto LABEL_17;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    LOBYTE(v5) = AbOrphanedEntrySummary | v3->AbEntrySummary;
  }
  v6 = v5;
  _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
  v11 = v5;
  v3->AbEntrySummary = v6 & ~(1 << v5);
  v4 = (__int64)&v3->LockEntries[v5];
  if ( !v4 )
  {
LABEL_17:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0x10u);
    goto LABEL_7;
  }
  if ( (unsigned int)MmIsSessionAddress(BugCheckParameter2) )
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v4 + 40) = SessionId;
  *(_QWORD *)(v4 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, BugCheckParameter2, &v10);
  result = KiLeaveGuardedRegionUnsafe((__int64)v3);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
    result = ExpAcquireFastMutexContended(BugCheckParameter2, (PRTL_BALANCED_NODE)v4);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  *(_QWORD *)(BugCheckParameter2 + 8) = v3;
  return result;
}
