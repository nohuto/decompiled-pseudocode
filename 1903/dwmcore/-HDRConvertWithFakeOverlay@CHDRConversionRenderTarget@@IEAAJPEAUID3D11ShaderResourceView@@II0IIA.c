/*
 * XREFs of ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180168E04
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180169280 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C2B98 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015D988 (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
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
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  CSwapChainBase *v12; // rcx
  __int64 v13; // xmm0_8
  signed int LogicalBackBuffer; // eax
  __int64 v15; // rcx
  struct CD3DSurface *v16; // r13
  unsigned int v17; // ebx
  __int64 v18; // rsi
  CSurfaceShaderComposer **v19; // r12
  __int64 v20; // r15
  __int64 (__fastcall *v21)(__int64, _BYTE *); // rdi
  unsigned int v22; // r14d
  char v23; // bl
  double v24; // xmm0_8
  __int64 *v25; // rax
  signed int v26; // eax
  __int64 v27; // rcx
  struct CD3DSurface *v32; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-68h] BYREF
  int v34; // [rsp+B8h] [rbp-60h]
  int v35; // [rsp+BCh] [rbp-5Ch]
  __int64 v36; // [rsp+C0h] [rbp-58h]
  __int64 v37; // [rsp+C8h] [rbp-50h]
  __int64 v38; // [rsp+D0h] [rbp-48h] BYREF
  int v39; // [rsp+D8h] [rbp-40h]
  __int64 v40; // [rsp+E0h] [rbp-38h] BYREF
  int v41; // [rsp+E8h] [rbp-30h]
  int v42; // [rsp+ECh] [rbp-2Ch]
  unsigned int v43[4]; // [rsp+F0h] [rbp-28h] BYREF
  _BYTE v44[16]; // [rsp+100h] [rbp-18h] BYREF

  v32 = 0LL;
  v36 = a5;
  v37 = a2;
  v33 = *(_QWORD *)a8;
  v34 = *(_DWORD *)(a8 + 8);
  v35 = *(_DWORD *)(a8 + 12);
  v43[0] = *(_DWORD *)(a1 + 796);
  v43[1] = *(_DWORD *)(a1 + 800);
  v43[2] = *(_DWORD *)(a1 + 804);
  v43[3] = *(_DWORD *)(a1 + 808);
  v40 = *(_QWORD *)(a1 + 812);
  v41 = *(_DWORD *)(a1 + 820);
  v9 = *(_DWORD *)(a1 + 824);
  v10 = *(_QWORD *)(a1 + 912);
  v42 = v9;
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v10 + 144) + 24LL))(v10 + 144, v44);
  v12 = *(CSwapChainBase **)(a1 + 176);
  v13 = *(_QWORD *)v11;
  LODWORD(v11) = *(_DWORD *)(v11 + 8);
  v38 = v13;
  v39 = v11;
  LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(v12, &v32);
  v16 = v32;
  v17 = LogicalBackBuffer;
  if ( LogicalBackBuffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, LogicalBackBuffer, 0x3A6u, 0LL);
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 528);
    v19 = *(CSurfaceShaderComposer ***)(a1 + 152);
    v20 = *((_QWORD *)v32 + 24);
    v21 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 24LL);
    v22 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 192LL);
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
    v24 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
    v25 = (__int64 *)v21(v18, v44);
    v26 = CD3DDeviceLevel1::HDRConvertWithFakeOverlay(
            v19,
            v37,
            v25,
            v36,
            a6,
            a7,
            v43,
            (enum DXGI_MODE_ROTATION)*(_DWORD *)(a1 + 844),
            &v38,
            (__int64)&v40,
            v20,
            a3,
            a4,
            v22,
            *(float *)&v24,
            v23,
            (__int64)&v33);
    v17 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x3B7u, 0LL);
  }
  if ( v16 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v16 + 8LL))(v16);
  return v17;
}
