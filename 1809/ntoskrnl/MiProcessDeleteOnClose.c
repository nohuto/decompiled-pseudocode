/*
 * XREFs of MiProcessDeleteOnClose @ 0x1402A2B70
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401876E0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x14007B590 (MiInsertUnusedSegment.c)
 *     MiUnlinkUnusedControlArea @ 0x14007BAC0 (MiUnlinkUnusedControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x1401698BC (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiProcessDeleteOnClose(__int64 a1)
{
  int v1; // r15d
  _QWORD *v2; // r12
  unsigned int v3; // r13d
  volatile LONG *v4; // r14
  KIRQL v6; // bl
  _QWORD *v7; // rax
  __int64 v8; // rdi
  volatile LONG *v9; // rbp
  struct _KPRCB *v10; // rcx
  __int64 inserted; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+78h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (_QWORD *)(a1 + 1536);
  v3 = -1;
  v4 = (volatile LONG *)(a1 + 1280);
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(v4);
    v7 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( (++v1 & 0x3F) == 0 && *(_DWORD *)(a1 + 1284) >= v3 )
    {
      if ( v7 != v2 )
      {
        *(_BYTE *)(a1 + 1616) = 1;
        KiSetTimerEx(a1 + 1552, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
        goto LABEL_29;
      }
      break;
    }
    v3 = *(_DWORD *)(a1 + 1284);
    v8 = (__int64)(v7 - 1);
    v9 = (volatile LONG *)(v7 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9) )
    {
      MiUnlinkUnusedControlArea(v8);
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
      if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
      {
        MiDestroySection(v8, v6, 0LL);
      }
      else if ( *(_DWORD *)(v8 + 76) )
      {
        inserted = MiInsertUnusedSegment(v8);
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v6);
        if ( inserted )
          MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      }
      else
      {
        v15 = 0LL;
        if ( (unsigned int)MiFlushControlArea((char *)v8, v6, &v16, &v15) == 1 )
          MiDestroySection(v8, v6, v15);
        if ( v16 )
          MiReleaseControlAreaWaiters(v16);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
      {
        v10 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      __writecr8(v6);
    }
  }
  *(_BYTE *)(a1 + 1616) = 0;
LABEL_29:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v13);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
