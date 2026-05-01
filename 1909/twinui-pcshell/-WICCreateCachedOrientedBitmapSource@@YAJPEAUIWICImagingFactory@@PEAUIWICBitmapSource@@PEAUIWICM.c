/*
 * XREFs of ?WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x180261494
 * Callers:
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x18026182C (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptions@@@Z @ 0x18026168C (-WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptio.c)
 */

__int64 __fastcall WICCreateCachedOrientedBitmapSource(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        struct IWICMetadataQueryReader *a3,
        struct IWICBitmapSource **a4)
{
  int v7; // ebx
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  struct IWICImagingFactoryVtbl *v9; // rax
  struct IWICBitmapSource *v10; // rcx
  struct IWICBitmapSource *v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  WICBitmapTransformOptions v14; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  v14 = WICBitmapTransformRotate0;
  v7 = WICGetTransformOptionFromMetadata(a3, &v14);
  if ( v7 >= 0 )
  {
    if ( v14 == WICBitmapTransformRotate0 )
    {
      *a4 = a2;
      ((void (__fastcall *)(struct IWICBitmapSource *))a2->lpVtbl->AddRef)(a2);
      return (unsigned int)v7;
    }
    lpVtbl = a1->lpVtbl;
    v12 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))lpVtbl->CreateBitmapFlipRotator)(
           a1,
           &v12);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( (v14 & 0x11) != 0 || v14 == WICBitmapTransformRotate180 )
    {
      v9 = a1->lpVtbl;
      v13 = 0LL;
      v7 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource *, __int64, __int64 *))v9->CreateBitmapFromSource)(
             a1,
             a2,
             2LL,
             &v13);
      if ( v7 < 0 )
      {
LABEL_12:
        ((void (__fastcall *)(struct IWICBitmapSource *))v12->lpVtbl->Release)(v12);
        return (unsigned int)v7;
      }
      v7 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD))v12->lpVtbl[1].QueryInterface)(
             v12,
             v13,
             (unsigned int)v14);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else
    {
      v7 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, _QWORD))v12->lpVtbl[1].QueryInterface)(
             v12,
             a2,
             (unsigned int)v14);
    }
    if ( v7 >= 0 )
    {
      v10 = v12;
      *a4 = v12;
      ((void (__fastcall *)(struct IWICBitmapSource *))v10->lpVtbl->AddRef)(v10);
    }
    goto LABEL_12;
  }
  return (unsigned int)v7;
}
