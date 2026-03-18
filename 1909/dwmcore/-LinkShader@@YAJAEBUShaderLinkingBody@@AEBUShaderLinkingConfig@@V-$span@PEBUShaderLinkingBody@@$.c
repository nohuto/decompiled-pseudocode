/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180031B14
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180030148 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180044440 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 * Callees:
 *     AppendLights @ 0x18000C33C (AppendLights.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InitializeShaderLinkingInput @ 0x180030C24 (InitializeShaderLinkingInput.c)
 *     UseFragmentsModuleNoRef @ 0x180030EC4 (UseFragmentsModuleNoRef.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x180031018 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180031244 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     AppendShaderBody @ 0x1800315F4 (AppendShaderBody.c)
 *     DiscoverSamplers @ 0x180031A78 (DiscoverSamplers.c)
 *     ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x180032098 (-DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z.c)
 *     PrepareSamplers @ 0x1800320B4 (PrepareSamplers.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180032580 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     LoadShaderBody @ 0x180032C3C (LoadShaderBody.c)
 *     HasWhiteNoise @ 0x180032E1C (HasWhiteNoise.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800330CC (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     GetExpectedVertexShaderDesc @ 0x180033138 (GetExpectedVertexShaderDesc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x1800D038C (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingG_ea_1800D038C.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801B6E44 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, struct ID3D10Blob **a5)
{
  _QWORD **v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rbx
  _QWORD **v14; // r15
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  bool v18; // al
  int v19; // edx
  __int64 v20; // r9
  unsigned int v21; // r10d
  char v22; // r15
  _QWORD *i; // rbx
  _DWORD *v24; // r12
  __int64 ExpectedVertexShaderDesc; // rax
  VertexShaderDesc *v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // edx
  unsigned int v33; // ecx
  void *v34; // r14
  unsigned int v35; // esi
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // r15d
  int v39; // r8d
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v43; // rdx
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // r12d
  unsigned int v53; // eax
  unsigned int *v54; // r12
  int v55; // r8d
  int ShaderBody; // eax
  unsigned int v57; // ecx
  int v58; // eax
  unsigned int v59; // ecx
  int appended; // eax
  unsigned int v61; // ecx
  int v62; // eax
  unsigned int v63; // ecx
  int v64; // eax
  unsigned int v65; // ecx
  int v66; // eax
  unsigned int v67; // ecx
  int ConversionShader; // eax
  unsigned int v69; // ecx
  int v70; // eax
  unsigned int v71; // ecx
  int v72; // eax
  unsigned int v73; // ecx
  bool v74; // zf
  __int64 *v75; // rax
  int v76; // eax
  unsigned int v77; // ecx
  struct ColorConversion::Shader *v78; // [rsp+20h] [rbp-E0h]
  __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v80; // [rsp+48h] [rbp-B8h]
  _QWORD *v81; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v82; // [rsp+58h] [rbp-A8h]
  struct ID3D10Blob **v83; // [rsp+60h] [rbp-A0h]
  struct ID3D11Linker *v84[2]; // [rsp+70h] [rbp-90h] BYREF
  char v85[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v86; // [rsp+88h] [rbp-78h]
  _BYTE v87[32]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v88; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v89; // [rsp+F4h] [rbp-Ch]
  _OWORD v90[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v91[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v92[2]; // [rsp+130h] [rbp+30h] BYREF

  v91[0] = a3;
  v83 = a5;
  v92[0] = a4;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)v84);
  v79 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Start);
  memset_0(v87, 0, sizeof(v87));
  v8 = (_QWORD **)a3[1];
  *((_QWORD *)&v90[0] + 1) = v87;
  v9 = 0;
  v10 = 0LL;
  v88 = *(_DWORD *)(a1 + 48);
  v11 = *a3;
  *(_QWORD *)&v90[0] = 4LL;
  v81 = v8;
  v82 = v11;
  v12 = &v8[v11];
  v13 = v11 & 0x1FFFFFFFFFFFFFFFLL;
  v80 = v12;
  if ( v8 > v12 )
    v13 = 0LL;
  v14 = v8;
  if ( v13 )
  {
    v52 = v88;
    do
    {
      v52 += *((_DWORD *)*v14 + 12);
      v53 = DiscoverSamplers(*v14, (unsigned __int64 *)v90);
      if ( v9 <= v53 )
        v9 = v53;
      ++v14;
      ++v10;
    }
    while ( v10 != v13 );
    v88 = v52;
    v12 = v80;
  }
  v15 = DiscoverSamplers((_QWORD *)a1, (unsigned __int64 *)v90);
  if ( v9 <= v15 )
    v9 = v15;
  if ( *(_BYTE *)(a2 + 156) && v9 <= 2 )
    v9 = 2;
  LODWORD(v80) = v9;
  v16 = 0LL;
  v17 = 0LL;
  do
  {
    if ( (unsigned int)v17 >= 4uLL )
    {
      ((void (__fastcall *)(_QWORD, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
        (unsigned int)v17,
        v17,
        v16);
      __debugbreak();
    }
    v18 = DoesSamplerRequireConstantBufferData((const struct ShaderLinkingSamplerDesc *)(a2 + 32LL * (unsigned int)v17));
    v87[8 * v20 + 2] = v18;
    if ( v18 )
    {
      v50 = v16;
      v51 = v19 + 1;
      v16 = (unsigned int)(v16 + 1);
      *(_DWORD *)&v87[8 * v20 + 4] = v50;
      if ( v21 > v19 + 1 )
        v51 = v21;
      LODWORD(v80) = v51;
    }
    v17 = (unsigned int)(v19 + 1);
  }
  while ( (unsigned int)v17 < 4 );
  v22 = HasWhiteNoise(a1);
  if ( !v22 )
  {
    for ( i = v81; i != v12; ++i )
    {
      if ( (unsigned __int8)HasWhiteNoise(*i) )
      {
        v22 = 1;
        break;
      }
    }
  }
  v24 = (_DWORD *)v91[0];
  v90[0] = *(_OWORD *)v91[0];
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc(a1, (unsigned int)v90, a2, v9, v22);
  v26 = (VertexShaderDesc *)v92[0];
  *(_QWORD *)v92[0] = ExpectedVertexShaderDesc;
  LOBYTE(v27) = *(_BYTE *)(a1 + 32);
  v28 = InitializeShaderLinkingInput(v84, v27, v26);
  v30 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x49Du, 0LL);
    goto LABEL_35;
  }
  v31 = UseFragmentsModuleNoRef((__int64)v84, v88, *(_BYTE *)(a2 + 156), v92);
  v30 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v31, 0x49Eu, 0LL);
    goto LABEL_35;
  }
  v34 = (void *)v92[0];
  if ( v9 > 2 )
  {
    v35 = 0;
  }
  else
  {
    v35 = 0;
    if ( !v22 )
      goto LABEL_20;
  }
  *(_QWORD *)&v90[0] = 3LL;
  v89 = 258;
  v88 = 16843008;
  *((_QWORD *)&v90[0] + 1) = &v88;
  LOWORD(v32) = v22 != 0 ? 12 : 259;
  appended = CShaderLinkingGraphBuilder::AppendNode(
               (unsigned int)v84,
               v32,
               (unsigned int)byte_18028123E,
               v92[0],
               (__int64)"DecodeTexcoord3",
               (__int64)v90);
  v30 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, appended, 0x4AAu, 0LL);
    goto LABEL_35;
  }
LABEL_20:
  LOWORD(v88) = 1;
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
    v85,
    v92,
    &v88);
  if ( v92[0] != v86 && *(_DWORD *)(a2 + 144) > 1u )
  {
    *(_QWORD *)&v90[0] = 1LL;
    *((_QWORD *)&v90[0] + 1) = &v88;
    v78 = *(struct ColorConversion::Shader **)(a2 + 136);
    LOWORD(v88) = 1;
    v62 = CShaderLinkingGraphBuilder::AppendNode(
            (unsigned int)v84,
            1,
            (unsigned int)byte_18028123E,
            (_DWORD)v34,
            (__int64)v78,
            (__int64)v90);
    v30 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x4B6u, 0LL);
      goto LABEL_35;
    }
  }
  *(_QWORD *)&v90[0] = (unsigned int)v80;
  LOBYTE(v88) = 0;
  *((_QWORD *)&v90[0] + 1) = v87;
  v36 = PrepareSamplers(v84, a2, v90);
  v30 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x4C3u, 0LL);
  }
  else
  {
    v38 = 0;
    if ( *v24 )
    {
      while ( 1 )
      {
        if ( v35 >= v82 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v54 = (unsigned int *)v81[v35];
        WORD6(v90[0]) = (unsigned __int8)(v35 + 48);
        qmemcpy(v90, "BodyFragment", 12);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
        ShaderBody = LoadShaderBody((unsigned int)v84, (_DWORD)v54, v55, v38, (__int64)v90, (__int64)&v79);
        v30 = ShaderBody;
        if ( ShaderBody < 0 )
          break;
        v58 = AppendShaderBody(v84, (unsigned __int16)v35 | 0x500u, v54, a2, (__int64)v90, v79, v34, &v88);
        v30 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x4CFu, 0LL);
          goto LABEL_35;
        }
        v38 += v54[12];
        if ( ++v35 >= (unsigned int)v82 )
          goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, ShaderBody, 0x4CEu, 0LL);
    }
    else
    {
LABEL_24:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
      v40 = LoadShaderBody((unsigned int)v84, a1, v39, v38, (__int64)byte_18028123E, (__int64)&v79);
      v30 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x4D5u, 0LL);
      }
      else
      {
        v42 = AppendShaderBody(v84, 10, (unsigned int *)a1, a2, (__int64)byte_18028123E, v79, v34, &v88);
        v30 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v42, 0x4D6u, 0LL);
        }
        else
        {
          if ( *(_BYTE *)(a2 + 153) )
          {
            *(_QWORD *)&v90[0] = 5LL;
            *((_QWORD *)&v90[0] + 1) = &unk_1802BF268;
            v64 = CShaderLinkingGraphBuilder::AppendNode(
                    (unsigned int)v84,
                    10,
                    (unsigned int)byte_18028123E,
                    (_DWORD)v34,
                    (__int64)"ApplyPSClipPlanes",
                    (__int64)v90);
            v30 = v64;
            if ( v64 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x4E7u, 0LL);
              goto LABEL_35;
            }
          }
          if ( *(_BYTE *)(a2 + 155) )
          {
            *(_QWORD *)&v90[0] = 2LL;
            *((_QWORD *)&v90[0] + 1) = "\n";
            v48 = CShaderLinkingGraphBuilder::AppendNode(
                    (unsigned int)v84,
                    10,
                    (unsigned int)byte_18028123E,
                    (_DWORD)v34,
                    (__int64)"AlphaMultiply",
                    (__int64)v90);
            v30 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x4F5u, 0LL);
              goto LABEL_35;
            }
          }
          if ( !(_BYTE)v88 && *(_DWORD *)(a2 + 128) != -1 )
          {
            v66 = AppendLights(0xAu, v84, (_DWORD *)(a2 + 128), 0xFFFFFFFFLL);
            v30 = v66;
            if ( v66 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x4FCu, 0LL);
              goto LABEL_35;
            }
          }
          if ( *(_BYTE *)(a2 + 158) && *(_BYTE *)(a2 + 157) )
          {
            v92[0] = (__int64)"NoOp";
            ConversionShader = ColorConversion::GetConversionShader(
                                 DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                                 0,
                                 8u,
                                 DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                                 (struct ColorConversion::Shader *)v92,
                                 0LL);
            v30 = ConversionShader;
            if ( ConversionShader < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, ConversionShader, 0x509u, 0LL);
              goto LABEL_35;
            }
            *(_QWORD *)&v90[0] = 1LL;
            *((_QWORD *)&v90[0] + 1) = "\n";
            v70 = CShaderLinkingGraphBuilder::AppendNode(
                    (unsigned int)v84,
                    10,
                    (unsigned int)byte_18028123E,
                    (_DWORD)v34,
                    v92[0],
                    (__int64)v90);
            v30 = v70;
            if ( v70 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x50Au, 0LL);
              goto LABEL_35;
            }
          }
          if ( *(_BYTE *)(a2 + 159)
            && (*(_QWORD *)&v90[0] = 1LL,
                *((_QWORD *)&v90[0] + 1) = "\n",
                v72 = CShaderLinkingGraphBuilder::AppendNode(
                        (unsigned int)v84,
                        10,
                        (unsigned int)byte_18028123E,
                        (_DWORD)v34,
                        (__int64)"BoostSDRLuminance",
                        (__int64)v90),
                v30 = v72,
                v72 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x511u, 0LL);
          }
          else
          {
            if ( !*(_BYTE *)(a2 + 152) )
              goto LABEL_33;
            v74 = *(_BYTE *)(a2 + 158) == 0;
            *((_QWORD *)&v90[0] + 1) = &v88;
            *(_QWORD *)&v90[0] = 1LL;
            v75 = v92;
            if ( !v74 )
              v75 = v91;
            strcpy((char *)v92, "MinBlend");
            strcpy((char *)v91, "MinBlend_HDR");
            LOWORD(v88) = 10;
            v76 = CShaderLinkingGraphBuilder::AppendNode(
                    (unsigned int)v84,
                    10,
                    (unsigned int)byte_18028123E,
                    (_DWORD)v34,
                    (__int64)v75,
                    (__int64)v90);
            v30 = v76;
            if ( v76 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x51Bu, 0LL);
            }
            else
            {
LABEL_33:
              v45 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)v84, v43, v83);
              v30 = v45;
              if ( v45 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x51Eu, 0LL);
            }
          }
        }
      }
    }
  }
LABEL_35:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Stop);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)v84);
  return v30;
}
