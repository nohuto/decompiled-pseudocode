/*
 * XREFs of PopDripsWatchdogTimerCallback @ 0x1402DE410
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 */

char __fastcall PopDripsWatchdogTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a1 == a2 + 112 )
  {
    v2 = 248LL;
  }
  else
  {
    result = a2 + 112;
    if ( a1 != a2 + 368 )
      return result;
    v2 = 504LL;
  }
  return PopQueueWorkItem(v2 + a2, DelayedWorkQueue);
}
