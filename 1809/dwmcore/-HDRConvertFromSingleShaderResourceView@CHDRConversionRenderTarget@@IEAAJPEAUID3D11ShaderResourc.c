/*
 * XREFs of ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x180208E94
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180209480 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18007C908 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801FC7D4 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        enum DXGI_MODE_ROTATION a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  CSwapChainBase *v12; // rcx
  int LogicalBackBuffer; // eax
  __int64 v15; // rcx
  struct CD3DSurface *v16; // r14
  unsigned int v17; // ebx
  __int64 v18; // rsi
  unsigned int v19; // edi
  char v20; // bl
  float v21; // xmm0_4
  int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // [rsp+80h] [rbp-38h] BYREF
  int v26; // [rsp+88h] [rbp-30h]
  int v27; // [rsp+8Ch] [rbp-2Ch]
  struct CD3DSurface *v28; // [rsp+C0h] [rbp+8h] BYREF

  v28 = 0LL;
  v12 = *(CSwapChainBase **)(a1 + 240);
  v25 = *(_QWORD *)a9;
  v26 = *(_DWORD *)(a9 + 8);
  v27 = *(_DWORD *)(a9 + 12);
  LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(v12, &v28);
  v16 = v28;
  v17 = LogicalBackBuffer;
  if ( LogicalBackBuffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, LogicalBackBuffer, 0x363u);
  }
  else
  {
    v18 = *((_QWORD *)v28 + 24);
    v19 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 192LL);
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
    v21 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
    v22 = CD3DDeviceLevel1::HDRConvert(
            *(CSurfaceShaderComposer ***)(a1 + 216),
            a2,
            a3,
            a4,
            a6,
            a5,
            a7,
            a8,
            v18,
            *(_DWORD *)(a1 + 248),
            *(_DWORD *)(a1 + 252),
            v19,
            v21,
            v20,
            (__int64)&v25);
    v17 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x372u);
  }
  if ( v16 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v16 + 8LL))(v16);
  return v17;
}
