/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402D7CB4
 * Callers:
 *     PoFxCompleteDirectedPowerTransition @ 0x1402D7110 (PoFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     PopFxBugCheck @ 0x1402D74C0 (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402D7ABC (PopFxCompleteDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDerefAndCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  int v2; // ebx
  LONG result; // eax

  v2 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 960));
  if ( !v2 )
    result = PopFxCompleteDirectedPowerTransition(BugCheckParameter3);
  if ( v2 < 0 )
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  return result;
}
