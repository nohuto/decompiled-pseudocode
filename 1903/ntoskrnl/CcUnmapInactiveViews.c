/*
 * XREFs of CcUnmapInactiveViews @ 0x14027E468
 * Callers:
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 *     CcGetVacbMiss @ 0x140076C40 (CcGetVacbMiss.c)
 *     MiDereferenceSegmentThread @ 0x140191000 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1402BA3E0 (MiRemoveUnusedSegments.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x14007E0D4 (CcDereferencePartition.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PsGetNextPartitionUnsafe @ 0x1400F97DC (PsGetNextPartitionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(_QWORD *a1)
{
  unsigned __int8 v1; // si
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  _UNKNOWN **NextPartitionUnsafe; // rdi
  __int64 v8; // rcx

  v1 = 0;
  if ( !CcInitializationComplete || !CcNumberOfMappedVacbs )
    return 0LL;
  if ( a1 )
  {
    v8 = a1[1];
    if ( v8 )
      return CcUnmapInactiveViewsInternal(v8, 64LL);
    return 0LL;
  }
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    v2 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v3 = (__int64)NextPartitionUnsafe[1];
    v4 = v2;
    if ( v3 && *(_BYTE *)(v3 + 902) < 2u )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 904)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v3 = 0LL;
    }
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v4);
    if ( v3 )
    {
      v1 |= CcUnmapInactiveViewsInternal(v3, 64LL);
      CcDereferencePartition(v3);
    }
    a1 = NextPartitionUnsafe;
  }
  return v1;
}
