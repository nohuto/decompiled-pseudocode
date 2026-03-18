/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x1400EBD88
 * Callers:
 *     PspIoRateEntryActivate @ 0x1405B36C0 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x14068AA8C (PspSetJobIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14012E6B0 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoStartDiskIoAttributionForContext(unsigned __int64 a1)
{
  KIRQL v2; // al
  _BOOL8 v3; // r8
  unsigned __int64 v4; // rbx
  KIRQL v5; // si
  int v6; // edi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  v4 = IopDiskIoAttributionTree;
  v5 = v2;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 && (_QWORD)IopDiskIoAttributionTree )
    v4 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
  LOBYTE(v3) = 0;
  v6 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare(a1 + 24, v4, v3) < 0 )
      {
        v7 = *(_QWORD *)v4;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_15;
          v7 ^= v4;
        }
        if ( !v7 )
        {
LABEL_15:
          LOBYTE(v3) = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(v4 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_16;
          v7 ^= v4;
        }
        if ( !v7 )
        {
LABEL_16:
          LOBYTE(v3) = 1;
          break;
        }
      }
      v4 = v7;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&IopDiskIoAttributionTree, v4, v3, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
