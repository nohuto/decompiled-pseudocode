/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1400901D0
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x14011B180 (FsRtlCancelNotify.c)
 *     MiReturnVadQuota @ 0x1405EDB00 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     ExpFreeHandleTable @ 0x1406077F8 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14060790C (ExpFreeTablePagedPool.c)
 *     LpcExitProcess @ 0x140609018 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x140617D14 (AlpcpReleasePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x140697C24 (ExpAllocateHandleTable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406A26E8 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406A2C34 (FsRtlNotifyCleanupOneEntry.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE910 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 1LL, a2);
  return result;
}
