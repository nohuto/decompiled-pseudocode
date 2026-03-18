/*
 * XREFs of ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18020902C
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180209480 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18007C908 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801FCAA4 (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::HDRConvertWithFakeOverlay(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  CSwapChainBase *v12; // rcx
  __int64 v13; // xmm0_8
  int LogicalBackBuffer; // eax
  __int64 v15; // rcx
  struct CD3DSurface *v16; // r15
  unsigned int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rdi
  unsigned int v20; // esi
  char v21; // bl
  double v22; // xmm0_8
  __int64 *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  struct CD3DSurface *v29; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-70h] BYREF
  int v31; // [rsp+B0h] [rbp-68h]
  int v32; // [rsp+B4h] [rbp-64h]
  __int64 v33; // [rsp+B8h] [rbp-60h]
  __int64 v34; // [rsp+C0h] [rbp-58h] BYREF
  int v35; // [rsp+C8h] [rbp-50h]
  __int64 v36; // [rsp+D0h] [rbp-48h] BYREF
  int v37; // [rsp+D8h] [rbp-40h]
  int v38; // [rsp+DCh] [rbp-3Ch]
  __int64 v39; // [rsp+E0h] [rbp-38h] BYREF
  int v40; // [rsp+E8h] [rbp-30h]
  int v41; // [rsp+ECh] [rbp-2Ch]
  _BYTE v42[16]; // [rsp+F0h] [rbp-28h] BYREF

  v29 = 0LL;
  v33 = a5;
  v30 = *(_QWORD *)a8;
  v31 = *(_DWORD *)(a8 + 8);
  v10 = *(_QWORD *)(a1 + 976);
  v32 = *(_DWORD *)(a8 + 12);
  v39 = *(_QWORD *)(a1 + 860);
  v40 = *(_DWORD *)(a1 + 868);
  v41 = *(_DWORD *)(a1 + 872);
  v36 = *(_QWORD *)(a1 + 876);
  v37 = *(_DWORD *)(a1 + 884);
  v38 = *(_DWORD *)(a1 + 888);
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v10 + 144) + 24LL))(v10 + 144, v42);
  v12 = *(CSwapChainBase **)(a1 + 240);
  v13 = *(_QWORD *)v11;
  LODWORD(v11) = *(_DWORD *)(v11 + 8);
  v34 = v13;
  v35 = v11;
  LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(v12, &v29);
  v16 = v29;
  v17 = LogicalBackBuffer;
  if ( LogicalBackBuffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, LogicalBackBuffer, 0x3A8u);
  }
  else
  {
    v18 = *((_QWORD *)v29 + 24);
    v19 = *(_QWORD *)(a1 + 592);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 192LL);
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
    v22 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
    v23 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 24LL))(v19, v42);
    v24 = CD3DDeviceLevel1::HDRConvertWithFakeOverlay(
            *(CSurfaceShaderComposer ***)(a1 + 216),
            a2,
            v23,
            v33,
            a6,
            a7,
            (unsigned int *)&v39,
            (enum DXGI_MODE_ROTATION)*(_DWORD *)(a1 + 908),
            &v34,
            (__int64)&v36,
            v18,
            a3,
            a4,
            v20,
            *(float *)&v22,
            v21,
            (__int64)&v30);
    v17 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x3B9u);
  }
  if ( v16 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v16 + 8LL))(v16);
  return v17;
}
