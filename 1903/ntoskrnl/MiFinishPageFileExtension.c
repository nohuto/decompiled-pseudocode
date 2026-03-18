/*
 * XREFs of MiFinishPageFileExtension @ 0x1402CE39C
 * Callers:
 *     MiAttemptPageFileExtension @ 0x14088CC58 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140089150 (MiCoalescePageFileBitmapsCache.c)
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     MiUpdateReserveClusterInfo @ 0x140192D74 (MiUpdateReserveClusterInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiFinishPageFileExtension(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  ULONG v7; // edi
  char v8; // si
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 232), &LockHandle);
  v6 = *(_QWORD *)(a2 + 112);
  v7 = *(_DWORD *)a2;
  RtlClearBits((PRTL_BITMAP)(v6 + 8), *(_DWORD *)a2, a3);
  RtlClearBits((PRTL_BITMAP)(v6 + 24), v7, a3);
  *(_QWORD *)a2 += a3;
  *(_QWORD *)(a2 + 24) += a3;
  *(_QWORD *)(a2 + 48) += a3;
  LOBYTE(a3) = *(_BYTE *)(a2 + 206);
  ++*(_DWORD *)(a2 + 128);
  v8 = a3 & 1;
  MiCoalescePageFileBitmapsCache(a2, 0, v7);
  MiUpdateReserveClusterInfo(*(_QWORD *)(a2 + 256), 0LL, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( v8 == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 872), 0, 0);
  return result;
}
