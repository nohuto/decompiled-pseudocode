/*
 * XREFs of CcPostDeferredWrites @ 0x140269BA0
 * Callers:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140138DF8 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x140166E60 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x140269970 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x140269FC0 (CcUnpinRepinnedBcb.c)
 *     CcExitPartition @ 0x14026B7A0 (CcExitPartition.c)
 * Callees:
 *     CcCanIWriteStream @ 0x1400213FC (CcCanIWriteStream.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcPostDeferredWrites(__int64 a1)
{
  _QWORD *v2; // r14
  unsigned int v3; // r12d
  KSPIN_LOCK *v4; // r13
  _QWORD *v5; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rdi
  KIRQL v8; // r15
  unsigned int v9; // r8d
  unsigned int v10; // ebp
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
