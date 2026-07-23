/*
 * XREFs of CcUnmapInactiveViews @ 0x14026AB50
 * Callers:
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     MiObtainSystemCacheView @ 0x1400AD160 (MiObtainSystemCacheView.c)
 *     MiDereferenceSegmentThread @ 0x1401876E0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1402A3220 (MiRemoveUnusedSegments.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetNextPartitionUnsafe @ 0x1401201EC (PsGetNextPartitionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AC9C (CcUnmapInactiveViewsInternal.c)
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
