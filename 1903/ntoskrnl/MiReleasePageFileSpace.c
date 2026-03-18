/*
 * XREFs of MiReleasePageFileSpace @ 0x1401248E4
 * Callers:
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiDeleteClusterSection @ 0x1400D8E50 (MiDeleteClusterSection.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiDeleteMergedPte @ 0x1401424E8 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
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
