/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__ @ 0x1800011A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z @ 0x1800E6D54 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z.c)
 */

__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__(
        __int64 a1)
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(a1, L"PeriodicFenceMinDifferenceMicroseconds", 500LL);
  CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds = result;
  return result;
}
