/*
 * XREFs of ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18004D080
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x18004CF70 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z @ 0x180134BF0 (-GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z.c)
 *     ?GetApplicationId@StubImmersiveApplication@@UEAAJPEAPEAG@Z @ 0x1802B5FD0 (-GetApplicationId@StubImmersiveApplication@@UEAAJPEAPEAG@Z.c)
 *     ?GetDisplayName@StubImmersiveApplication@@UEAAJPEAPEAG@Z @ 0x1802B68A0 (-GetDisplayName@StubImmersiveApplication@@UEAAJPEAPEAG@Z.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x180346AB8 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180347864 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ebx
  void *v6; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    memset(v8, 0, 24);
    if ( v4 == -1 )
    {
      do
        ++v4;
      while ( *(_WORD *)(v3 + 2 * v4) );
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(v8);
    if ( v5 < 0 )
    {
      v6 = (void *)v8[0];
    }
    else
    {
      v6 = 0LL;
      *a2 = v8[0];
    }
    if ( v6 )
      CoTaskMemFree(v6);
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return (unsigned int)v5;
}
