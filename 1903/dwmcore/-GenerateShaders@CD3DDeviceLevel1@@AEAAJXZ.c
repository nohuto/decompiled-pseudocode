/*
 * XREFs of ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180028680
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800267AC (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180027324 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x180027950 (-GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@UID3D11VertexShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11VertexShader@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@UID3D11VertexShader@@@WRL@Microsoft@@@Z @ 0x180028B98 (-Add@-$CMap@IV-$ComPtr@UID3D11VertexShader@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@UID3D1.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x180031360 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180036440 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GenerateShaders(CD3DDeviceLevel1 *this)
{
  __int128 *v1; // r15
  unsigned __int8 v3; // cl
  unsigned int v4; // esi
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, _QWORD, struct ID3D11PixelShader **); // rbx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int i; // edi
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  unsigned int v13; // ecx
  int v14; // r12d
  unsigned int j; // r15d
  unsigned int v16; // eax
  __int64 v17; // r10
  __int128 v18; // xmm0
  void *v19; // rsi
  struct ID3D11PixelShader *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD, struct ID3D11PixelShader *, char *); // rdi
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 *v26; // rbx
  __int64 (__fastcall *v27)(__int64, char *, __int64 *); // rdi
  unsigned int v28; // r15d
  __int64 v29; // rsi
  __int64 *v30; // rbx
  __int64 (__fastcall *v31)(__int64, struct HINSTANCE__ *, __int64 *); // rdi
  unsigned int k; // r15d
  __int64 v33; // rsi
  __int64 *v34; // rbx
  __int64 (__fastcall *v35)(__int64, char *, __int64 *); // rdi
  char *D3D11DepthStencilDesc; // rax
  unsigned int v37; // ecx
  __int64 *v38; // rdi
  CMILPoolResource *v40; // rcx
  unsigned int v41; // [rsp+28h] [rbp-E0h]
  bool v42; // [rsp+48h] [rbp-C0h]
  struct ID3D11PixelShader *v43; // [rsp+50h] [rbp-B8h] BYREF
  struct ID3D11PixelShader *v44[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v45; // [rsp+68h] [rbp-A0h]
  __int128 v46; // [rsp+70h] [rbp-98h] BYREF
  int v47; // [rsp+80h] [rbp-88h]
  const char *v48; // [rsp+88h] [rbp-80h]
  int v49; // [rsp+90h] [rbp-78h]
  int v50; // [rsp+98h] [rbp-70h]
  int v51; // [rsp+9Ch] [rbp-6Ch]
  __int128 v52; // [rsp+A8h] [rbp-60h]
  void *v53[2]; // [rsp+B8h] [rbp-50h]
  _BYTE v54[416]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = (__int128 *)&unk_180271DF0;
  v45 = *((_DWORD *)this + 185);
  v3 = v45 >= 37632;
  v4 = 0;
  v42 = v45 >= 37632;
  do
  {
    if ( ((v4 & 0x10) == 0 || *((_BYTE *)this + 779)) && v3 >= (unsigned __int8)((v4 & 4) != 0) )
    {
      v52 = *v1;
      v5 = v52;
      if ( (__int64)v52 > 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
        v6 = *((_QWORD *)this + 79);
        v43 = 0LL;
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, struct ID3D11PixelShader **))(*(_QWORD *)v6 + 96LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v43);
        v8 = v7(v6, *((_QWORD *)&v52 + 1), v5, 0LL, &v43);
        v10 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x264u, 0LL);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v43);
          return v10;
        }
        LODWORD(v44[0]) = v4;
        CMap<unsigned int,Microsoft::WRL::ComPtr<ID3D11VertexShader>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<ID3D11VertexShader>>>::Add(
          (char *)this + 1168,
          v44,
          &v43);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v43);
        v3 = v42;
      }
    }
    ++v4;
    ++v1;
  }
  while ( v4 < 0x20 );
  for ( i = 0; i < 4; ++i )
  {
    v50 = -1;
    *((_QWORD *)&v46 + 1) = "NoOp";
    v47 = 0;
    v49 = 0;
    v51 = 0;
    v48 = "NoOp";
    *(_QWORD *)&v46 = i;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     this,
                                                     (const struct CommonRenderingShaderDesc *)&v46,
                                                     0,
                                                     (unsigned int *)v44,
                                                     &v43);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v41 = 628;
      goto LABEL_54;
    }
    if ( (v46 & 1) != 0 )
    {
      LODWORD(v46) = v46 | 4;
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       this,
                                                       (const struct CommonRenderingShaderDesc *)&v46,
                                                       0,
                                                       (unsigned int *)v44,
                                                       &v43);
      v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v41 = 634;
LABEL_54:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, v41, 0LL);
        return v10;
      }
    }
  }
  v14 = 0;
  while ( 2 )
  {
    for ( j = 0; j < 2; ++j )
    {
      LODWORD(v44[0]) = 0x10000;
      LOBYTE(v44[0]) = (unsigned __int64)(v14 - 2LL) <= 1;
      HIDWORD(v44[0]) = ((v14 - 1LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 ? 2 : 4;
      BYTE3(v44[0]) = j != 0;
      v16 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)v44);
      if ( (unsigned __int8)v42 >= (unsigned __int8)((v16 & 4) != 0) )
      {
        v18 = *((_OWORD *)&unk_180271DF0 + v16);
        v43 = (struct ID3D11PixelShader *)*((_QWORD *)&unk_180271DF0 + 2 * v16);
        v46 = v18;
        if ( v43 )
        {
          *(_OWORD *)v44 = *(_OWORD *)(v17 + 16LL * v14 + 3383952);
          *(_OWORD *)v53 = *(_OWORD *)(v17 + 16LL * (int)j + 3384016);
          v19 = v53[0];
          if ( v53[0] )
          {
            v20 = v44[0];
            v21 = 32 * (__int64)v44[0];
            memcpy_0(v54, v44[1], 32 * (__int64)v44[0]);
            memcpy_0(&v54[v21], v53[1], 32LL * (_QWORD)v19);
            if ( (__int64)v19 + (__int64)v20 < 0 )
            {
              ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
              __debugbreak();
            }
            *(_QWORD *)&v52 = (char *)v19 + (_QWORD)v20;
            *((_QWORD *)&v52 + 1) = v54;
            *(_OWORD *)v44 = v52;
          }
          v22 = *((_QWORD *)this + 79);
          v23 = *(__int64 (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD, struct ID3D11PixelShader *, char *))(*(_QWORD *)v22 + 88LL);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 4 * j + v14 + 156);
          CommonOrCubeMapRenderingShadersNoRefInternal = v23(
                                                           v22,
                                                           v44[1],
                                                           LODWORD(v44[0]),
                                                           *((_QWORD *)&v46 + 1),
                                                           v43,
                                                           (char *)this + 32 * j + 8 * v14 + 1248);
          v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
          if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
          {
            v41 = 672;
            goto LABEL_54;
          }
        }
      }
    }
    if ( (unsigned int)++v14 < 4 )
      continue;
    break;
  }
  v24 = 0LL;
  do
  {
    v25 = *((_QWORD *)this + 79);
    v26 = (__int64 *)((char *)this + 8 * v24);
    v27 = *(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v25 + 160LL);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v26 + 168);
    CommonOrCubeMapRenderingShadersNoRefInternal = v27(v25, &byte_1802E11E0[264 * (int)v24], v26 + 168);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v41 = 682;
      goto LABEL_54;
    }
    v24 = (unsigned int)(v24 + 1);
  }
  while ( (unsigned int)v24 < 0x18 );
  v28 = 0;
  do
  {
    v29 = *((_QWORD *)this + 79);
    v30 = (__int64 *)((char *)this + 8 * v28);
    v31 = *(__int64 (__fastcall **)(__int64, struct HINSTANCE__ *, __int64 *))(*(_QWORD *)v29 + 176LL);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v30 + 240);
    CommonOrCubeMapRenderingShadersNoRefInternal = v31(v29, &_ImageBase + 10 * (int)v28 + 778974, v30 + 240);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v41 = 689;
      goto LABEL_54;
    }
    ++v28;
  }
  while ( !v28 );
  for ( k = 0; k < 4; ++k )
  {
    v33 = *((_QWORD *)this + 79);
    v34 = (__int64 *)((char *)this + 8 * k);
    v35 = *(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v33 + 168LL);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v34 + 241);
    D3D11DepthStencilDesc = DepthStencilMode::GetD3D11DepthStencilDesc(k);
    CommonOrCubeMapRenderingShadersNoRefInternal = v35(v33, D3D11DepthStencilDesc, v34 + 241);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v41 = 696;
      goto LABEL_54;
    }
  }
  if ( v45 >= 37632 )
  {
    v46 = (unsigned __int64)this + 1240;
    LOBYTE(v47) = 1;
    v10 = CSurfaceShaderComposer::Create(this, (struct CSurfaceShaderComposer **)&v46 + 1);
    if ( (_BYTE)v47 )
    {
      v37 = v46;
      v38 = *(__int64 **)v46;
      *(_QWORD *)v46 = *((_QWORD *)&v46 + 1);
      if ( v38 )
      {
        v40 = (CMILPoolResource *)v38[10];
        if ( v40 )
        {
          v38[10] = 0LL;
          CMILPoolResource::Release(v40);
        }
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v38 + 9);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v38 + 8);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v38 + 7);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v38 + 6);
        `vector destructor iterator'(
          v38,
          8uLL,
          6uLL,
          Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
        operator delete(v38, 0x68uLL);
      }
    }
    if ( (v10 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v10, 0x2C3u, 0LL);
  }
  return v10;
}
