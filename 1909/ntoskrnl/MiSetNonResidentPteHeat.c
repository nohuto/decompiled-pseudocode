/*
 * XREFs of MiSetNonResidentPteHeat @ 0x1400BB940
 * Callers:
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C720 (MiDecrementAndInsertStandbyPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14002D250 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x1400BB884 (MiTransferSoftwarePte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400BBE50 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmSetPfnListInfo @ 0x14017870C (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x1402EB9DC (MiMakeTransitionHeatBatch.c)
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
