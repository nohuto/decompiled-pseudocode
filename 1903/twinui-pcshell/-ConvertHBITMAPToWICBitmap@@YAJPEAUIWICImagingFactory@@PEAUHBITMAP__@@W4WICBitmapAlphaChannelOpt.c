/*
 * XREFs of ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x180346D1C
 * Callers:
 *     ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x180347B40 (-_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConvertHBITMAPToWICBitmap(
        struct IWICImagingFactory *a1,
        HBITMAP a2,
        enum WICBitmapAlphaChannelOption a3,
        struct IWICBitmapSource **a4)
{
  LPVOID v6; // rbx
  HRESULT v7; // ebx
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IWICBitmapSource **); // [rsp+68h] [rbp+38h] BYREF

  *a4 = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppv);
  v6 = ppv;
  if ( !ppv )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v7 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
    if ( v7 < 0 )
      goto LABEL_7;
    v6 = ppv;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  v7 = (*(__int64 (__fastcall **)(LPVOID, HBITMAP, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, struct IWICBitmapSource **)))(*(_QWORD *)v6 + 168LL))(
         v6,
         a2,
         0LL,
         0LL,
         &v10);
  if ( v7 >= 0 )
    v7 = (**v10)(v10, &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94, a4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v7;
}
