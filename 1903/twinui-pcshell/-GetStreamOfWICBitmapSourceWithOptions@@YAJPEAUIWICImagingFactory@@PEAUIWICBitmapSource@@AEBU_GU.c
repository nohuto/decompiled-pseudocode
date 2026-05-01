/*
 * XREFs of ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1801DDAB4
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801DD82C (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 *     ?CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@@PEAPEAUIRandomAccessStreamReference@456@@Z @ 0x180251B18 (-CreateRandomAccessStreamReferenceFromHIcon@@YAJPEAUIWICImagingFactory@@PEAUHICON__@@PEAUIRandom.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x18033E1A4 (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 *     ?GetStreamFromWICBitmap@ScreenClippingBrokerImpl@@CAJAEBV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@PEAPEAUIStream@@@Z @ 0x1803E1C28 (-GetStreamFromWICBitmap@ScreenClippingBrokerImpl@@CAJAEBV-$ComPtr@UIWICBitmapSource@@@WRL@Micros.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1801DD3A4 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetStreamOfWICBitmapSourceWithOptions(
        void *a1,
        struct IWICBitmapSource *a2,
        __int64 a3,
        struct _GUID *a4,
        char a5,
        IStream *a6)
{
  IStream *v9; // rsi
  int v10; // ebx
  IStream *v11; // rcx
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, __int64, GUID *, __int64 *); // rdi
  IStream *v14; // rcx
  __int64 v16[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _GUID v17; // [rsp+40h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+80h] [rbp+30h] BYREF

  v16[1] = -2LL;
  v9 = a6;
  *(_QWORD *)a6 = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppv);
  if ( ppv
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv),
        v10 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv),
        v10 >= 0) )
  {
    a6 = 0LL;
    v11 = SHCreateMemStream(0LL, 0);
    a6 = v11;
    if ( v11 )
    {
      v16[0] = 0LL;
      v12 = ppv;
      v13 = *(__int64 (__fastcall **)(LPVOID, __int64, GUID *, __int64 *))(*(_QWORD *)ppv + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
      v10 = v13(v12, a3, &GUID_VendorMicrosoft, v16);
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, IStream *, __int64))(*(_QWORD *)v16[0] + 24LL))(v16[0], a6, 2LL);
        if ( v10 >= 0 )
        {
          v17 = *a4;
          v10 = AddFrameToWICBitmap((struct IWICImagingFactory *)ppv, v16[0], a2, &v17, a5);
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16[0] + 88LL))(v16[0]);
            if ( v10 >= 0 )
            {
              v10 = (*(__int64 (__fastcall **)(IStream *, __int64, _QWORD, _QWORD))(*(_QWORD *)a6 + 40LL))(
                      a6,
                      `NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag,
                      0LL,
                      0LL);
              if ( v10 >= 0 )
              {
                v14 = a6;
                if ( a6 )
                {
                  (*(void (__fastcall **)(IStream *))(*(_QWORD *)a6 + 8LL))(a6);
                  v14 = a6;
                }
                *(_QWORD *)v9 = v14;
                v10 = 0;
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
      v11 = a6;
    }
    else
    {
      v10 = -2147024882;
    }
    if ( v11 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v10;
}
