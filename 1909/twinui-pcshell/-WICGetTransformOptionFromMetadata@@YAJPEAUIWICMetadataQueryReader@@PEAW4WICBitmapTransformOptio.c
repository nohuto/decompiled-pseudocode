/*
 * XREFs of ?WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptions@@@Z @ 0x18026168C
 * Callers:
 *     ?WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x180261494 (-WICCreateCachedOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICM.c)
 *     ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802615D0 (-WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WICGetTransformOptionFromMetadata(
        struct IWICMetadataQueryReader *a1,
        enum WICBitmapTransformOptions *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  *a2 = WICBitmapTransformRotate0;
  pvar = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IWICMetadataQueryReader *, const wchar_t *, PROPVARIANT *))a1->lpVtbl->GetMetadataByName)(
         a1,
         L"System.Photo.Orientation",
         &pvar);
  v4 = v3;
  if ( v3 == -2003292352 || (_WORD)pvar != 18 )
  {
    *a2 = WICBitmapTransformRotate0;
    v4 = 0;
  }
  else if ( v3 >= 0 )
  {
    switch ( (unsigned __int16)v7 )
    {
      case 2u:
        *a2 = WICBitmapTransformFlipHorizontal;
        break;
      case 3u:
        *a2 = WICBitmapTransformRotate180;
        break;
      case 4u:
        *a2 = WICBitmapTransformFlipVertical;
        break;
      case 5u:
        *a2 = WICBitmapTransformFlipVertical|WICBitmapTransformRotate90;
        break;
      case 6u:
        *a2 = WICBitmapTransformRotate90;
        break;
      case 7u:
        *a2 = WICBitmapTransformFlipVertical|WICBitmapTransformRotate270;
        break;
      case 8u:
        *a2 = WICBitmapTransformRotate270;
        break;
      default:
        *a2 = WICBitmapTransformRotate0;
        break;
    }
  }
  PropVariantClear(&pvar);
  return v4;
}
