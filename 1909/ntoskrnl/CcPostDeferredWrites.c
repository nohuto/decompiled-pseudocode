/*
 * XREFs of CcPostDeferredWrites @ 0x14027D150
 * Callers:
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcLazyWriteScan @ 0x14007F194 (CcLazyWriteScan.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140124764 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x14016D790 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x14027CF20 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x14027D570 (CcUnpinRepinnedBcb.c)
 *     CcExitPartition @ 0x14027EDAC (CcExitPartition.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcCanIWriteStream @ 0x14007BEA4 (CcCanIWriteStream.c)
 *     CcDereferencePartition @ 0x14007E4D4 (CcDereferencePartition.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcPostDeferredWrites(__int64 a1)
{
  _QWORD *v2; // r14
  unsigned int v3; // r12d
  KSPIN_LOCK *v4; // r13
  _QWORD *v5; // rdi
  KIRQL v6; // al
  _QWORD *v7; // rsi
  KIRQL v8; // r15
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  struct _KEVENT *v15; // rcx

  v2 = (_QWORD *)(a1 + 744);
  v3 = 0;
  v4 = (KSPIN_LOCK *)(a1 + 768);
  while ( 2 )
  {
    v5 = 0LL;
    v6 = KeAcquireSpinLockRaiseToDpc(v4);
    v7 = (_QWORD *)*v2;
    v8 = v6;
    while ( v7 != v2 )
    {
      v5 = v7 - 3;
      if ( *(_BYTE *)(a1 + 902) > 1u )
        goto LABEL_9;
      v9 = *((_DWORD *)v5 + 4);
      v10 = v9 + v3;
      if ( CcCanIWriteStream((KSPIN_LOCK *)a1, v5[1], v9, v3, 2) )
      {
        v3 = v10;
LABEL_9:
        v11 = *v7;
        v12 = (_QWORD *)v5[4];
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v12 != v7 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        break;
      }
      v7 = (_QWORD *)*v7;
      v5 = 0LL;
    }
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = v8;
    __writecr8(v8);
    if ( v5 )
    {
      v15 = (struct _KEVENT *)v5[5];
      if ( v15 )
      {
        KeSetEvent(v15, 0, 0);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD))v5[6])(v5[7], v5[8]);
        ExFreePoolWithTag(v5, 0x77446343u);
        CcDereferencePartition(a1);
      }
      continue;
    }
    return result;
  }
}
