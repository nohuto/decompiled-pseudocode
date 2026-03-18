/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x140289140
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x14028A348 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14028A5B0 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpAffinityToVirtualAffinity @ 0x14028D548 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14028D65C (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r10d

  if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a1) )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowSendSyntheticClusterIpiEx(v2, v3);
    else
      return HvlpFastSendSyntheticClusterIpiEx(v2, v3);
  }
  else
  {
    HvlpAffinityToVirtualAffinity(*(_QWORD *)(v2 + 8));
    return (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  }
}
