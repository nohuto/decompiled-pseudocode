/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x14005B090
 * Callers:
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x14011B700 (FsRtlCancelNotify.c)
 *     MiReturnVadQuota @ 0x140606A50 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14064C2B4 (AlpcpReleasePagedPoolQuota.c)
 *     LpcExitProcess @ 0x1406718C4 (LpcExitProcess.c)
 *     ExpFreeHandleTable @ 0x140692CBC (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x140692E20 (ExpFreeTablePagedPool.c)
 *     ExpAllocateHandleTable @ 0x1406BC0A0 (ExpAllocateHandleTable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C1620 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C22E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406C2924 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406C2E7C (FsRtlNotifyCleanupOneEntry.c)
 * Callees:
 *     PspReturnQuota @ 0x140064C70 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[3], a1, 1LL, a2);
  return result;
}
