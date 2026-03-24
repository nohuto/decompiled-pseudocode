/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x140271F3C
 * Callers:
 *     PpmScaleIdleStateValues @ 0x140175828 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x140178680 (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x1402711A0 (HvlSharedIsr.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x140276F3C (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x140276FBC (HvlSetPlatformIdleState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_140401ED4 )
    return a1;
  v4 = HvlpLogicalProcessorRegions;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 30;
    if ( v1 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}
