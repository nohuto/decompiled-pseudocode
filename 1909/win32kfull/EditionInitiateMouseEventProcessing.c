/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x1C00ECDE0
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C00ECE44 (WakeDIT.c)
 *     WakeRIT @ 0x1C00ECEA0 (WakeRIT.c)
 *     UserBeep @ 0x1C01CD214 (UserBeep.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(int a1)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    EtwTraceWakeDIT(1LL);
    result = WakeDIT(1LL);
  }
  else
  {
    EtwTraceWakeRIT(1LL);
    result = WakeRIT(1LL);
  }
  if ( a1 )
    return UserBeep(440LL, 125LL);
  return result;
}
