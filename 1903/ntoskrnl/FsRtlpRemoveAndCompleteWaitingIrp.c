/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283DBC
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400B5CA0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1400B6F60 (FsRtlpOplockCleanup.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400B7604 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToII @ 0x14013019C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013D200 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016F550 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140174194 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140283508 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140283738 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140283930 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140283E5C (FsRtlpWaitOnIrp.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14084EDEC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
