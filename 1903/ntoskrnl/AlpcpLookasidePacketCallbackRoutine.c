/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x1400B4490
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x1400E3FB8 (IoSetIoCompletionEx2.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400E6D60 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // esi
  int v6; // r15d
  int v7; // eax
  int v8; // eax
  unsigned __int8 OldIrql; // bp
  LONG_PTR result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  void *v12; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v2 = a2[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  while ( 1 )
  {
    v6 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &LockHandle);
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 )
    {
      *(_DWORD *)(v2 + 16) = v7 - 1;
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 20);
      if ( v8 )
      {
        v6 = -1;
        *(_DWORD *)(v2 + 20) = v8 - 1;
      }
      else
      {
        --*(_DWORD *)(v2 + 12);
        a1 = 0LL;
        *a2 = *(_QWORD *)(v2 + 32);
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v3 = 1;
      }
    }
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
    if ( !a1 )
      break;
    if ( ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40)) )
    {
      v12 = *(void **)(v2 + 40);
      IoSetIoCompletionEx2(
        (_DWORD)v12,
        *(_QWORD *)(v2 + 48),
        v6,
        0,
        0LL,
        0,
        a1,
        0,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock);
      result = ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      break;
    }
  }
  if ( v3 )
    return AlpcpDeferredFreeCompletionPacketLookaside((PVOID)v2);
  return result;
}
