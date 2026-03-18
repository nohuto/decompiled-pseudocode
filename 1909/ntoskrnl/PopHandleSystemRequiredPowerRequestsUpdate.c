/*
 * XREFs of PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400D5F84
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x140671960 (PopHandleConvergedPowerRequestUpdate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 */

__int64 __fastcall PopHandleSystemRequiredPowerRequestsUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  v3 = (int)a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)a1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    if ( (_DWORD)a1 != 3 )
      return result;
    v4 = 2;
  }
  PopAcquirePolicyLock(a1, a2);
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  if ( PopPowerRequestAttributes[4 * v3] <= 0 )
    v5 = ~v4 & dword_140442F24;
  else
    v5 = v4 | dword_140442F24;
  dword_140442F24 = v5;
  if ( !v5 )
    dword_140442F40 = dword_140442F08;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  PopCheckResiliencyScenarios(v7, v6);
  return PopReleasePolicyLock(v10, v9);
}
