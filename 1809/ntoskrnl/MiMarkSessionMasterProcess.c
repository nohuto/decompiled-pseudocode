/*
 * XREFs of MiMarkSessionMasterProcess @ 0x1401709B0
 * Callers:
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSessionAddProcess @ 0x1406D1FA4 (MiSessionAddProcess.c)
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

  MiSessionAddProcess();
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  v4 = a2 + 16;
  v11 = *(_DWORD *)(a1 + 1464);
  BYTE1(v11) |= 1u;
  *(_WORD *)(a1 + 1464) = v11;
  v5 = (_QWORD *)(a1 + 832);
  v6 = *(_QWORD **)(v4 + 8);
  if ( *v6 != v4 )
    __fastfail(3u);
  *v5 = v4;
  v5[1] = v6;
  *v6 = v5;
  *(_QWORD *)(v4 + 8) = v5;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
