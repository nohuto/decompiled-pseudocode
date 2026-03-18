/*
 * XREFs of ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180039930
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180018740 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800188DC (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18002DBF0 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800B1818 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1800CE5D0 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800D21DC (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180163180 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1801AC710 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x1801ACAEC (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapSubRectRealization@@EEAAJXZ @ 0x180256FB0 (-EnsureBitmapCacheSource@CSectionBitmapSubRectRealization@@EEAAJXZ.c)
 * Callees:
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800399F4 (-HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x180039BAC (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromMemoryEx(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct IUnknown *a7,
        struct IBitmapSource **a8)
{
  CClientMemoryBitmap *v12; // rax
  unsigned int v13; // ecx
  CClientMemoryBitmap *v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  struct IUnknown *v19; // [rsp+38h] [rbp-10h]

  v12 = (CClientMemoryBitmap *)operator new(0x100uLL);
  if ( v12 )
    v14 = CClientMemoryBitmap::CClientMemoryBitmap(v12);
  else
    v14 = 0LL;
  if ( v14 )
  {
    (*(void (__fastcall **)(CClientMemoryBitmap *))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = CClientMemoryBitmap::HrInit(v14, a1, a2, a3, a5, a6, a4, v19);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x27u, 0LL);
      (*(void (__fastcall **)(CClientMemoryBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      *a8 = (CClientMemoryBitmap *)((char *)v14 + 16);
    }
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
  return v17;
}
