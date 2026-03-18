/*
 * XREFs of MmGetSessionObjectById @ 0x140002348
 * Callers:
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x14061B264 (SepSetTokenSessionById.c)
 *     NtSetInformationObject @ 0x1406B3490 (NtSetInformationObject.c)
 *     SeSetSessionIdToken @ 0x1406E6D14 (SeSetSessionIdToken.c)
 *     IoGetContainerInformation @ 0x140748550 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x14074AC24 (SeExchangePrimaryToken.c)
 *     IoRegisterContainerNotification @ 0x14078A830 (IoRegisterContainerNotification.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void *__fastcall MmGetSessionObjectById(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 SessionById; // rax
  void *v4; // rsi
  __int64 v5; // rbx
  unsigned __int8 OldIrql; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SessionById = MmGetSessionById(a1, a2);
  v4 = (void *)SessionById;
  if ( SessionById )
  {
    v5 = *(_QWORD *)(SessionById + 1024);
    v2 = *(void **)(v5 + 72);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( (*(_DWORD *)(v5 + 4) & 2) != 0 )
      v2 = 0LL;
    else
      ObfReferenceObjectWithTag(v2, 0x746C6644u);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    __writecr8(OldIrql);
    ObfDereferenceObject(v4);
  }
  return v2;
}
