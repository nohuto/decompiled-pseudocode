/*
 * XREFs of CcPostWorkQueue @ 0x1400D6078
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14007D950 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadEx @ 0x14008DEF0 (CcScheduleReadAheadEx.c)
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x140183980 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140187C98 (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  unsigned __int8 OldIrql; // di
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  v5 = 0LL;
  if ( (xmmword_140542350 & 0x20000) != 0 )
  {
    if ( ((*(_BYTE *)(a1 + 120) - 2) & 0xFD) != 0 )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 192), &LockHandle);
  if ( *(_BYTE *)(a1 + 120) == 3 && *(_QWORD *)(v4 + 256) != v4 + 256 )
  {
    v14 = *(_QWORD *)(v4 + 600);
    if ( (v14 >= *(_QWORD *)(v4 + 624) >> 2 || v14 > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 7296LL) >> 1)
      && *(_DWORD *)(v4 + 896) >= *(_DWORD *)(v4 + 200) )
    {
      *(_BYTE *)(v4 + 736) = 1;
    }
  }
  v8 = *(_QWORD **)(a2 + 8);
  if ( *v8 != a2 )
    goto LABEL_29;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( *(_BYTE *)(v4 + 312) )
    goto LABEL_11;
  v9 = (_QWORD *)(v4 + 208);
  v10 = *(__int64 **)(v4 + 208);
  if ( v10 == (__int64 *)(v4 + 208)
    || *(_BYTE *)(a1 + 120) == 2 && (unsigned int)(*(_DWORD *)(v4 + 328) + 1) > *(_DWORD *)(v4 + 896) )
  {
    goto LABEL_11;
  }
  v5 = *(__int64 **)(v4 + 208);
  v11 = *v10;
  if ( (_QWORD *)v10[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
LABEL_29:
    __fastfail(3u);
  *v9 = v11;
  *(_QWORD *)(v11 + 8) = v9;
  ++*(_DWORD *)(v4 + 204);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
    __fastfail(0xEu);
LABEL_11:
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
  if ( v5 )
  {
    *v5 = 0LL;
    return ExQueueWorkItemToPartition(v5, 0, 0xFFFFFFFF, *(_QWORD *)(v4 + 8));
  }
  return result;
}
