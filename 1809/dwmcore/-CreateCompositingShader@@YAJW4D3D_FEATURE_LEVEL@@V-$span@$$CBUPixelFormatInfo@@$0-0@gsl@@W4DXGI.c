/*
 * XREFs of ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18022B044
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801FC3FC (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x180020174 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800DCB08 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     AppendColorConversion @ 0x1800E2D7C (AppendColorConversion.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800E30E8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800E32D0 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800E333C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800E3530 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x1801877D4 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x180187D50 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall CreateCompositingShader(int a1, _QWORD *a2, enum DXGI_COLOR_SPACE_TYPE a3, struct ID3D10Blob **a4)
{
  enum DXGI_COLOR_SPACE_TYPE v5; // r12d
  gsl::details *v7; // rcx
  bool v8; // di
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int FragmentsModuleNoRef; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int16 v23; // si
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int appended; // eax
  gsl::details *v29; // rcx
  __int64 v30; // rdx
  char v31; // bl
  int ColorChannelDepth; // eax
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // eax
  __int64 v36; // rcx
  int ConversionShader; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  bool v52[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v53; // [rsp+34h] [rbp-CCh] BYREF
  enum DXGI_COLOR_SPACE_TYPE v54; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v56[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v57; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v58; // [rsp+60h] [rbp-A0h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v59[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v60; // [rsp+80h] [rbp-80h] BYREF
  struct ID3D10Blob **v61; // [rsp+90h] [rbp-70h]
  __int128 v62; // [rsp+A0h] [rbp-60h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v64[13]; // [rsp+110h] [rbp+10h] BYREF
  char v65; // [rsp+11Dh] [rbp+1Dh]
  char v66; // [rsp+11Eh] [rbp+1Eh]

  v55 = 0LL;
  v61 = a4;
  v5 = a3;
  v54 = a3;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v8 = a1 >= 37632;
  *(_QWORD *)&v57 = *a2 + 1LL;
  if ( (__int64)v57 < 0 )
  {
    gsl::details::terminate(v7);
    __debugbreak();
  }
  *((_QWORD *)&v57 + 1) = &unk_1802473D0;
  v60 = v57;
  v9 = CShaderLinkingGraphBuilder::Initialize((unsigned __int64)ppLinker, a1 >= 37632, (unsigned __int64 *)&v60);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x569u);
  }
  else
  {
    LOBYTE(v10) = v8;
    FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(v10, (struct ID3D11Module **)v59);
    v11 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, FragmentsModuleNoRef, 0x56Cu);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v55);
      v14 = *(_QWORD *)v59;
      v15 = (*(__int64 (__fastcall **)(_QWORD, const CHAR *, __int64 *))(**(_QWORD **)v59 + 24LL))(
              *(_QWORD *)v59,
              psz,
              &v55);
      v11 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x56Du);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v55 + 24LL))(v55, 2LL, 2LL);
        v11 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x573u);
        }
        else
        {
          v19 = ((__int64 (__fastcall *)(struct ID3D11Linker *, __int64))ppLinker[0]->lpVtbl->UseLibrary)(
                  ppLinker[0],
                  v55);
          v11 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v19, 0x575u);
          }
          else
          {
            v22 = 0;
            if ( *(_DWORD *)a2 )
            {
              while ( 1 )
              {
                v23 = v22 | 0x100;
                v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55 + 40LL))(
                        v55,
                        (unsigned int)v22,
                        (unsigned int)v22,
                        1LL);
                v11 = v24;
                if ( v24 < 0 )
                  break;
                v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55 + 56LL))(
                        v55,
                        (unsigned int)v22,
                        (unsigned int)v22,
                        1LL);
                v11 = v26;
                if ( v26 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x57Du);
                  goto LABEL_45;
                }
                v65 = v22 + 48;
                *((_QWORD *)&v62 + 1) = &v53;
                qmemcpy(v64, "SampleTexture", sizeof(v64));
                *(_QWORD *)&v62 = 1LL;
                v53 = v22 | 0x100;
                v66 = 0;
                v58 = v62;
                appended = CShaderLinkingGraphBuilder::AppendNode(
                             (__int64)ppLinker,
                             v23,
                             (__int64)psz,
                             v14,
                             (__int64)v64,
                             &v58);
                v11 = appended;
                if ( appended < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v29, 0LL, 0, appended, 0x583u);
                  goto LABEL_45;
                }
                if ( v22 < 0 || v22 >= *a2 )
                {
                  gsl::details::terminate(v29);
                  __debugbreak();
                }
                v30 = a2[1];
                DWORD2(v57) = 0;
                *(_QWORD *)&v58 = v30;
                *(_QWORD *)&v57 = "NoOp";
                v31 = *(_DWORD *)(v30 + 12LL * v22 + 4) == 3;
                ColorChannelDepth = GetColorChannelDepth(*(_DWORD *)(v30 + 12LL * v22));
                v59[0] = *(enum DXGI_COLOR_SPACE_TYPE *)(v33 + 12LL * v22 + 8);
                if ( (int)ColorConversion::GetConversionShader(
                            v59[0],
                            v31,
                            ColorChannelDepth,
                            v5,
                            (struct ColorConversion::Shader *)&v57,
                            v52) < 0 )
                {
                  if ( v54 == DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                    v5 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
                  ConversionShader = ColorConversion::GetConversionShader(
                                       v59[0],
                                       v31,
                                       v34,
                                       v5,
                                       (struct ColorConversion::Shader *)&v57,
                                       v52);
                  v11 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, ConversionShader, 0x599u);
                    goto LABEL_45;
                  }
                  *(_OWORD *)v59 = v57;
                  v39 = AppendColorConversion((__int64)ppLinker, v14, v23, (__int64)v59, v52[0]);
                  v11 = v39;
                  if ( v39 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x59Au);
                    goto LABEL_45;
                  }
                  v41 = ColorConversion::GetConversionShader(
                          v5,
                          *(_DWORD *)(v58 + 12LL * v22 + 4) == 3,
                          v5 != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 ? 16 : 8,
                          v54,
                          (struct ColorConversion::Shader *)&v57,
                          v52);
                  v11 = v41;
                  if ( v41 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x5A0u);
                    goto LABEL_45;
                  }
                  v58 = v57;
                  v43 = AppendColorConversion((__int64)ppLinker, v14, v23, (__int64)&v58, v52[0]);
                  v11 = v43;
                  if ( v43 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x5A1u);
                    goto LABEL_45;
                  }
                  v5 = v54;
                }
                else
                {
                  v58 = v57;
                  v35 = AppendColorConversion((__int64)ppLinker, v14, v23, (__int64)&v58, v52[0]);
                  v11 = v35;
                  if ( v35 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x58Fu);
                    goto LABEL_45;
                  }
                }
                if ( v22 )
                {
                  *(_QWORD *)&v60 = 2LL;
                  v56[0] = 10;
                  *((_QWORD *)&v60 + 1) = v56;
                  v56[1] = v22 | 0x100;
                  v58 = v60;
                  v47 = CShaderLinkingGraphBuilder::AppendNode(
                          (__int64)ppLinker,
                          10,
                          (__int64)psz,
                          v14,
                          (__int64)"CompositeSourceOver",
                          &v58);
                  v11 = v47;
                  if ( v47 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x5ADu);
                    goto LABEL_45;
                  }
                }
                else
                {
                  v45 = CShaderLinkingGraphBuilder::CopyNode(ppLinker, 10, v23);
                  v11 = v45;
                  if ( v45 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x5A7u);
                    goto LABEL_45;
                  }
                }
                if ( (unsigned int)++v22 >= *(_DWORD *)a2 )
                  goto LABEL_29;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x57Cu);
            }
            else
            {
LABEL_29:
              v49 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v20, v61);
              v11 = v49;
              if ( v49 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x5B1u);
            }
          }
        }
      }
    }
  }
LABEL_45:
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v55);
  return v11;
}
