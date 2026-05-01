/*
 * XREFs of ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180054160
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180054050 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z @ 0x18017D890 (-GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z.c)
 *     ?GetApplicationId@StubImmersiveApplication@@UEAAJPEAPEAG@Z @ 0x18032E290 (-GetApplicationId@StubImmersiveApplication@@UEAAJPEAPEAG@Z.c)
 *     ?GetDisplayName@StubImmersiveApplication@@UEAAJPEAPEAG@Z @ 0x18032EE40 (-GetDisplayName@StubImmersiveApplication@@UEAAJPEAPEAG@Z.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1803CBA98 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803CC864 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180032DF0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  int v7; // eax
  void *v8; // rcx
  int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  _WORD *v12; // rdx
  __int64 v13; // r14
  __int16 v14; // ax
  _WORD *v15; // rax
  void *v16; // rax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  if ( !*a1 )
    return (unsigned int)-2147023728;
  v4 = a1[1];
  v5 = -1LL;
  memset(v18, 0, 24);
  if ( v4 == -1LL )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(v3 + 2 * v4) );
  }
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(v3 + 2 * v6) );
  if ( v4 == -1LL )
  {
    v4 = v6;
    v5 = v6;
  }
  else if ( v4 < v6 )
  {
    v5 = v4;
  }
  else
  {
    do
      ++v5;
    while ( *(_WORD *)(v3 + 2 * v5) );
  }
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
         (__int64)v18,
         v4);
  v8 = (void *)v18[0];
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = v4 + 1;
    if ( v10 - 1 > 0x7FFFFFFE )
    {
      if ( !v10 )
        goto LABEL_20;
    }
    else if ( v5 <= 0x7FFFFFFE )
    {
      v11 = v5 - v10;
      v12 = (_WORD *)v18[0];
      v13 = v3 - v18[0];
      do
      {
        if ( !(v11 + v10) )
          break;
        v14 = *(_WORD *)((char *)v12 + v13);
        if ( !v14 )
          break;
        *v12++ = v14;
        --v10;
      }
      while ( v10 );
      v15 = v12 - 1;
      if ( v10 )
        v15 = v12;
      *v15 = 0;
      goto LABEL_20;
    }
    *(_WORD *)v18[0] = 0;
  }
LABEL_20:
  if ( v9 >= 0 )
  {
    v16 = v8;
    v8 = 0LL;
    *a2 = v16;
  }
  if ( v8 )
    CoTaskMemFree(v8);
  return (unsigned int)v9;
}
