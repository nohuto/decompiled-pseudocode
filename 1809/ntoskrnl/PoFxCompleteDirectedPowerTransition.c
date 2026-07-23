/*
 * XREFs of PoFxCompleteDirectedPowerTransition @ 0x1402D7300
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402D7EA4 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PoFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 808), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter3, 0LL);
  return PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter3);
}
