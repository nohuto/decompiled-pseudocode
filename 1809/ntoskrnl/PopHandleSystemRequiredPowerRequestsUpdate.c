/*
 * XREFs of PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400039AC
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x14058AD88 (PopHandleConvergedPowerRequestUpdate.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 */

void __fastcall PopHandleSystemRequiredPowerRequestsUpdate(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  int v3; // eax
  unsigned __int8 OldIrql; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  if ( a1 == 1 )
  {
    v2 = 1;
  }
  else
  {
    if ( a1 != 3 )
      return;
    v2 = 2;
  }
  PopAcquirePolicyLock();
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  if ( PopPowerRequestAttributes[4 * v1] <= 0 )
    v3 = ~v2 & dword_1404186E4;
  else
    v3 = v2 | dword_1404186E4;
  dword_1404186E4 = v3;
  if ( !v3 )
    dword_140418700 = dword_1404186C8;
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  __writecr8(OldIrql);
  PopCheckResiliencyScenarios();
  PopReleasePolicyLock();
}
