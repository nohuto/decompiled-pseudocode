/*
 * XREFs of ExpTryConvertSharedToExclusiveLite @ 0x14033A738
 * Callers:
 *     ExTryConvertSharedToExclusiveLite @ 0x14033A478 (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x14003B680 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryUpgradeResource @ 0x14033E764 (ExpTryUpgradeResource.c)
 */

char ExpTryConvertSharedToExclusiveLite()
{
  __int64 CurrentThread; // rbx
  char v1; // di
  unsigned int v2; // ecx
  ULONG_PTR *v3; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = (__int64)KeGetCurrentThread();
  KeAcquireInStackQueuedSpinLock(&CmpRegistryLock + 12, &LockHandle);
  v1 = ExpTryUpgradeResource(&CmpRegistryLock);
  if ( v1 )
  {
    v2 = (CurrentThread & 3) != 0 ? 0 : *(unsigned __int8 *)(CurrentThread + 649);
    v3 = ExpFindCurrentThread((__int64)&CmpRegistryLock, CurrentThread, (__int64)&LockHandle, 0, 0, v2);
    if ( v3 != &CmpRegistryLock + 6 )
    {
      *((_OWORD *)&CmpRegistryLock + 3) = *(_OWORD *)v3;
      *((_DWORD *)&CmpRegistryLock + 14) = _mm_cvtsi128_si32(_mm_srli_si128(*((__m128i *)&CmpRegistryLock + 3), 8)) & 7 | 8;
      *v3 = 0LL;
      v3[1] = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v1;
}
