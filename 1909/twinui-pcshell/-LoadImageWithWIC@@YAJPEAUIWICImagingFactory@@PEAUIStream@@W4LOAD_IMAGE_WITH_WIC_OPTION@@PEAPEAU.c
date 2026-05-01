/*
 * XREFs of ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x1802516F8
 * Callers:
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18024D6AC (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x18026182C (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LoadImageWithWIC(
        struct IWICImagingFactory *a1,
        __int64 a2,
        __int64 a3,
        struct IWICBitmapSource **a4,
        struct IWICBitmapFrameDecode *a5)
{
  struct IWICImagingFactory *v7; // rbx
  HRESULT Instance; // ebx
  HRESULT (__stdcall *CreateDecoderFromStream)(IWICImagingFactory *, IStream *, const GUID *, WICDecodeOptions, IWICBitmapDecoder **); // rdi
  struct IWICBitmapDecoder *v10; // rbx
  HRESULT (__stdcall *GetFrame)(IWICBitmapDecoder *, UINT, IWICBitmapFrameDecode **); // rdi
  struct IWICImagingFactory *ppv; // [rsp+60h] [rbp+20h] BYREF
  struct IWICBitmapDecoder *v14; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppv);
  v7 = ppv;
  if ( !ppv )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Instance = CoCreateInstance(
                 &CLSID_WICImagingFactory2,
                 0LL,
                 1u,
                 &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                 (LPVOID *)&ppv);
    if ( Instance < 0 )
      goto LABEL_9;
    v7 = ppv;
  }
  v14 = 0LL;
  CreateDecoderFromStream = v7->lpVtbl->CreateDecoderFromStream;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64, GUID *, _QWORD, struct IWICBitmapDecoder **))CreateDecoderFromStream)(
               v7,
               a2,
               &GUID_VendorMicrosoftBuiltIn,
               0LL,
               &v14);
  if ( Instance >= 0 )
  {
    a5 = 0LL;
    v10 = v14;
    GetFrame = v14->lpVtbl->GetFrame;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    Instance = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, _QWORD, struct IWICBitmapFrameDecode **))GetFrame)(
                 v10,
                 0LL,
                 &a5);
    if ( Instance >= 0 )
      Instance = WICOrientateFrame(ppv, v14, a5, 1, a4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance;
}
