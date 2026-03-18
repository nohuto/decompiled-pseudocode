/*
 * XREFs of MmGetSessionObjectById @ 0x140002348
 * Callers:
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x140619754 (SepSetTokenSessionById.c)
 *     NtSetInformationObject @ 0x1406C7830 (NtSetInformationObject.c)
 *     SeSetSessionIdToken @ 0x1406E5E90 (SeSetSessionIdToken.c)
 *     IoGetContainerInformation @ 0x140746650 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x14078038C (SeExchangePrimaryToken.c)
 *     IoRegisterContainerNotification @ 0x1407883D0 (IoRegisterContainerNotification.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
