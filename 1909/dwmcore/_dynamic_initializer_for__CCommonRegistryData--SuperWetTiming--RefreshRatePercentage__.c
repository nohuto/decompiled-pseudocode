/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__ @ 0x1800011D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z @ 0x1800E7C04 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z.c)
 */

__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__(__int64 a1)
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(a1, L"RefreshRatePercentage", 10LL);
  CCommonRegistryData::SuperWetTiming::RefreshRatePercentage = result;
  return result;
}
