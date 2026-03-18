/*
 * XREFs of MiReserveEnclavePages @ 0x1402D51C8
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140893AC4 (MiCreateHardwareEnclave.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetEnclavePage @ 0x1402D46DC (MiGetEnclavePage.c)
 */

__int64 __fastcall MiReserveEnclavePages(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // edi
  unsigned __int8 OldIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a2 + 516, &LockHandle);
  v6 = a2[512];
  if ( v6 < a3 )
  {
    v7 = -1073741801;
  }
  else
  {
    a2[512] = v6 - a3;
    v7 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v7 < 0 )
    return (unsigned int)v7;
  for ( *(_QWORD *)(a1 + 104) += a3; a3; --a3 )
  {
    v11 = (_QWORD *)(48 * MiGetEnclavePage(a2, 1) - 0x58000000000LL);
    *v11 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = v11;
  }
  return 0LL;
}
