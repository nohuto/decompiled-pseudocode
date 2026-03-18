/*
 * XREFs of ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x180161C48
 * Callers:
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015AE44 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015D9D0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1801FC0D0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 * Callees:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18004A7FC (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x180161E70 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CreateFromTexture(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        __int64 a3,
        struct ID3D11Texture2D *a4,
        CHwTextureRenderTarget **a5)
{
  LPVOID v8; // rax
  __int64 v9; // rcx
  CHwTextureRenderTarget *v10; // rbx
  unsigned int v11; // edi
  signed int v12; // eax
  __int64 v13; // rcx

  *a5 = 0LL;
  v8 = operator new(0xD0uLL);
  if ( v8 )
    v10 = (CHwTextureRenderTarget *)CHwTextureRenderTarget::CHwTextureRenderTarget((__int64)v8);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = CHwTextureRenderTarget::Init(v10, a1, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA4u, 0LL);
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0xA1u, 0LL);
  }
  return v11;
}
