/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140157D18
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x1401400F0 (MiCombineCandidate.c)
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
