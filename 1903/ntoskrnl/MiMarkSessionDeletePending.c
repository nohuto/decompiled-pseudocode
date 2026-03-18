/*
 * XREFs of MiMarkSessionDeletePending @ 0x140166CA8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140727B5C (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMarkSessionDeletePending(__int64 a1)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( *(_DWORD *)(a1 + 100) )
  {
    *(_DWORD *)(a1 + 108) = 0;
    *(_WORD *)(a1 + 104) = 263;
    *(_BYTE *)(a1 + 106) = 6;
    *(_QWORD *)(a1 + 120) = a1 + 112;
    *(_QWORD *)(a1 + 112) = a1 + 112;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    return KeWaitForGate(a1 + 104, 18);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v2 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v6 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v6);
    }
    result = v2;
    __writecr8(v2);
  }
  return result;
}
