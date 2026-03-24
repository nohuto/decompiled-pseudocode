/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x14008DC40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeReleaseSpinLock @ 0x140063080 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x14008DDF0 (IopCancelWaitCompletionPacket.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDF0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     EvaluateCurrentState @ 0x1401B3694 (EvaluateCurrentState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS result; // eax
  int v2; // ebx
  PVOID v3; // rdi
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // al
  KSPIN_LOCK *v6; // r14
  KIRQL v7; // bp
  KIRQL v8; // bp
  bool v9; // zf
  char v10; // al
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             a1,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v2 = result;
  if ( result < 0 )
    return result;
  v3 = Object;
  v4 = (KSPIN_LOCK *)((char *)Object + 96);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  v6 = (KSPIN_LOCK *)*((_QWORD *)v3 + 11);
  v7 = v5;
  if ( v6 )
    ObfReferenceObjectWithTag(*((PVOID *)v3 + 11), 0x746C6644u);
  KeReleaseSpinLock(v4, v7);
  if ( !v6 )
  {
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_2410109243_59422653_FeatureDescriptorDetails) )
      ObfDereferenceObject(v3);
    return -1073741536;
  }
  KeAcquireInStackQueuedSpinLock(v6 + 8, &LockHandle);
  v8 = KeAcquireSpinLockRaiseToDpc(v4);
  v9 = (unsigned int)EvaluateCurrentState(&g_Feature_2410109243_59422653_FeatureDescriptorDetails) == 0;
  v10 = *((_BYTE *)v3 + 104);
  if ( v9 )
  {
    if ( !v10 )
      goto LABEL_10;
  }
  else
  {
    if ( !v10 )
    {
LABEL_10:
      v2 = -1073741536;
      goto LABEL_17;
    }
    if ( *((KSPIN_LOCK **)v3 + 11) != v6 )
    {
      v2 = -1073700861;
      goto LABEL_17;
    }
  }
  if ( (unsigned __int8)IopCancelWaitCompletionPacket(Object) )
    goto LABEL_18;
  if ( *((_BYTE *)v3 + 104) )
    v2 = 259;
LABEL_17:
  KeReleaseSpinLock(v4, v8);
LABEL_18:
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  ObfDereferenceObject(v6);
  ObfDereferenceObject(Object);
  return v2;
}
