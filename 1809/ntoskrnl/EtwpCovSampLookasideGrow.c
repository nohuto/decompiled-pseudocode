/*
 * XREFs of EtwpCovSampLookasideGrow @ 0x14031728C
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C57B0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
