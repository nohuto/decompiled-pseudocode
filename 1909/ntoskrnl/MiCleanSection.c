/*
 * XREFs of MiCleanSection @ 0x14017085C
 * Callers:
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x1401257AC (MiAttemptSectionDelete.c)
 * Callees:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSegment @ 0x140070468 (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x1401708F8 (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiRemoveWakeListEntry @ 0x1402BA320 (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, KIRQL a2, char a3)
{
  __int64 v6; // rdx
  BOOL v7; // r15d
  volatile LONG *v9; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  int v11; // edi
  __int64 v12; // rax
  int v13; // ecx
  __int64 inserted; // rdi
  __int64 v15; // rbx
  struct _KPRCB *v16; // rcx
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[6]; // [rsp+50h] [rbp-30h] BYREF

  v17[0] = 0LL;
  v17[1] = 0LL;
  memset(v18, 0, 0x28uLL);
  v7 = *(_QWORD *)(a1 + 64) != 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    HIDWORD(v18[2]) = 0;
    v9 = (volatile LONG *)(a1 + 72);
    v18[4] = &v18[3];
    v18[1] = 4LL;
    v18[3] = &v18[3];
    v18[0] = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v18;
    LOWORD(v18[2]) = 263;
    BYTE2(v18[2]) = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a2);
    v11 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 0x80000000, (unsigned int *)v17);
    a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    MiRemoveWakeListEntry(a1, v18);
    if ( !HIDWORD(v18[1]) )
      break;
    v12 = *(_QWORD *)(a1 + 40);
    if ( v12 != 1 || *(_QWORD *)(a1 + 24) )
    {
      v13 = 1;
      goto LABEL_15;
    }
  }
  if ( v11 >= 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(v6) = a2;
    MiDestroySection(a1, v6, 0LL);
    return 1LL;
  }
  v12 = *(_QWORD *)(a1 + 40);
  v13 = 2;
LABEL_15:
  *(_QWORD *)(a1 + 40) = v12 - 1;
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  inserted = 0LL;
  if ( v13 == 2 && (inserted = MiInsertUnusedSegment(a1)) != 0 )
    v15 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v15 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  __writecr8(a2);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v15, v7, inserted);
  return 0LL;
}
