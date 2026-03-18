/*
 * XREFs of ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B21B0
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B20BC (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x1800B23A0 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800B4264 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Create(
        struct CD3DDeviceLevel1 *a1,
        const struct CResourceTag *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct PixelFormatInfo *a6,
        bool a7,
        CHwTextureRenderTarget **a8)
{
  LPVOID v12; // rax
  __int64 v13; // rcx
  CHwTextureRenderTarget *v14; // rbx
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi

  *a8 = 0LL;
  v12 = operator new(0xD0uLL);
  if ( v12 )
    v14 = (CHwTextureRenderTarget *)CHwTextureRenderTarget::CHwTextureRenderTarget(v12, a5);
  else
    v14 = 0LL;
  if ( v14 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = CHwTextureRenderTarget::Init(v14, a1, a2, a3, a4, a6, a7);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x63u, 0LL);
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      *a8 = v14;
    }
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0x58u, 0LL);
  }
  return v17;
}
