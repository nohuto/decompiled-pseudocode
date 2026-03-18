/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x1402751A0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140276340 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x140276594 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpAffinityToVirtualAffinity @ 0x1402793A0 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1402794B4 (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r10d

  if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a1) )
  {
    if ( (((unsigned int)HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
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
