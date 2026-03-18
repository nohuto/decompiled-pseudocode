/*
 * XREFs of ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x180167574
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180167B90 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C2D48 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015BFB4 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
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
  CSwapChainBase *v10; // rcx
  signed int LogicalBackBuffer; // eax
  __int64 v14; // rcx
  struct CD3DSurface *v15; // r14
  unsigned int v16; // ebx
  CSurfaceShaderComposer **v17; // rbp
  __int64 v18; // rsi
  unsigned int v19; // edi
  char v20; // bl
  float v21; // xmm0_4
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // [rsp+80h] [rbp-48h] BYREF
  int v26; // [rsp+88h] [rbp-40h]
  int v27; // [rsp+8Ch] [rbp-3Ch]
  struct CD3DSurface *v28; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+10h]

  v29 = a2;
  v28 = 0LL;
  v10 = *(CSwapChainBase **)(a1 + 176);
  v25 = *(_QWORD *)a9;
  v26 = *(_DWORD *)(a9 + 8);
  v27 = *(_DWORD *)(a9 + 12);
  LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(v10, &v28);
  v15 = v28;
  v16 = LogicalBackBuffer;
  if ( LogicalBackBuffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, LogicalBackBuffer, 0x361u, 0LL);
  }
  else
  {
    v17 = *(CSurfaceShaderComposer ***)(a1 + 152);
    v18 = *((_QWORD *)v28 + 24);
    v19 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 192LL);
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
    v21 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
    v22 = CD3DDeviceLevel1::HDRConvert(
            v17,
            v29,
            a3,
            a4,
            a6,
            a5,
            a7,
            a8,
            v18,
            *(_DWORD *)(a1 + 184),
            *(_DWORD *)(a1 + 188),
            v19,
            v21,
            v20,
            (__int64)&v25);
    v16 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x370u, 0LL);
  }
  if ( v15 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v15 + 8LL))(v15);
  return v16;
}
