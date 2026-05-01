/*
 * XREFs of ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x180197470
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801971DC (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 *     ?CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@PEAPEAUIRandomAccessStreamReference@456@@Z @ 0x1801FE8CC (-CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandom.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1802DCEF4 (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 *     ?GetStreamFromWICBitmap@ScreenClippingBrokerImpl@@CAJAEBV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@PEAPEAUIStream@@@Z @ 0x18037BDB8 (-GetStreamFromWICBitmap@ScreenClippingBrokerImpl@@CAJAEBV-$ComPtr@UIWICBitmapSource@@@WRL@Micros.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x180196D54 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetStreamOfWICBitmapSourceWithOptions(
        void *a1,
        struct IWICBitmapSource *a2,
        __int64 a3,
        struct _GUID *a4,
        char a5,
        LPVOID ppv)
{
  _QWORD *v9; // rsi
  int v10; // edi
  IStream *v11; // rbx
  LPVOID v12; // rdi
  struct _GUID v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF

  v9 = ppv;
  *(_QWORD *)ppv = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppv);
  if ( ppv
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv),
        v10 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv),
        v10 >= 0) )
  {
    v11 = SHCreateMemStream(0LL, 0);
    if ( v11 )
    {
      v15 = 0LL;
      v12 = ppv;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      v10 = (*(__int64 (__fastcall **)(LPVOID, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 64LL))(
              v12,
              a3,
              &GUID_VendorMicrosoft,
              &v15);
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, IStream *, __int64))(*(_QWORD *)v15 + 24LL))(v15, v11, 2LL);
        if ( v10 >= 0 )
        {
          v14 = *a4;
          v10 = AddFrameToWICBitmap((struct IWICImagingFactory *)ppv, v15, a2, &v14, a5);
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15);
            if ( v10 >= 0 )
            {
              v10 = (*(__int64 (__fastcall **)(IStream *, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 40LL))(
                      v11,
                      `GetStreamOfWICBitmapSourceWithOptions'::`23'::lnBeginning,
                      0LL,
                      0LL);
              if ( v10 >= 0 )
              {
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 8LL))(v11);
                *v9 = v11;
                v10 = 0;
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
    else
    {
      v10 = -2147024882;
    }
    if ( v11 )
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v10;
}
