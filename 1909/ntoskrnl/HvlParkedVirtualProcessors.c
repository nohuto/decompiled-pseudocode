/*
 * XREFs of HvlParkedVirtualProcessors @ 0x14028AC28
 * Callers:
 *     PpmParkReportMask @ 0x1401243A0 (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     HvlpAffinityToVirtualAffinity @ 0x14028D548 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14028D65C (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlParkedVirtualProcessors(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    result = HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3);
    if ( !(_BYTE)result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
        HvlpAffinityToVirtualAffinity(qword_14042A758);
      return HvcallCodeVa();
    }
  }
  return result;
}
