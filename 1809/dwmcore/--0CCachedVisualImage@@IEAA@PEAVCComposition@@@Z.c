/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18009E250
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18019A494 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801B2828 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18009BE2C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::CCachedVisualImage(
        CCachedVisualImage *this,
        struct CComposition *a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rcx
  char *v6; // rbx
  CCachedVisualImage *result; // rax

  *((_QWORD *)this + 1) = &IBitmapResource::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  v5 = (char *)this + 240;
  *((_DWORD *)this + 24) = 2;
  *((_QWORD *)this + 10) = (char *)this + 112;
  v6 = v5 + 32;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *(_QWORD *)((char *)this + 100) = 2LL;
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 17) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)v5, v5 + 32, 2, a4, 48);
  `vector constructor iterator'(
    v6,
    48LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  result = this;
  *((_DWORD *)this + 56) = 2;
  return result;
}
