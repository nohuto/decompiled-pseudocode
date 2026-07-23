/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x14007CDF0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetAdditionalCacheAttributes @ 0x14007CF00 (CcSetAdditionalCacheAttributes.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetAdditionalCacheAttributesEx(struct _FILE_OBJECT *a1, int a2)
{
  _DWORD *SharedCacheMap; // rsi
  unsigned int *v4; // rbx
  BOOLEAN v5; // dl
  __int64 Partition; // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SharedCacheMap = a1->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = SharedCacheMap + 38;
  v5 = (a2 & 2) != 0;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(a1, v5, (a2 & 4) != 0);
  Partition = CcGetPartition(SharedCacheMap);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v7 = *v4;
  if ( (a2 & 1) != 0 )
    v8 = v7 | 0x800000;
  else
    v8 = v7 & 0xFF7FFFFF;
  *v4 = v8;
  if ( (a2 & 8) != 0 )
  {
    v9 = v8 | 0x4000000;
  }
  else
  {
    if ( (v8 & 0x4000000) != 0 )
    {
      v8 |= 0x20000u;
      *v4 = v8;
    }
    v9 = v8 & 0xFBFFFFFF;
  }
  *v4 = v9;
  if ( (a2 & 0x10) != 0 )
    v10 = v9 | 0x10000000;
  else
    v10 = v9 & 0xEFFFFFFF;
  *v4 = v10;
  if ( (a2 & 0x20) != 0 )
    v11 = v10 | 0x8000000;
  else
    v11 = v10 & 0xF7FFFFFF;
  *v4 = v11;
  if ( (a2 & 0x10000000) != 0 )
    v12 = v11 | 0x1000;
  else
    v12 = v11 & 0xFFFFEFFF;
  *v4 = v12;
  KxReleaseQueuedSpinLock(&LockHandle);
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
