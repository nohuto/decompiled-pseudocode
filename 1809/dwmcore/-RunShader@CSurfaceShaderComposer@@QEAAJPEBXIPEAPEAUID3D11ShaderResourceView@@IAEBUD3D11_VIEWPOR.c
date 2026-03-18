/*
 * XREFs of ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180201B60
 * Callers:
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017D344 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801FC7D4 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801FCAA4 (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x180201AD0 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x1801549E4 (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x1801FC69C (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::RunShader(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        float *a6,
        int a7,
        unsigned __int64 *a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int128 *a12,
        char a13)
{
  _QWORD *v13; // rdi
  unsigned __int64 *v14; // r15
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // r14
  gsl::details *v21; // rax
  __int64 v22; // rdx
  gsl::details *v23; // rcx
  unsigned __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  int D3DSamplerStateNoRef; // eax
  unsigned int v28; // r15d
  float v29; // xmm1_4
  float v30; // xmm0_4
  int v31; // eax
  float v32; // xmm1_4
  int v33; // eax
  __int64 v34; // rcx
  _OWORD *v35; // rax
  __int64 v36; // rax
  __int64 *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int16 v41; // [rsp+40h] [rbp-B9h] BYREF
  char v42; // [rsp+42h] [rbp-B7h]
  __int64 v43; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A1h] BYREF
  int v45; // [rsp+60h] [rbp-99h]
  __int64 v46; // [rsp+68h] [rbp-91h] BYREF
  __int128 v47; // [rsp+70h] [rbp-89h] BYREF
  _QWORD *v48; // [rsp+80h] [rbp-79h]
  __int64 v49; // [rsp+88h] [rbp-71h] BYREF
  gsl::details *v50; // [rsp+90h] [rbp-69h]
  __int64 v51; // [rsp+98h] [rbp-61h]
  __int64 v52; // [rsp+A0h] [rbp-59h] BYREF
  float *v53; // [rsp+A8h] [rbp-51h]
  gsl::details **v54; // [rsp+B0h] [rbp-49h]
  __int128 *v55; // [rsp+B8h] [rbp-41h]
  __int64 v56; // [rsp+C0h] [rbp-39h]
  _OWORD *v57; // [rsp+C8h] [rbp-31h] BYREF
  __int128 v58; // [rsp+D8h] [rbp-21h] BYREF
  __int128 v59; // [rsp+E8h] [rbp-11h] BYREF
  const void *retaddr; // [rsp+138h] [rbp+3Fh]

  v13 = 0LL;
  v14 = a8;
  v44 = 0LL;
  v43 = 0LL;
  v17 = *a8;
  v53 = a6;
  v45 = a7;
  v52 = a10;
  v56 = a11;
  v18 = *(_QWORD *)(a1 + 96);
  v46 = a4;
  v54 = (gsl::details **)a8;
  v55 = a12;
  v19 = *(_QWORD *)(v18 + 640);
  v48 = 0LL;
  v58 = 0LL;
  v47 = 0LL;
  if ( v17 )
  {
    if ( v17 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    std::vector<CDataSourceReader *>::_Reallocate_exactly((__int64)&v47, v17);
    v17 = *a8;
    v13 = v48;
  }
  v20 = (_QWORD *)*((_QWORD *)&v47 + 1);
  v21 = 0LL;
  v22 = 0LL;
  v23 = (gsl::details *)v17;
  while ( 1 )
  {
    v51 = v22;
    v50 = v21;
    if ( v21 == (gsl::details *)v17 )
      break;
    if ( v21 == v23 )
      goto LABEL_16;
    v24 = v14[1];
    v41 = *(_WORD *)(v24 + v22);
    v25 = *(_BYTE *)(v24 + v22 + 2);
    v26 = *(_QWORD *)(a1 + 96);
    v42 = v25;
    D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef(v26, (unsigned __int8 *)&v41, &v49);
    v28 = D3DSamplerStateNoRef;
    if ( D3DSamplerStateNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, D3DSamplerStateNoRef, 0xF8u);
      goto LABEL_32;
    }
    if ( v13 == v20 )
    {
      std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>((__int64 *)&v47, v20, &v49);
      v13 = v48;
      v20 = (_QWORD *)*((_QWORD *)&v47 + 1);
    }
    else
    {
      *v20++ = v49;
      *((_QWORD *)&v47 + 1) = v20;
    }
    if ( v51 < 0 || (v14 = (unsigned __int64 *)v54, v23 = *v54, v50 == *v54) )
    {
LABEL_16:
      gsl::details::terminate(v23);
      __debugbreak();
    }
    v21 = (gsl::details *)((char *)v50 + 1);
    v22 = v51 + 3;
  }
  if ( v55 )
  {
    v59 = *v55;
  }
  else
  {
    v29 = v53[1];
    v30 = *v53 + v53[2];
    LODWORD(v59) = (int)*v53;
    v31 = (int)v29;
    v32 = v29 + v53[3];
    DWORD1(v59) = v31;
    DWORD2(v59) = (int)v30;
    HIDWORD(v59) = (int)v32;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v44);
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 1048LL))(v19, *(_QWORD *)(a1 + 72), &v44);
  if ( a9 )
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v43);
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v19)(
           v19,
           &GUID_b4e3c01d_e79e_4637_91b2_510e9f4c9b8f,
           &v43) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 1160LL))(v43, 1LL);
  }
  v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _OWORD **))(*(_QWORD *)v19 + 112LL))(
          v19,
          *(_QWORD *)(a1 + 64),
          0LL,
          4LL,
          0,
          &v57);
  v28 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x11Cu);
  }
  else
  {
    v35 = v57;
    *v57 = *a2;
    v35[1] = a2[1];
    v35[2] = a2[2];
    v35[3] = a2[3];
    v35[4] = a2[4];
    v35[5] = a2[5];
    v35[6] = a2[6];
    v35[7] = a2[7];
    v35[8] = a2[8];
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 120LL))(v19, *(_QWORD *)(a1 + 64), 0LL);
    if ( a13 )
      (*(void (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)v19 + 1064LL))(v19, v52, &v59, 1LL);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 72LL))(v19, v56, 0LL, 0LL);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v19 + 64LL))(v19, 0LL, a5, v46);
    v36 = *(_QWORD *)(a1 + 80);
    if ( v36 )
    {
      v37 = &v46;
      v38 = *(unsigned int *)(a1 + 88);
      v39 = 1LL;
      v46 = *(_QWORD *)(v36 + 120);
    }
    else
    {
      v37 = 0LL;
      v39 = 0LL;
      v38 = 0LL;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v19 + 128LL))(v19, v38, v39, v37);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 80LL))(
      v19,
      0LL,
      (unsigned int)((__int64)((__int64)v20 - v47) >> 3),
      v47);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v19 + 280LL))(
      v19,
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * v45 + 1184),
      0LL,
      0xFFFFFFFFLL);
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 264LL))(v19, 1LL, &v52);
    (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v19 + 360LL))(v19, 1LL, &v59);
    (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v19 + 352LL))(v19, 1LL, v53);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 104LL))(v19, 6LL);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)v19 + 64LL))(v19, 0LL, a5, &v58);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 264LL))(v19, 0LL, 0LL, 0LL);
    if ( v43 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 1160LL))(v43, 0LL);
  }
LABEL_32:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 1048LL))(v19, v44, 0LL);
  if ( (_QWORD)v47 )
    std::_Deallocate<16,0>((void *)v47, ((unsigned __int64)v13 - v47) & 0xFFFFFFFFFFFFFFF8uLL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v43);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v44);
  return v28;
}
