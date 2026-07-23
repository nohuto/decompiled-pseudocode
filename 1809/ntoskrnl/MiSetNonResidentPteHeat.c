/*
 * XREFs of MiSetNonResidentPteHeat @ 0x140081E40
 * Callers:
 *     MiDecrementAndInsertStandbyPages @ 0x14003D440 (MiDecrementAndInsertStandbyPages.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14011AB5C (MiRewriteTrimPteAsDemandZero.c)
 *     MmSetPfnListInfo @ 0x14013FD90 (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetNonResidentPteHeat(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 result; // rax

  v2 = *a1;
  v3 = 0LL;
  if ( (*a1 & 0x400) != 0 )
  {
    if ( a2 )
      v3 = 2048LL;
    result = v3 | v2 & 0xFFFFFFFFFFFFF7FFuLL;
    *a1 = result;
  }
  else
  {
    if ( a2 )
      v3 = 8LL;
    result = v3 | v2 & 0xFFFFFFFFFFFFFFF7uLL;
    *a1 = result;
  }
  return result;
}
