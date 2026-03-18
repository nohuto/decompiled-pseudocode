/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x140285CC8
 * Callers:
 *     HvlEnlightenProcessor @ 0x1401825E4 (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x140284C80 (HvlSharedIsr.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x14028AF2C (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x14028AF8C (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x14028B02C (HvlSetPlatformIdleState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_14042B3C8 )
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
