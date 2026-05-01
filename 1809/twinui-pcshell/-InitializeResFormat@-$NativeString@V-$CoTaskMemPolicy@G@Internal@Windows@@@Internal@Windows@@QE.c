/*
 * XREFs of ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180289C20
 * Callers:
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x180289604 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802DA750 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1802F447C (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x18036C220 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18037A1D0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x18038CEA0 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 * Callees:
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___ @ 0x18002D450 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___--_Initializ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x1801DB890 (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
        __int64 a1,
        HINSTANCE a2,
        __int64 a3,
        ...)
{
  const wchar_t *v4; // rdi
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
    v4 = (const wchar_t *)v10[0];
    v5 = v6;
  }
  if ( v5 >= 0 )
    v5 = Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___(
           a1,
           v4,
           va);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v10);
  return (unsigned int)v5;
}
