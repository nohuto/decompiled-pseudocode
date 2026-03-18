/*
 * XREFs of MiOkToShrinkPageFiles @ 0x1400AD7CC
 * Callers:
 *     MiContractPagingFiles @ 0x1400AD73C (MiContractPagingFiles.c)
 *     MiAttemptPageFileReduction @ 0x1402CD708 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD8B0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiOkToShrinkPageFiles(unsigned __int64 a1, unsigned __int64 a2)
{
  return a1 + 0x8000 < (((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
      && a1 + 0x8000 > a1;
}
