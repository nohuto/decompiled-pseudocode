/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x14008DB80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeReleaseSpinLock @ 0x140063070 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x14008DD0C (IopCancelWaitCompletionPacket.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  PVOID v4; // r14
  KSPIN_LOCK *v5; // rdi
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rsi
  KIRQL v8; // bp
  KIRQL v9; // al
  _BYTE *v10; // r15
  KIRQL v11; // bp
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v3 = result;
  if ( result >= 0 )
  {
    v4 = Object;
    v5 = (KSPIN_LOCK *)((char *)Object + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v7 = (KSPIN_LOCK *)*((_QWORD *)v4 + 11);
    v8 = v6;
    if ( v7 )
      ObfReferenceObjectWithTag(*((PVOID *)v4 + 11), 0x746C6644u);
    KeReleaseSpinLock(v5, v8);
    if ( !v7 )
    {
      v3 = -1073741536;
LABEL_20:
      ObfDereferenceObject(Object);
      return v3;
    }
    KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
    v9 = KeAcquireSpinLockRaiseToDpc(v5);
    v10 = Object;
    v11 = v9;
    if ( *((_BYTE *)Object + 104) )
    {
      if ( *((KSPIN_LOCK **)v4 + 11) == v7 )
      {
        if ( (unsigned __int8)IopCancelWaitCompletionPacket(Object) )
          goto LABEL_14;
        if ( v10[104] )
          v3 = 259;
      }
      else
      {
        v3 = -1073700861;
      }
    }
    else
    {
      v3 = -1073741536;
    }
    KeReleaseSpinLock(v5, v11);
LABEL_14:
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    ObfDereferenceObject(v7);
    goto LABEL_20;
  }
  return result;
}
