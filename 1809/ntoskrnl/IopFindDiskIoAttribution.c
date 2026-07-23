/*
 * XREFs of IopFindDiskIoAttribution @ 0x1401057C0
 * Callers:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1401056B4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x140105730 (IoRecordIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14012E298 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  unsigned __int64 v1; // rbp
  KIRQL v2; // al
  __int64 v3; // r8
  unsigned __int64 Root; // rbx
  KIRQL v5; // si
  int v6; // edi
  int v7; // eax
  unsigned __int64 v8; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  Root = (unsigned __int64)IopDiskIoAttributionTree.Root;
  v5 = v2;
  if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 && IopDiskIoAttributionTree.Root )
    Root = (unsigned __int64)&IopDiskIoAttributionTree ^ (unsigned __int64)IopDiskIoAttributionTree.Root;
  v6 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  if ( Root )
  {
    do
    {
      v7 = IopDiskIoAttributionTreeCompare(&v11, Root, v3);
      if ( v7 >= 0 )
      {
        if ( v7 <= 0 )
          break;
        v8 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v8 = *(_QWORD *)Root;
      }
      if ( v6 && v8 )
        Root ^= v8;
      else
        Root = v8;
    }
    while ( Root );
    if ( Root )
    {
      v1 = Root;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(Root + 32)) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  return v1;
}
