/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x1400EDB70
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400EDAE4 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_140443B0E )
    return (unsigned int)dword_140571350;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_14057134C;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
