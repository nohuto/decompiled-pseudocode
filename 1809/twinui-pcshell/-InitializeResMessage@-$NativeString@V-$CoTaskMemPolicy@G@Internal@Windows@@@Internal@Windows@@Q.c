/*
 * XREFs of ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18037A678
 * Callers:
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18037A1D0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x1801DB890 (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_b31a7ee49596f02cdde0545643ebbb5a___ @ 0x180365860 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___ea_180365860.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
        WCHAR **a1,
        HINSTANCE a2,
        __int64 a3,
        ...)
{
  const void *v4; // rdi
  int v5; // ebx
  int v6; // eax
  unsigned __int16 v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v9; // [rsp+38h] [rbp-30h] BYREF
  LPVOID v10[5]; // [rsp+40h] [rbp-28h] BYREF
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a3);
  v4 = 0LL;
  memset(v10, 0, 24);
  v5 = -2147467259;
  if ( Windows::Internal::ResourceString::FindAndSize(a2, a3, a3, (const unsigned __int16 **)&v9, &v8) )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           v10,
           (__int64)v9,
           v8);
    v4 = v10[0];
    v5 = v6;
  }
  if ( v5 >= 0 )
    v5 = Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_b31a7ee49596f02cdde0545643ebbb5a___(
           a1,
           v4,
           va);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v10);
  return (unsigned int)v5;
}
