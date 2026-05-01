/*
 * XREFs of ?ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PEAPEAU1@@Z @ 0x1801D92F8
 * Callers:
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1801DA018 (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 *     ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x1802E6410 (-ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConvertIWICBitmapSourcePixelFormat(
        struct IWICBitmapSource *a1,
        struct _GUID *a2,
        struct IWICImagingFactory *a3,
        struct IWICBitmapSource **a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  struct IWICBitmapSource *v10; // rax
  __int64 v12[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-48h] BYREF

  v12[1] = -2LL;
  *a4 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _QWORD *))a1->lpVtbl->GetPixelFormat)(a1, v13);
  v9 = v13[0] - *(_QWORD *)&a2->Data1;
  if ( v13[0] == *(_QWORD *)&a2->Data1 )
    v9 = v13[1] - *(_QWORD *)a2->Data4;
  if ( v9 )
  {
    v12[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    v8 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))a3->lpVtbl->CreateFormatConverter)(a3, v12);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, struct _GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v12[0] + 64LL))(
             v12[0],
             a1,
             a2,
             0LL,
             0LL,
             0LL,
             0);
      if ( v8 >= 0 )
      {
        v10 = (struct IWICBitmapSource *)v12[0];
        v12[0] = 0LL;
        *a4 = v10;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  }
  else
  {
    *a4 = a1;
    ((void (__fastcall *)(struct IWICBitmapSource *))a1->lpVtbl->AddRef)(a1);
  }
  return (unsigned int)v8;
}
