/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds__ @ 0x180001170
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z @ 0x1800E6D54 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBG0K@Z.c)
 */

__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds__(
        __int64 a1)
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(a1, L"ExtensionTimeMicroseconds", 1000LL);
  CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds = result;
  return result;
}
