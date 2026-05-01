/*
 * XREFs of ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18036633C
 * Callers:
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180365C54 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x180379900 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 * Callees:
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_b31a7ee49596f02cdde0545643ebbb5a___ @ 0x180365860 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___ea_180365860.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
        WCHAR **a1,
        const void *a2,
        ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_b31a7ee49596f02cdde0545643ebbb5a___(
           a1,
           a2,
           va);
}
