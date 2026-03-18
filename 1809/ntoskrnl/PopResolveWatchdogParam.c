/*
 * XREFs of PopResolveWatchdogParam @ 0x1402E4D58
 * Callers:
 *     PopWatchdogWorker @ 0x1402E4E30 (PopWatchdogWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResolveWatchdogParam(__int64 a1, char a2)
{
  if ( a2 )
    return *(_QWORD *)a1;
  else
    return a1;
}
