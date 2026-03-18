/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1401583B8
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x140140780 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_SOFTWARE_PTE_SHADOW_STACK(_QWORD *a1)
{
  if ( (*a1 & 0x400LL) != 0 )
    return 0LL;
  else
    return (*a1 >> 26) & 1LL;
}
