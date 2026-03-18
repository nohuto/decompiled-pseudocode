/*
 * XREFs of IopFindDiskIoAttribution @ 0x1400E72C0
 * Callers:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400E71BC (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1400E7230 (IoRecordIoAttribution.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14012DE18 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  __int64 v1; // rbp
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // rbx
  KIRQL v5; // si
  int v6; // edi
  int v7; // eax
  __int64 v8; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v4 = IopDiskIoAttributionTree;
  v5 = v2;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 && (_QWORD)IopDiskIoAttributionTree )
    v4 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
  v6 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( v4 )
  {
    do
    {
      v7 = IopDiskIoAttributionTreeCompare(&v11, v4, v3);
      if ( v7 >= 0 )
      {
        if ( v7 <= 0 )
          break;
        v8 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        v8 = *(_QWORD *)v4;
      }
      if ( v6 && v8 )
        v4 ^= v8;
      else
        v4 = v8;
    }
    while ( v4 );
    if ( v4 )
    {
      v1 = v4;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 32)) <= 1 )
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
