/*
 * XREFs of PopCoalescingSetTimer @ 0x1402F73F8
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402F7358 (PopCoalescingSetActiveState.c)
 *     PopCoalescingNotify @ 0x1408A7890 (PopCoalescingNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     PopPrintEx @ 0x140126458 (PopPrintEx.c)
 */

__int64 PopCoalescingSetTimer()
{
  __int64 result; // rax

  if ( (PopCoalescingState & 1) != 0 )
  {
    PopPrintEx(3u, (__int64)"PopCoalescing: Coalescing timer activated\n");
    result = KiSetTimerEx(
               (__int64)&PopCoalescingTimer,
               -10000000LL * PopCoalescingTimerInterval,
               0,
               0,
               (__int64)&PopCoalescingTimerDpc);
    _interlockedbittestandset((volatile signed __int32 *)&PopCoalescingTimer, 9u);
  }
  return result;
}
