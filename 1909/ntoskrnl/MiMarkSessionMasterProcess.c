/*
 * XREFs of MiMarkSessionMasterProcess @ 0x14017A750
 * Callers:
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSessionAddProcess @ 0x1406F1DB0 (MiSessionAddProcess.c)
 */

__int64 __fastcall MiMarkSessionMasterProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  MiSessionAddProcess(a1, a2);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = a2 + 16;
  v11 = *(_DWORD *)(a1 + 1464);
  BYTE1(v11) |= 1u;
  *(_WORD *)(a1 + 1464) = v11;
  v5 = (_QWORD *)(a1 + 840);
  v6 = *(_QWORD **)(v4 + 8);
  if ( *v6 != v4 )
    __fastfail(3u);
  *v5 = v4;
  v5[1] = v6;
  *v6 = v5;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
