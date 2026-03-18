/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x1400F0A30
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400F09A4 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_140443A6E )
    return (unsigned int)dword_140571350;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_14057134C;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
