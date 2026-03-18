/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x14026FFD0
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14001794C (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x140130710 (FsRtlpOplockBreakToII.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140133270 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToNone @ 0x14013AAEC (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14013F6FC (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E0EC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168D80 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14026F858 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelWaitingIrp @ 0x14026FB68 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140270070 (FsRtlpWaitOnIrp.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14081531C (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndCompleteWaitingIrp(_QWORD *P)
{
  _QWORD **v2; // rcx
  PVOID *v3; // rax
  __int64 v4; // rdi

  v2 = (_QWORD **)*P;
  if ( v2[1] != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = P[2];
  if ( v4 )
  {
    *(_BYTE *)(v4 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v4 + 69));
    *(_QWORD *)(v4 + 56) = *((unsigned int *)P + 12);
    *(_DWORD *)(v4 + 48) = *(_BYTE *)(v4 + 68) != 0 ? 0xC0000120 : 0;
  }
  ((void (__fastcall *)(_QWORD, __int64))P[3])(P[4], v4);
  ExFreePoolWithTag(P, 0);
}
