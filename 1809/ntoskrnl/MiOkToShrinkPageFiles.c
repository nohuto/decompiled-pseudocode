/*
 * XREFs of MiOkToShrinkPageFiles @ 0x140091738
 * Callers:
 *     MiContractPagingFiles @ 0x1400916A8 (MiContractPagingFiles.c)
 *     MiAttemptPageFileReduction @ 0x1402B74BC (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7650 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiOkToShrinkPageFiles(unsigned __int64 a1, unsigned __int64 a2)
{
  return a1 + 0x8000 < (((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
      && a1 + 0x8000 > a1;
}
