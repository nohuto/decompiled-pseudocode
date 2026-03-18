/*
 * XREFs of MiSetNonResidentPteHeat @ 0x1400DBAC0
 * Callers:
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C330 (MiDecrementAndInsertStandbyPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x1400DBA04 (MiTransferSoftwarePte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400DBFD0 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmSetPfnListInfo @ 0x14017801C (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x1402EBC7C (MiMakeTransitionHeatBatch.c)
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
