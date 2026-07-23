/*
 * XREFs of MiReleasePageFileSpace @ 0x140082394
 * Callers:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x140081EF0 (MiDeleteClusterSection.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiDeleteMergedPte @ 0x14011FC90 (MiDeleteMergedPte.c)
 *     MiDeletePerSessionProtos @ 0x1401370A4 (MiDeletePerSessionProtos.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 *     MiDeleteClusterPage @ 0x1402C641C (MiDeleteClusterPage.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleasePageFileSpace(struct _KEVENT *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v3 = MiCapturePageFileInfoInline(&v5, 0LL);
  if ( !v3 )
    return 0LL;
  MiReleasePageFileInfo(a1, v3, 0);
  return 1LL;
}
