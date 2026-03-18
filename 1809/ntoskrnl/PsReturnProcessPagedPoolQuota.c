/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140090290
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x14011B0F0 (FsRtlCancelNotify.c)
 *     MiReturnVadQuota @ 0x1405ECB00 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     ExpFreeHandleTable @ 0x1406067F8 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14060690C (ExpFreeTablePagedPool.c)
 *     LpcExitProcess @ 0x140608018 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x140616D14 (AlpcpReleasePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x140696A84 (ExpAllocateHandleTable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0220 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E80 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406A1468 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406A19B4 (FsRtlNotifyCleanupOneEntry.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE9B0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 1LL, a2);
  return result;
}
