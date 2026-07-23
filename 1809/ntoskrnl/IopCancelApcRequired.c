/*
 * XREFs of IopCancelApcRequired @ 0x14008DAA0
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1406772D4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x14081A8FC (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r14
  KIRQL v7; // al
  _QWORD *v8; // rdx
  KIRQL v9; // bp
  _QWORD *v10; // rcx
  unsigned int v11; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (KSPIN_LOCK *)(a1 + 1856);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1856));
  v8 = (_QWORD *)(a1 + 1648);
  v9 = v7;
  v10 = *(_QWORD **)(a1 + 1648);
  if ( v10 == (_QWORD *)(a1 + 1648) )
  {
    v11 = 0;
  }
  else if ( a3 || (v11 = 1, a2) )
  {
    v11 = 0;
    while ( v8 != v10 )
    {
      if ( (*(_DWORD *)(v10 - 2) & 2) == 0 && (v10[5] == a3 && (!a2 || v10[20] == a2) || !a3 && v10[20] == a2) )
      {
        v11 = 1;
        break;
      }
      v10 = (_QWORD *)*v10;
    }
  }
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v9);
  return v11;
}
