/*
 * XREFs of MmGetSessionObjectById @ 0x14007F244
 * Callers:
 *     SeSetSessionIdToken @ 0x1405BC45C (SeSetSessionIdToken.c)
 *     SepDuplicateToken @ 0x1406494A0 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x14064FD9C (SepSetTokenSessionById.c)
 *     NtSetInformationObject @ 0x14068D6D0 (NtSetInformationObject.c)
 *     IoGetContainerInformation @ 0x14071DE20 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x140748BB8 (SeExchangePrimaryToken.c)
 *     IoRegisterContainerNotification @ 0x140760000 (IoRegisterContainerNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionById @ 0x14007E4E0 (MmGetSessionById.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
    KeAcquireInStackQueuedSpinLock(&qword_14043AE80, &LockHandle);
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
