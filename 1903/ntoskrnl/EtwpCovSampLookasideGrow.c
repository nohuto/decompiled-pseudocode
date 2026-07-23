/*
 * XREFs of EtwpCovSampLookasideGrow @ 0x140335AD0
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x140900FA0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140901740 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampLookasideGrow(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v5; // ebx
  _SLIST_ENTRY *v6; // rdi
  KSPIN_LOCK *v7; // r14
  KIRQL v8; // si
  unsigned int v9; // eax
  _SLIST_ENTRY *v10; // rax
  __int64 v11; // rbp
  _SLIST_ENTRY *v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  KeGetCurrentIrql();
  if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    v6 = (_SLIST_ENTRY *)(*(__int64 (**)(void))(v2 + 48))();
    if ( v6 )
    {
      v7 = (KSPIN_LOCK *)(a1 + 264);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
      if ( *(_DWORD *)(a2 + 40) && (v9 = *(_DWORD *)(a2 + 52), v9 < *(_DWORD *)(a2 + 56)) )
      {
        *(_DWORD *)(a2 + 52) = v9 + 1;
        v10 = (_SLIST_ENTRY *)((char *)v6 + 24);
        ++*(_DWORD *)(v2 + 72);
        v11 = v2 + 32;
        v12 = *(_SLIST_ENTRY **)(v11 + 8);
        if ( v12->Next != (_SLIST_ENTRY *)v11 )
          __fastfail(3u);
        v6[2].Next = v12;
        v10->Next = (_SLIST_ENTRY *)v11;
        v12->Next = v10;
        *(_QWORD *)(v11 + 8) = v10;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, v6);
        v6 = 0LL;
        v5 = 0;
      }
      else
      {
        v5 = 255;
      }
      KxReleaseSpinLock(v7);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v8);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x56777445u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 255;
  }
  return v5;
}
