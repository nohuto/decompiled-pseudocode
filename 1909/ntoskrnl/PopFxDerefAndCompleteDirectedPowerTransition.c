/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402F2CC4
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x14017B3D0 (PoFxReportDevicePoweredOn.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x140180EB8 (PopFxNotifyPreDIrpCompletion.c)
 *     PoFxCompleteDirectedPowerDown @ 0x1402F1A10 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2A6C (PopFxCompleteDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDerefAndCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  LONG result; // eax
  int v4; // edi

  result = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 816), 0, 0);
  if ( (result & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter3, 0LL);
  v4 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 1152));
  if ( !v4 )
    result = PopFxCompleteDirectedPowerTransition(BugCheckParameter3, a2);
  if ( v4 < 0 )
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  return result;
}
