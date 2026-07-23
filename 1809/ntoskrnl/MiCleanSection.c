/*
 * XREFs of MiCleanSection @ 0x14016983C
 * Callers:
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x140122240 (MiAttemptSectionDelete.c)
 * Callees:
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiInsertUnusedSegment @ 0x14007B590 (MiInsertUnusedSegment.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDestroySection @ 0x1401698BC (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRemoveWakeListEntry @ 0x1402A3400 (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, __int64 a2, char a3)
{
  KIRQL v4; // si
  BOOL v6; // r15d
  volatile LONG *v8; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  int v10; // edi
  __int64 v11; // rax
  int v12; // ecx
  __int64 inserted; // rdi
  __int64 v14; // rbx
  struct _KPRCB *v15; // rcx
  NTSTATUS v16[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+58h] [rbp-28h]
  int v19; // [rsp+5Ch] [rbp-24h]
  __int16 v20; // [rsp+60h] [rbp-20h]
  char v21; // [rsp+62h] [rbp-1Eh]
  int v22; // [rsp+64h] [rbp-1Ch]
  _QWORD v23[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 64) != 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    v19 = 0;
    v22 = 0;
    v8 = (volatile LONG *)(a1 + 72);
    v23[1] = v23;
    v18 = 4;
    v23[0] = v23;
    v17 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v17;
    v20 = 263;
    v21 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v4);
    v10 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 0x80000000, v16);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    MiRemoveWakeListEntry(a1, &v17);
    if ( !v19 )
      break;
    v11 = *(_QWORD *)(a1 + 40);
    if ( v11 != 1 || *(_QWORD *)(a1 + 24) )
    {
      v12 = 1;
      goto LABEL_15;
    }
  }
  if ( v10 >= 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(a2) = v4;
    MiDestroySection(a1, a2, 0LL);
    return 1LL;
  }
  v11 = *(_QWORD *)(a1 + 40);
  v12 = 2;
LABEL_15:
  *(_QWORD *)(a1 + 40) = v11 - 1;
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  inserted = 0LL;
  if ( v12 == 2 && (inserted = MiInsertUnusedSegment(a1)) != 0 )
    v14 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v14 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v15);
  }
  __writecr8(v4);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v14, v6, inserted);
  return 0LL;
}
