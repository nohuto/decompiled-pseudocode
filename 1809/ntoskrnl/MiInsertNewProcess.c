/*
 * XREFs of MiInsertNewProcess @ 0x14013CFF0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14075FA5C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertNewProcess(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  v4 = (_QWORD *)qword_14043B0B0;
  v5 = a1 + 194;
  if ( *(__int64 **)qword_14043B0B0 != &qword_14043B0A8 )
    goto LABEL_7;
  *v5 = &qword_14043B0A8;
  a1[195] = v4;
  *v4 = v5;
  qword_14043B0B0 = (__int64)(a1 + 194);
  if ( a2 )
  {
    v6 = *(_QWORD **)(a2 + 24);
    v7 = a1 + 104;
    if ( *v6 == a2 + 16 )
    {
      *v7 = a2 + 16;
      a1[105] = v6;
      *v6 = v7;
      *(_QWORD *)(a2 + 24) = v7;
      goto LABEL_5;
    }
LABEL_7:
    __fastfail(3u);
  }
LABEL_5:
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
