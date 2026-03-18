/*
 * XREFs of FsRtlpClearOwner @ 0x140103E9C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1400102C0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     FsRtlUninitializeOplock @ 0x140089820 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140102780 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1401038C8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x140103A40 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakToII @ 0x140130D2C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013D710 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016FC40 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401748C4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140283268 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140283498 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405E5450 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14084E4EC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400656F0 (ObDereferenceObjectDeferDeleteWithTag.c)
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
