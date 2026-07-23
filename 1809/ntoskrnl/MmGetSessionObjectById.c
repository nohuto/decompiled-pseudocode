/*
 * XREFs of MmGetSessionObjectById @ 0x14007F234
 * Callers:
 *     SeSetSessionIdToken @ 0x1405BD45C (SeSetSessionIdToken.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x140650F3C (SepSetTokenSessionById.c)
 *     NtSetInformationObject @ 0x14068E870 (NtSetInformationObject.c)
 *     IoGetContainerInformation @ 0x14071F0A0 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x140749D88 (SeExchangePrimaryToken.c)
 *     IoRegisterContainerNotification @ 0x1407611D0 (IoRegisterContainerNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void *__fastcall MmGetSessionObjectById(unsigned int a1)
{
  void *v1; // rdi
  __int64 SessionById; // rax
  void *v3; // rsi
  __int64 v4; // rbx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  SessionById = MmGetSessionById(a1);
  v3 = (void *)SessionById;
  if ( SessionById )
  {
    v4 = *(_QWORD *)(SessionById + 1024);
    v1 = *(void **)(v4 + 72);
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    if ( (*(_DWORD *)(v4 + 4) & 2) != 0 )
      v1 = 0LL;
    else
      ObfReferenceObjectWithTag(v1, 0x746C6644u);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    ObfDereferenceObject(v3);
  }
  return v1;
}
