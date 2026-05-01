/*
 * XREFs of ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x18019703C
 * Callers:
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x180196D54 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConvertWICBitmapPixelFormat(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        struct _GUID *a3,
        enum WICBitmapDitherType a4,
        struct IWICBitmapSource **a5)
{
  int v8; // ebx
  __int64 v10[5]; // [rsp+40h] [rbp-28h] BYREF

  v10[1] = -2LL;
  *a5 = 0LL;
  v10[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  v8 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))a1->lpVtbl->CreateFormatConverter)(a1, v10);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, struct _GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v10[0] + 64LL))(
           v10[0],
           a2,
           a3,
           0LL,
           0LL,
           0LL,
           0);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v10[0])(
             v10[0],
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             a5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  return (unsigned int)v8;
}
