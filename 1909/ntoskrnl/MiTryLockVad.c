/*
 * XREFs of MiTryLockVad @ 0x14013BCCC
 * Callers:
 *     MiDeprioritizeVad @ 0x14013BBFC (MiDeprioritizeVad.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v5; // esi
  unsigned __int8 AbEntrySummary; // cl
  __int64 v7; // rax
  _KLOCK_ENTRY *v8; // rdi
  int SessionId; // eax
  __int64 v10; // rcx
  bool v11; // zf
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+50h] [rbp+18h]

  if ( *(char *)(a1 + 1768) < 0 )
    return 0LL;
  v14 = 0;
  v3 = a2 + 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = 1;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
  {
    v8 = 0LL;
    goto LABEL_11;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
        goto LABEL_11;
      EtwTraceAutoBoostEntryExhaustion(CurrentThread, a2 + 40);
      goto LABEL_5;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v15 = v7;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = &CurrentThread->LockEntries[v7];
LABEL_5:
  if ( v8 )
  {
    if ( v3 >= 0xFFFF800000000000uLL && byte_140467140[((v3 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    v8->LockState.SessionId = SessionId;
    v8->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(v3 & 0x7FFFFFFFFFFFFFFCLL);
    goto LABEL_12;
  }
LABEL_11:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_12:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v14);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v3, v8);
    return 0;
  }
  else
  {
    if ( v8 )
      v8->AcquiredByte |= 1u;
    *(_BYTE *)(a1 + 1768) |= 0x80u;
  }
  return v5;
}
