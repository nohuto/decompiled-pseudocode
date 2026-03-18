/*
 * XREFs of ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z @ 0x1800E7C04
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds__ @ 0x180001170 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--ExtensionTimeMicroseconds__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__ @ 0x1800011A0 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--PeriodicFenceMinDifferenceMicrose.c)
 *     _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__ @ 0x1800011D0 (_dynamic_initializer_for__CCommonRegistryData--SuperWetTiming--RefreshRatePercentage__.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800B6400 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

__int64 __fastcall details::CRegistryKeyLoader<unsigned long>::Load(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\GpuAccelInkTiming", a2, (unsigned int *)&v5) )
    return (unsigned int)v5;
  return a3;
}
