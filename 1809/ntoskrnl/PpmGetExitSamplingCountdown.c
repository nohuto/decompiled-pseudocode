/*
 * XREFs of PpmGetExitSamplingCountdown @ 0x140005FFC
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140005DA8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetExitSamplingCountdown()
{
  unsigned int v0; // ecx
  __int64 result; // rax

  v0 = PpmExitLatencySamplingPercentage;
  result = 0LL;
  if ( (unsigned int)PpmExitLatencySamplingPercentage > 0x64 )
    v0 = 100;
  if ( v0 )
    return 0x64 / v0;
  return result;
}
