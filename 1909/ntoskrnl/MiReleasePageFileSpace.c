/*
 * XREFs of MiReleasePageFileSpace @ 0x140125564
 * Callers:
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MiDeleteClusterSection @ 0x1400B8CD0 (MiDeleteClusterSection.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 *     MiDeleteMergedPte @ 0x140142A28 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleasePageFileSpace(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  v4 = MiCapturePageFileInfoInline(&v6, 0, a3);
  if ( !v4 )
    return 0LL;
  MiReleasePageFileInfo(a1, v4, 0);
  return 1LL;
}
