/*
 * XREFs of FsRtlpClearOwner @ 0x14012171C
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14001794C (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x1400B7C60 (FsRtlCheckOplockEx.c)
 *     FsRtlUninitializeOplock @ 0x14011B480 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x140130710 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013AAEC (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14013F6FC (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E0EC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168D80 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B3914 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14026F858 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DC640 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14081531C (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF990 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall FsRtlpClearOwner(__int64 a1, __int64 a2)
{
  void *v3; // rcx

  if ( a2 )
  {
    v3 = *(void **)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  else
  {
    v3 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v3 )
    ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
}
