/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x14008CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x14008DDF0 (IopCancelWaitCompletionPacket.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     EvaluateCurrentState @ 0x1401B3674 (EvaluateCurrentState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rbp
  KIRQL v6; // si
  KSPIN_LOCK *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v9; // si
  struct _KPRCB *v10; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 1 )
  {
    v4 = (KSPIN_LOCK *)(a2 + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_2410109243_59422653_FeatureDescriptorDetails) )
      *(_BYTE *)(a2 + 105) = 1;
    v7 = *(KSPIN_LOCK **)(a2 + 88);
    if ( v7 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 88), 0x746C6644u);
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
    if ( v7 )
    {
      KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
      v9 = KeAcquireSpinLockRaiseToDpc(v4);
      EvaluateCurrentState(&g_Feature_2410109243_59422653_FeatureDescriptorDetails);
      if ( !*(_BYTE *)(a2 + 104) || !(unsigned __int8)IopCancelWaitCompletionPacket((PVOID)a2) )
      {
        KxReleaseSpinLock(v4);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          v10 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v10);
        }
        __writecr8(v9);
      }
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v12 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v12);
      }
      __writecr8(OldIrql);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
  }
}
