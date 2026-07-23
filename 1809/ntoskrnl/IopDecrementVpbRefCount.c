/*
 * XREFs of IopDecrementVpbRefCount @ 0x1400B88D0
 * Callers:
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x14081DDB0 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  char *v5; // rbx
  volatile __int64 *v6; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v9; // rdx
  unsigned int v10; // ebx
  int v12; // eax
  struct _KPRCB *v13; // rcx

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
    v6 = (volatile __int64 *)*((_QWORD *)v5 + 1);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[5];
        SchedulerAssist[5] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v5, v6);
    }
    else
    {
      v9 = (_QWORD *)_InterlockedExchange64(v6, (__int64)v5);
      if ( v9 )
        KxWaitForLockOwnerShip((__int64)v5, v9, a3);
    }
    v10 = --*(_DWORD *)(a1 + 28);
    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v13);
    }
    __writecr8(CurrentIrql);
    return v10;
  }
  else
  {
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  }
}
