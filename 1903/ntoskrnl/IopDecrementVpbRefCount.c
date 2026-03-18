/*
 * XREFs of IopDecrementVpbRefCount @ 0x140102B20
 * Callers:
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x140856C30 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rbx
  volatile __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v8; // rdx
  unsigned int v9; // ebx
  int v11; // eax
  struct _KPRCB *v12; // rcx

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
    v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v4, v5);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64(v5, (__int64)v4);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)v4, v8);
    }
    v9 = --*(_DWORD *)(a1 + 28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)KeGetPcr()->NtTib.ArbitraryUserPointer + 6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v12);
    }
    __writecr8(CurrentIrql);
    return v9;
  }
  else
  {
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  }
}
