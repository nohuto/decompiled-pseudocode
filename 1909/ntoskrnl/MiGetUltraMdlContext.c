/*
 * XREFs of MiGetUltraMdlContext @ 0x1402E7F84
 * Callers:
 *     MmMapMdl @ 0x1402C51C0 (MmMapMdl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400F8DA8 (MiCreateUltraThreadContextHelper.c)
 *     MiDeleteUltraMapContext @ 0x1400F9324 (MiDeleteUltraMapContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiGetUltraMdlContext()
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  PSLIST_ENTRY result; // rax
  PVOID PoolWithTag; // rax
  void *v5; // rbx
  int v6; // esi
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0;
  v1 = __rdtsc() >> 4;
  v2 = 8LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  do
  {
    LODWORD(v1) = v1 & 7;
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140466478 + ((v2 + (unsigned int)v1) << 6)));
    if ( result )
      return result;
    LOBYTE(v1) = v1 + 1;
    ++v0;
  }
  while ( v0 < 8 );
  if ( (unsigned int)dword_140466470 >= 0x80 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6D55694Du);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x28uLL);
  if ( !(unsigned int)MiCreateUltraThreadContextHelper((__int64)v5 + 8, 3u, 0) )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  v6 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140466430, &LockHandle);
  if ( (unsigned int)dword_140466470 >= 0x80 )
    v6 = 1;
  else
    ++dword_140466470;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v6 )
  {
    MiDeleteUltraMapContext((__int64)v5 + 8, 3u);
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)v5;
}
