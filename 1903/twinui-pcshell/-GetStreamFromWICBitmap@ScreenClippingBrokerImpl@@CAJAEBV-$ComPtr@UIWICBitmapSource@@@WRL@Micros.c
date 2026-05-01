/*
 * XREFs of ?GetStreamFromWICBitmap@ScreenClippingBrokerImpl@@CAJAEBV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@PEAPEAUIStream@@@Z @ 0x1803E1C28
 * Callers:
 *     ?GetScreenShotForGUID@ScreenClippingBrokerImpl@@EEAAJU_GUID@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E1B20 (-GetScreenShotForGUID@ScreenClippingBrokerImpl@@EEAAJU_GUID@@PEAPEAUIStream@@PEAPEAUIWICBitmapSo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1801DDAB4 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenClippingBrokerImpl::GetStreamFromWICBitmap(struct IWICBitmapSource **a1, IStream *a2)
{
  int StreamOfWICBitmapSourceWithOptions; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  GUID v8; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LPVOID ppv; // [rsp+70h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  StreamOfWICBitmapSourceWithOptions = CoCreateInstance(
                                         &CLSID_WICImagingFactory2,
                                         0LL,
                                         1u,
                                         &GUID_7b816b45_1996_4476_b132_de9e247c8af0,
                                         &ppv);
  v5 = StreamOfWICBitmapSourceWithOptions;
  if ( StreamOfWICBitmapSourceWithOptions >= 0 )
  {
    v8 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                           ppv,
                                           *a1,
                                           (__int64)&GUID_ContainerFormatBmp,
                                           &v8,
                                           1,
                                           a2);
    v5 = StreamOfWICBitmapSourceWithOptions;
    if ( StreamOfWICBitmapSourceWithOptions >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 197LL;
  }
  else
  {
    v6 = 189LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
    (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v5;
}
