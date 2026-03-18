/*
 * XREFs of ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015F0B0
 * Callers:
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180194834 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801950DC (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024F14C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1802623BC (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800424C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x180163338 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _LUID a5,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  struct CD3DDeviceLevel1 *v9; // rsi
  int v10; // r8d
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 v12; // rdx
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // ebx
  signed int D3DDevice; // eax
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  struct CD3DDeviceLevel1 *v25; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+10h] BYREF

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
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3FFu, 0LL);
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802E3D40, 1u, v17, 0x4E5u, 0LL);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 8), a5, &v25);
    v17 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802E3D40, 1u, D3DDevice, 0x4E7u, 0LL);
      v9 = v25;
      goto LABEL_13;
    }
    v9 = v25;
    v20 = CHwTextureRenderTarget::CreateFromTexture(v25, a6, a4, a7, &v26);
    v17 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_1802E3D40, 1u, v20, 0x4F0u, 0LL);
      v11 = v26;
    }
    else
    {
      v11 = v26;
      v22 = (**v26)(v26, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v8);
      v17 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_1802E3D40, 1u, v22, 0x4F3u, 0LL);
    }
  }
  if ( v11 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
LABEL_13:
  if ( v9 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v9 + 496));
  return (unsigned int)v17;
}
