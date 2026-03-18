/*
 * XREFs of ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180161268
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015BFB4 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015C2AC (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x1801611D8 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017D844 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18015BD44 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180160F90 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAX_K@Z @ 0x1801618DC (-_Reallocate_exactly@-$vector@PEAVCParticleAttractor@@V-$allocator@PEAVCParticleAttractor@@@std@.c)
 */

__int64 __fastcall CSurfaceShaderComposer::RunShader(
        _QWORD *a1,
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
  _BYTE *v13; // rsi
  _QWORD *v15; // r13
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rdi
  unsigned __int64 v19; // r12
  _BYTE *v20; // r14
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  signed int D3DSamplerStateNoRef; // eax
  __int64 v24; // rcx
  unsigned int v25; // r13d
  float *v26; // r12
  float v27; // xmm1_4
  float v28; // xmm0_4
  int v29; // eax
  float v30; // xmm1_4
  int (__fastcall *v31)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v32)(_QWORD, GUID *, __int64 *); // rbx
  signed int v33; // eax
  __int64 v34; // rcx
  _OWORD *v35; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rax
  __int64 *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  void *v41; // r15
  __int16 v43; // [rsp+40h] [rbp-A9h] BYREF
  char v44; // [rsp+42h] [rbp-A7h]
  __int64 v45; // [rsp+50h] [rbp-99h] BYREF
  GUID *v46; // [rsp+58h] [rbp-91h] BYREF
  __int128 v47; // [rsp+60h] [rbp-89h] BYREF
  _BYTE *v48; // [rsp+70h] [rbp-79h]
  int v49; // [rsp+78h] [rbp-71h]
  _QWORD *v50; // [rsp+80h] [rbp-69h]
  __int64 v51; // [rsp+88h] [rbp-61h] BYREF
  __int64 v52; // [rsp+90h] [rbp-59h] BYREF
  float *v53; // [rsp+98h] [rbp-51h]
  __int64 v54; // [rsp+A0h] [rbp-49h] BYREF
  __int128 *v55; // [rsp+A8h] [rbp-41h]
  __int64 v56; // [rsp+B0h] [rbp-39h]
  _OWORD *v57; // [rsp+B8h] [rbp-31h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-21h] BYREF
  __int128 v59; // [rsp+D8h] [rbp-11h] BYREF

  v13 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v53 = a6;
  v15 = a1;
  v49 = a7;
  v16 = *a8;
  v54 = a10;
  v56 = a11;
  v55 = a12;
  v17 = a1[12];
  v51 = a4;
  v50 = a1;
  v48 = 0LL;
  v18 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v17 + 640);
  v58 = 0LL;
  v47 = 0LL;
  if ( v16 )
  {
    if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    std::vector<CParticleAttractor *>::_Reallocate_exactly(&v47, v16);
    v16 = *a8;
    v13 = v48;
  }
  v19 = a8[1];
  v20 = (_BYTE *)*((_QWORD *)&v47 + 1);
  v21 = v19 + 2 * v16 + v16;
  if ( v19 != v21 )
  {
    while ( 1 )
    {
      v22 = v15[12];
      v43 = *(_WORD *)v19;
      v44 = *(_BYTE *)(v19 + 2);
      D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef(v22, (unsigned __int8 *)&v43, &v52);
      v25 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
        break;
      if ( v13 == v20 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>((__int64)&v47, v20, &v52);
        v13 = v48;
        v20 = (_BYTE *)*((_QWORD *)&v47 + 1);
      }
      else
      {
        *(_QWORD *)v20 = v52;
        v20 += 8;
        *((_QWORD *)&v47 + 1) = v20;
      }
      v15 = v50;
      v19 += 3LL;
      if ( v19 == v21 )
        goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, D3DSamplerStateNoRef, 0xF8u, 0LL);
    goto LABEL_27;
  }
LABEL_11:
  v26 = v53;
  if ( v55 )
  {
    v59 = *v55;
  }
  else
  {
    v27 = v53[1];
    v28 = *v53 + v53[2];
    LODWORD(v59) = (int)*v53;
    v29 = (int)v27;
    v30 = v27 + v53[3];
    DWORD1(v59) = v29;
    DWORD2(v59) = (int)v28;
    HIDWORD(v59) = (int)v30;
  }
  v31 = (*v18)[131];
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v46);
  v31(v18, (GUID *)v15[9], (__int64 *)&v46);
  if ( a9 )
  {
    v32 = **v18;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v45);
    if ( v32(v18, &GUID_b4e3c01d_e79e_4637_91b2_510e9f4c9b8f, &v45) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 1160LL))(v45, 1LL);
  }
  v33 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64, _DWORD, _OWORD **))(*v18)[14])(
          v18,
          v15[8],
          0LL,
          4LL,
          0,
          &v57);
  v25 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x11Cu, 0LL);
LABEL_27:
    v41 = (void *)v47;
    goto LABEL_28;
  }
  v35 = v57;
  v36 = v50;
  *v57 = *a2;
  v35[1] = a2[1];
  v35[2] = a2[2];
  v35[3] = a2[3];
  v35[4] = a2[4];
  v35[5] = a2[5];
  v35[6] = a2[6];
  v35[7] = a2[7];
  v35[8] = a2[8];
  (*v18)[15](v18, (GUID *)v36[8], 0LL);
  if ( a13 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int128 *, __int64))(*v18)[133])(
      v18,
      v54,
      &v59,
      1LL);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, _QWORD, _QWORD))(*v18)[9])(
    v18,
    v56,
    0LL,
    0LL);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64))(*v18)[8])(
    v18,
    0LL,
    a5,
    v51);
  v37 = v36[10];
  if ( v37 )
  {
    v38 = &v51;
    v39 = *((unsigned int *)v36 + 22);
    v40 = 1LL;
    v51 = *(_QWORD *)(v37 + 120);
  }
  else
  {
    v38 = 0LL;
    v40 = 0LL;
    v39 = 0LL;
  }
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, __int64 *))(*v18)[16])(
    v18,
    v39,
    v40,
    v38);
  v41 = (void *)v47;
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, _QWORD))(*v18)[10])(
    v18,
    0LL,
    (unsigned int)((__int64)&v20[-v47] >> 3),
    v47);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64))(*v18)[35])(
    v18,
    *(_QWORD *)(v36[12] + 8LL * v49 + 1344),
    0LL,
    0xFFFFFFFFLL);
  (*v18)[33](v18, (GUID *)1, &v54);
  (*v18)[45](v18, (GUID *)1, (__int64 *)&v59);
  (*v18)[44](v18, (GUID *)1, (__int64 *)v26);
  (*v18)[13](v18, (GUID *)6, 0LL);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int128 *))(*v18)[8])(
    v18,
    0LL,
    a5,
    &v58);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, _QWORD))(*v18)[33])(
    v18,
    0LL,
    0LL,
    0LL);
  if ( v45 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v45 + 1160LL))(v45, 0LL);
LABEL_28:
  (*v18)[131](v18, v46, 0LL);
  if ( v41 )
    std::_Deallocate<16,0>(v41, (v13 - (_BYTE *)v41) & 0xFFFFFFFFFFFFFFF8uLL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v45);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v46);
  return v25;
}
