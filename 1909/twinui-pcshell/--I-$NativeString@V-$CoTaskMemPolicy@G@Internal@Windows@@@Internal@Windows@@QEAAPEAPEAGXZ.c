/*
 * XREFs of ??I?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAPEAPEAGXZ @ 0x18011E5D4
 * Callers:
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180073BB0 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator&(
        __int64 a1)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  *(_QWORD *)(a1 + 8) = -1LL;
  *(_QWORD *)(a1 + 16) = -1LL;
  return a1;
}
