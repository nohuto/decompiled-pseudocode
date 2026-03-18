/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x14007AD20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcSetAdditionalCacheAttributes @ 0x14007AC70 (CcSetAdditionalCacheAttributes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetAdditionalCacheAttributesEx(PFILE_OBJECT FileObject, int a2)
{
  _DWORD *SharedCacheMap; // rbx
  BOOLEAN v4; // dl
  __int64 Partition; // rax
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = (a2 & 2) != 0;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(FileObject, v4, (a2 & 4) != 0);
  Partition = CcGetPartition(SharedCacheMap);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v6 = SharedCacheMap[38];
  if ( (a2 & 1) != 0 )
    v7 = v6 | 0x800000;
  else
    v7 = v6 & 0xFF7FFFFF;
  SharedCacheMap[38] = v7;
  if ( (a2 & 8) != 0 )
  {
    v8 = v7 | 0x4000000;
  }
  else
  {
    if ( (v7 & 0x4000000) != 0 )
      v7 |= 0x20000u;
    v8 = v7 & 0xFBFFFFFF;
  }
  if ( (a2 & 0x10) != 0 )
    v9 = v8 | 0x10000000;
  else
    v9 = v8 & 0xEFFFFFFF;
  SharedCacheMap[38] = v9;
  if ( (a2 & 0x20) != 0 )
    v10 = v9 | 0x8000000;
  else
    v10 = v9 & 0xF7FFFFFF;
  SharedCacheMap[38] = v10;
  if ( (a2 & 0x10000000) != 0 )
    v11 = v10 | 0x1000;
  else
    v11 = v10 & 0xFFFFEFFF;
  SharedCacheMap[38] = v11;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
