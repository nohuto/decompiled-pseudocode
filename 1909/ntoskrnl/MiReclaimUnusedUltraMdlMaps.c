/*
 * XREFs of MiReclaimUnusedUltraMdlMaps @ 0x1400DA428
 * Callers:
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraMapContext @ 0x1400F9324 (MiDeleteUltraMapContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 MiReclaimUnusedUltraMdlMaps()
{
  __int64 result; // rax
  int v1; // ebp
  unsigned int v2; // ebx
  unsigned int v3; // esi
  unsigned __int64 v4; // rdi
  PSLIST_ENTRY v5; // rax
  PSLIST_ENTRY v6; // r15
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  result = 0LL;
  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v3 = 0;
      v4 = (unsigned __int64)v2 << 9;
      do
      {
        while ( *(_WORD *)(v4 + qword_140466478) > 2u )
        {
          v5 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140466478 + ((8LL * v2 + v3) << 6)));
          v6 = v5;
          if ( !v5 )
            break;
          ++v1;
          MiDeleteUltraMapContext(&v5->Next + 1, 3LL);
          ExFreePoolWithTag(v6, 0);
        }
        ++v3;
        v4 += 64LL;
      }
      while ( v3 < 8 );
      result = (unsigned __int16)KeNumberNodes;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
    if ( v1 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140466430, &LockHandle);
      dword_140466470 -= v1;
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
    }
  }
  return result;
}
