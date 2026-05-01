/*
 * XREFs of ?GetAccessibleName@CVirtualDesktopContainerElement@@UEAAJPEAPEAG@Z @ 0x180381990
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18022F2AC (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::GetAccessibleName(
        CVirtualDesktopContainerElement *this,
        unsigned __int16 **a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  unsigned __int16 *v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned __int16 v11; // [rsp+78h] [rbp+28h] BYREF
  unsigned __int16 *v12; // [rsp+80h] [rbp+30h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = -2147467259;
  if ( Windows::Internal::ResourceString::FindAndSize(&_ImageBase, 0x32D8u, a3, (const unsigned __int16 **)&v12, &v11)
    && (v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
               (LPVOID *)&v7,
               (__int64)v12,
               v11),
        v5 >= 0) )
  {
    *a2 = v7;
    v7 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
      (const char *)(unsigned int)v5);
    v3 = v5;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
  return v3;
}
