/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x140285F68
 * Callers:
 *     HvlEnlightenProcessor @ 0x140181EF4 (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x140284F20 (HvlSharedIsr.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x14028B1CC (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x14028B22C (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x14028B2CC (HvlSetPlatformIdleState.c)
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
