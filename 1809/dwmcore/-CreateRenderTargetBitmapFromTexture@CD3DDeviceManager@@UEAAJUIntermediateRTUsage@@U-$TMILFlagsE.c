/*
 * XREFs of ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FA840
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180157F88 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015BE14 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180179214 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180227268 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 * Callees:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800067B4 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180030028 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _LUID a5,
        unsigned int a6,
        struct ID3D11Texture2D *a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  struct CD3DDeviceLevel1 *v9; // rsi
  unsigned int v10; // r8d
  CHwTextureRenderTarget *v11; // rdi
  __int64 v12; // rdx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ebx
  int D3DDevice; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  struct CD3DDeviceLevel1 *v25; // [rsp+30h] [rbp-28h] BYREF
  CHwTextureRenderTarget *v26; // [rsp+68h] [rbp+10h] BYREF

  v8 = a8;
  v9 = 0LL;
  v10 = a6;
  v11 = 0LL;
  v12 = (__int64)a5;
  v25 = 0LL;
  *a8 = 0LL;
  v26 = 0LL;
  v15 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1, v12, v10);
  v17 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x408u);
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802BC238, 1u, v17, 0x4EEu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 8), a5, &v25);
    v17 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802BC238, 1u, D3DDevice, 0x4F0u);
      v9 = v25;
      goto LABEL_13;
    }
    v9 = v25;
    v20 = CHwTextureRenderTarget::CreateFromTexture(v25, a6, a4, a7, &v26);
    v17 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_1802BC238, 1u, v20, 0x4F9u);
      v11 = v26;
    }
    else
    {
      v11 = v26;
      v22 = (**(__int64 (__fastcall ***)(CHwTextureRenderTarget *, GUID *, _QWORD *))v26)(
              v26,
              &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
              v8);
      v17 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_1802BC238, 1u, v22, 0x4FCu);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_13:
  if ( v9 )
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 496));
  return (unsigned int)v17;
}
