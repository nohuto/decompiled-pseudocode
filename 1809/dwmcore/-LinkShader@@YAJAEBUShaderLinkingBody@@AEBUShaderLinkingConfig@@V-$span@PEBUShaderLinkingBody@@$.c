/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800C5F60 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D8B40 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     AppendLights @ 0x1800215DC (AppendLights.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@$0A@@01@0@Z @ 0x1800713A0 (--9details@gsl@@YA_NV-$span_iterator@V-$span@PEBUShaderLinkingBody@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     InitializeShaderLinkingInput @ 0x1800DA3D8 (InitializeShaderLinkingInput.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800E296C (-HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z.c)
 *     DiscoverSamplers @ 0x1800E29E8 (DiscoverSamplers.c)
 *     LoadShaderBody @ 0x1800E2B0C (LoadShaderBody.c)
 *     HasWhiteNoise @ 0x1800E2FD4 (HasWhiteNoise.c)
 *     UseFragmentsModuleNoRef @ 0x1800E315C (UseFragmentsModuleNoRef.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800E32D0 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800E333C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800E3530 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     GetExpectedVertexShaderDesc @ 0x1800E4164 (GetExpectedVertexShaderDesc.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x180187D50 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, struct ID3D10Blob **a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r13
  char v14; // r13
  __int64 ExpectedVertexShaderDesc; // rax
  __int64 *v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // rcx
  __int64 *v24; // r15
  gsl::details *v25; // rcx
  int v26; // r13d
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v31; // rdx
  __int64 v32; // rcx
  char v33; // di
  int v34; // eax
  __int64 v35; // rcx
  int v37; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned int v40; // eax
  _QWORD *v41; // rax
  __int64 v42; // r15
  int ShaderBody; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  int appended; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  int ConversionShader; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  bool v63; // zf
  char *v64; // rax
  int v65; // eax
  __int64 v66; // rcx
  struct ColorConversion::Shader *v67; // [rsp+20h] [rbp-E0h]
  struct ColorConversion::Shader *v68; // [rsp+20h] [rbp-E0h]
  char v69; // [rsp+40h] [rbp-C0h]
  __int16 v70; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v71; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v73; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v74; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v75[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 i; // [rsp+80h] [rbp-80h] BYREF
  __int128 j; // [rsp+90h] [rbp-70h] BYREF
  struct ID3D10Blob **v78; // [rsp+A0h] [rbp-60h]
  struct ID3D11Linker *v79[12]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v80; // [rsp+110h] [rbp+10h]
  __int128 v81; // [rsp+120h] [rbp+20h]
  __int128 v82; // [rsp+130h] [rbp+30h]
  __int128 v83; // [rsp+140h] [rbp+40h]
  __int128 v84; // [rsp+150h] [rbp+50h]
  const char *v85; // [rsp+160h] [rbp+60h] BYREF
  __int128 v86; // [rsp+170h] [rbp+70h]
  __int128 v87; // [rsp+180h] [rbp+80h]
  __int128 v88; // [rsp+190h] [rbp+90h] BYREF
  __int128 v89; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v90; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v91; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v92; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v93; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v94; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v95; // [rsp+200h] [rbp+100h] BYREF
  __int128 v96; // [rsp+210h] [rbp+110h] BYREF
  __int128 v97; // [rsp+220h] [rbp+120h] BYREF
  __int128 v98; // [rsp+230h] [rbp+130h] BYREF
  __int128 v99; // [rsp+240h] [rbp+140h] BYREF
  __int128 v100; // [rsp+250h] [rbp+150h] BYREF
  __int128 v101; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v102[32]; // [rsp+270h] [rbp+170h] BYREF
  char v103[16]; // [rsp+290h] [rbp+190h] BYREF
  char v104[16]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v105; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int16 v106; // [rsp+2B4h] [rbp+1B4h]
  _BYTE v107[12]; // [rsp+2B8h] [rbp+1B8h] BYREF
  char v108; // [rsp+2C4h] [rbp+1C4h]
  char v109; // [rsp+2C5h] [rbp+1C5h]

  v78 = a5;
  v73 = a4;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)v79);
  v72 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Start);
  memset_0(v102, 0, sizeof(v102));
  v8 = *(_DWORD *)(a1 + 48);
  v75[1] = (__int64)v102;
  v9 = 0;
  *((_QWORD *)&v74 + 1) = *a3;
  *(_QWORD *)&v74 = a3;
  v88 = v74;
  v75[0] = 4LL;
  for ( i = (unsigned __int64)a3;
        ;
        gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i) )
  {
    v89 = i;
    if ( !gsl::details::operator!=(&v89, &v88) )
      break;
    v39 = (_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&i);
    v8 += *(_DWORD *)(*v39 + 48LL);
    v40 = DiscoverSamplers(*v39, a2, v75);
    if ( v9 <= v40 )
      v9 = v40;
  }
  v71 = v8;
  v10 = DiscoverSamplers(a1, a2, v75);
  if ( v9 <= v10 )
    v9 = v10;
  if ( *(_BYTE *)(a2 + 158) && v9 <= 2 )
    v9 = 2;
  v11 = 0;
  if ( v9 )
  {
    v12 = 0LL;
    v13 = v9;
    do
    {
      if ( *(_BYTE *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v75, v12) + 1) )
        *(_DWORD *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v75, v12) + 4) = v11++;
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  v14 = HasWhiteNoise(a1);
  if ( !v14 )
  {
    *((_QWORD *)&v74 + 1) = *a3;
    *(_QWORD *)&v74 = a3;
    v90 = v74;
    for ( j = (unsigned __int64)a3;
          ;
          gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&j) )
    {
      v91 = j;
      if ( !gsl::details::operator!=(&v91, &v90) )
        break;
      v41 = (_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&j);
      if ( (unsigned __int8)HasWhiteNoise(*v41) )
      {
        v14 = 1;
        break;
      }
    }
  }
  v92 = *(_OWORD *)a3;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc(a1, (unsigned int)&v92, a2, v9, v14);
  v16 = v73;
  *v73 = ExpectedVertexShaderDesc;
  LOBYTE(v17) = *(_BYTE *)(a1 + 32);
  v18 = InitializeShaderLinkingInput(v79, v17, (__int64)v16, v9);
  v21 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x4BBu);
  }
  else
  {
    LOBYTE(v20) = *(_BYTE *)(a2 + 158);
    v22 = UseFragmentsModuleNoRef(v79, v71, v20, &v73);
    v21 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x4BCu);
    }
    else
    {
      v24 = v73;
      if ( v9 > 2 || v14 )
      {
        *(_QWORD *)&v80 = 3LL;
        v106 = 258;
        v105 = 16843008;
        *((_QWORD *)&v80 + 1) = &v105;
        v93 = v80;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     (__int64)v79,
                     v14 != 0 ? 12 : 259,
                     (__int64)psz,
                     (__int64)v73,
                     (__int64)"DecodeTexcoord3",
                     &v93);
        v21 = appended;
        if ( appended < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, appended, 0x4C8u);
          goto LABEL_36;
        }
      }
      if ( (unsigned __int8)CShaderLinkingGraphBuilder::HasNode(v79, 1LL) )
      {
        if ( *(_DWORD *)(a2 + 144) > 1u )
        {
          *(_QWORD *)&v81 = 1LL;
          *((_QWORD *)&v81 + 1) = &v70;
          v49 = *(_QWORD *)(a2 + 136);
          v94 = v81;
          v70 = 1;
          v50 = CShaderLinkingGraphBuilder::AppendNode((__int64)v79, 1, (__int64)psz, (__int64)v24, v49, &v94);
          v21 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v25, 0LL, 0, v50, 0x4D4u);
            goto LABEL_36;
          }
        }
      }
      v26 = 0;
      *(_QWORD *)&v74 = v9;
      v27 = 0LL;
      v69 = 0;
      *((_QWORD *)&v74 + 1) = v102;
      if ( *(_DWORD *)a3 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v27 >= (__int64)*a3 )
          {
            gsl::details::terminate(v25);
            JUMPOUT(0x1800E2963LL);
          }
          _mm_lfence();
          v42 = *(_QWORD *)(a3[1] + 8 * v27);
          qmemcpy(v107, "BodyFragment", sizeof(v107));
          v70 = v27 | 0x500;
          v108 = v27 + 48;
          v109 = 0;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v72);
          ShaderBody = LoadShaderBody((unsigned int)v79, v42, a2, (unsigned int)&v74, v26, (__int64)v107, (__int64)&v72);
          v21 = ShaderBody;
          if ( ShaderBody < 0 )
            break;
          v68 = *(struct ColorConversion::Shader **)(v42 + 40);
          v95 = *(_OWORD *)v42;
          v45 = CShaderLinkingGraphBuilder::AppendNode((__int64)v79, v70, (__int64)v107, v72, (__int64)v68, &v95);
          v21 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v25, 0LL, 0, v45, 0x4E6u);
            goto LABEL_36;
          }
          v26 += *(_DWORD *)(v42 + 48);
          if ( *(_BYTE *)(v42 + 52) )
          {
            v46 = AppendLights(v70, v79, (_DWORD *)(a2 + 128), *(_DWORD *)v42);
            v21 = v46;
            if ( v46 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v25, 0LL, 0, v46, 0x4EEu);
              goto LABEL_36;
            }
            v69 = 1;
          }
          v27 = (unsigned int)(v27 + 1);
          if ( (unsigned int)v27 >= *(_DWORD *)a3 )
          {
            v24 = v73;
            goto LABEL_23;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, ShaderBody, 0x4E5u);
      }
      else
      {
LABEL_23:
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v72);
        v28 = LoadShaderBody((unsigned int)v79, a1, a2, (unsigned int)&v74, v26, (__int64)psz, (__int64)&v72);
        v21 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x4F5u);
        }
        else
        {
          v67 = *(struct ColorConversion::Shader **)(a1 + 40);
          v96 = *(_OWORD *)a1;
          v30 = CShaderLinkingGraphBuilder::AppendNode((__int64)v79, 10, (__int64)psz, v72, (__int64)v67, &v96);
          v21 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v30, 0x4F7u);
          }
          else
          {
            if ( *(_BYTE *)(a1 + 52) )
            {
              v51 = AppendLights(0xAu, v79, (_DWORD *)(a2 + 128), *(_DWORD *)a1);
              v21 = v51;
              if ( v51 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x4FDu);
                goto LABEL_36;
              }
              v33 = 1;
            }
            else
            {
              v33 = v69;
            }
            if ( *(_BYTE *)(a2 + 154) )
            {
              *(_QWORD *)&v82 = 5LL;
              *((_QWORD *)&v82 + 1) = &unk_18029BD10;
              v97 = v82;
              v53 = CShaderLinkingGraphBuilder::AppendNode(
                      (__int64)v79,
                      10,
                      (__int64)psz,
                      (__int64)v24,
                      (__int64)"ApplyPSClipPlanes",
                      &v97);
              v21 = v53;
              if ( v53 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x511u);
                goto LABEL_36;
              }
            }
            if ( *(_BYTE *)(a2 + 157) )
            {
              *(_QWORD *)&v83 = 2LL;
              *((_QWORD *)&v83 + 1) = "\n";
              v98 = v83;
              v37 = CShaderLinkingGraphBuilder::AppendNode(
                      (__int64)v79,
                      10,
                      (__int64)psz,
                      (__int64)v24,
                      (__int64)"AlphaMultiply",
                      &v98);
              v21 = v37;
              if ( v37 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x51Fu);
                goto LABEL_36;
              }
            }
            if ( !v33 && *(_DWORD *)(a2 + 128) != -1 )
            {
              v55 = AppendLights(0xAu, v79, (_DWORD *)(a2 + 128), -1);
              v21 = v55;
              if ( v55 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x526u);
                goto LABEL_36;
              }
            }
            if ( *(_BYTE *)(a2 + 159) && *(_BYTE *)(a2 + 160) )
            {
              v85 = "NoOp";
              ConversionShader = ColorConversion::GetConversionShader(
                                   DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                                   0,
                                   8u,
                                   DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                                   (struct ColorConversion::Shader *)&v85,
                                   0LL);
              v21 = ConversionShader;
              if ( ConversionShader < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, ConversionShader, 0x533u);
                goto LABEL_36;
              }
              *(_QWORD *)&v84 = 1LL;
              *((_QWORD *)&v84 + 1) = "\n";
              v99 = v84;
              v59 = CShaderLinkingGraphBuilder::AppendNode(
                      (__int64)v79,
                      10,
                      (__int64)psz,
                      (__int64)v24,
                      (__int64)v85,
                      &v99);
              v21 = v59;
              if ( v59 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x534u);
                goto LABEL_36;
              }
            }
            if ( *(_BYTE *)(a2 + 152)
              && (*(_QWORD *)&v87 = 1LL,
                  *((_QWORD *)&v87 + 1) = "\n",
                  v100 = v87,
                  v61 = CShaderLinkingGraphBuilder::AppendNode(
                          (__int64)v79,
                          10,
                          (__int64)psz,
                          (__int64)v24,
                          (__int64)"BoostSDRLuminance",
                          &v100),
                  v21 = v61,
                  v61 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x53Bu);
            }
            else
            {
              if ( !*(_BYTE *)(a2 + 153) )
                goto LABEL_34;
              v63 = *(_BYTE *)(a2 + 159) == 0;
              *((_QWORD *)&v86 + 1) = &v71;
              v64 = v103;
              *(_QWORD *)&v86 = 1LL;
              if ( !v63 )
                v64 = v104;
              strcpy(v103, "MinBlend");
              strcpy(v104, "MinBlend_HDR");
              LOWORD(v71) = 10;
              v101 = v86;
              v65 = CShaderLinkingGraphBuilder::AppendNode(
                      (__int64)v79,
                      10,
                      (__int64)psz,
                      (__int64)v24,
                      (__int64)v64,
                      &v101);
              v21 = v65;
              if ( v65 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x545u);
              }
              else
              {
LABEL_34:
                v34 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)v79, v31, v78);
                v21 = v34;
                if ( v34 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x548u);
              }
            }
          }
        }
      }
    }
  }
LABEL_36:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Stop);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v72);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)v79);
  return v21;
}
