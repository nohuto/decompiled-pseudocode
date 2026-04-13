/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180054D44
 * Callers:
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x180054604 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 *     ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x180054C84 (-SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x18009EF60 (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRIN.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x18009F4E4 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x18009F940 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001786C (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v6; // ebp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  _WORD *v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx

  v3 = a3;
  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a2 + 2 * v8) );
    if ( a3 == -1LL )
    {
      v3 = v8;
      v7 = v8;
    }
    else if ( a3 >= v8 )
    {
      do
        ++v7;
      while ( *(_WORD *)(a2 + 2 * v7) );
    }
    else
    {
      v7 = a3;
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (__int64)a1,
           v3);
    if ( v6 >= 0 )
    {
      v9 = (_WORD *)*a1;
      v10 = v3 + 1;
      if ( v10 - 1 > 0x7FFFFFFE )
      {
        if ( !v10 )
        {
LABEL_21:
          a1[1] = v7;
          return (unsigned int)v6;
        }
      }
      else if ( v7 <= 0x7FFFFFFE )
      {
        v11 = v7 - v10;
        v12 = a2 - (_QWORD)v9;
        do
        {
          if ( !(v11 + v10) )
            break;
          v13 = *(_WORD *)((char *)v9 + v12);
          if ( !v13 )
            break;
          *v9++ = v13;
          --v10;
        }
        while ( v10 );
        v14 = v9 - 1;
        if ( v10 )
          v14 = v9;
        *v14 = 0;
        goto LABEL_21;
      }
      *v9 = 0;
      goto LABEL_21;
    }
  }
  else
  {
    v15 = (_WORD *)*a1;
    if ( v15 )
    {
      CoTaskMemFree(v15);
      *a1 = 0LL;
    }
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return (unsigned int)v6;
}
