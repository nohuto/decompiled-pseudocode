/*
 * XREFs of CcSetAdditionalCacheAttributes @ 0x14007AC70
 * Callers:
 *     CcSetAdditionalCacheAttributesEx @ 0x14007AD20 (CcSetAdditionalCacheAttributesEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __stdcall CcSetAdditionalCacheAttributes(
        PFILE_OBJECT FileObject,
        BOOLEAN DisableReadAhead,
        BOOLEAN DisableWriteBehind)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rbx
  __int64 Partition; // rax
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SectionObjectPointer = FileObject->SectionObjectPointer;
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0x5FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v8 = SharedCacheMap[38];
  if ( DisableReadAhead )
    v9 = v8 | 1;
  else
    v9 = v8 & 0xFFFFFFFE;
  if ( DisableWriteBehind )
    v10 = v9 | 0x202;
  else
    v10 = v9 & 0xFFFFFFFD;
  SharedCacheMap[38] = v10;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
}
