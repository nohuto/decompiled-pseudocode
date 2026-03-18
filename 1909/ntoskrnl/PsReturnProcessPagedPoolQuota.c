/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x14005B130
 * Callers:
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x140119B30 (FsRtlCancelNotify.c)
 *     MiReturnVadQuota @ 0x140608560 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     LpcExitProcess @ 0x1406526F4 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14065FF44 (AlpcpReleasePagedPoolQuota.c)
 *     ExpFreeHandleTable @ 0x14068622C (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x140686390 (ExpFreeTablePagedPool.c)
 *     ExpAllocateHandleTable @ 0x1406B78C0 (ExpAllocateHandleTable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C0810 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C14D0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406C1B14 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406C206C (FsRtlNotifyCleanupOneEntry.c)
 * Callees:
 *     PspReturnQuota @ 0x140064D10 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[3], a1, 1LL, a2);
  return result;
}
