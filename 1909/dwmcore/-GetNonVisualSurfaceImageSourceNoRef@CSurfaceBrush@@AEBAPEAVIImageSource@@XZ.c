/*
 * XREFs of ?GetNonVisualSurfaceImageSourceNoRef@CSurfaceBrush@@AEBAPEAVIImageSource@@XZ @ 0x180068168
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001ACC0 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800669C0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180067F60 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801FA938 (-GetSwapChainSize@CSurfaceBrush@@AEBAJ_NPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct IImageSource *__fastcall CSurfaceBrush::GetNonVisualSurfaceImageSourceNoRef(CSurfaceBrush *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  char v4; // al
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  char v8; // al

  v2 = 0LL;
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 39LL);
    v5 = *((_QWORD *)this + 12);
    if ( v4 )
    {
      v6 = v5 + 64;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 83LL);
      v5 = *((_QWORD *)this + 12);
      if ( !v8 )
      {
        (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 125LL);
        return (struct IImageSource *)v2;
      }
      v6 = v5 + 56;
    }
    return (struct IImageSource *)(v6 & ((unsigned __int128)-(__int128)v5 >> 64));
  }
  return (struct IImageSource *)v2;
}
