/*
 * XREFs of PoFxIssueComponentPerfStateChangeMultiple @ 0x1402F1A60
 * Callers:
 *     PoFxIssueComponentPerfStateChange @ 0x1402F1A30 (PoFxIssueComponentPerfStateChange.c)
 * Callees:
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3844 (PopFxIssueComponentPerfStateChanges.c)
 */

__int64 __fastcall PoFxIssueComponentPerfStateChangeMultiple(
        ULONG_PTR BugCheckParameter2,
        char a2,
        unsigned int a3,
        __int64 a4,
        void *Src,
        __int64 a6)
{
  if ( (a2 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( (a2 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( a3 >= *(_DWORD *)(BugCheckParameter2 + 820) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, a3, 2uLL);
  return PopFxIssueComponentPerfStateChanges(BugCheckParameter2, Src, a6);
}
