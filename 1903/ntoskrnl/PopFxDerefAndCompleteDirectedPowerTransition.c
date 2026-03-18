/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402F2F64
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x14017ACE0 (PoFxReportDevicePoweredOn.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1401807C8 (PopFxNotifyPreDIrpCompletion.c)
 *     PoFxCompleteDirectedPowerDown @ 0x1402F1CB0 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     PopFxBugCheck @ 0x1402F2050 (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2D0C (PopFxCompleteDirectedPowerTransition.c)
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
