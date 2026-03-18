/*
 * XREFs of HvlParkedVirtualProcessors @ 0x140276B6C
 * Callers:
 *     PpmParkReportMask @ 0x1401223B0 (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     HvlpAffinityToVirtualAffinity @ 0x1402793A0 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1402794B4 (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlParkedVirtualProcessors(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    result = HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3);
    if ( !(_BYTE)result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
        HvlpAffinityToVirtualAffinity(qword_140404208);
      return HvcallCodeVa();
    }
  }
  return result;
}
