/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x1C0111F30
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C0111F94 (WakeDIT.c)
 *     WakeRIT @ 0x1C0111FF0 (WakeRIT.c)
 *     UserBeep @ 0x1C01CD3A4 (UserBeep.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(int a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    EtwTraceWakeDIT(1LL);
    result = WakeDIT(1LL);
  }
  else
  {
    EtwTraceWakeRIT(1LL);
    result = WakeRIT(1LL, v3);
  }
  if ( a1 )
    return UserBeep(440LL, 125LL);
  return result;
}
