/*
 * XREFs of AppendLights @ 0x1800215DC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     LinkLightShader @ 0x1800213E8 (LinkLightShader.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x1800217CC (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // esi
  int v15; // eax
  unsigned __int16 v16; // si
  int NodeFromOutputArgument; // eax
  unsigned int v18; // ecx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  unsigned __int16 v22; // r15
  int v23; // eax
  unsigned int v24; // ecx
  HRESULT v26; // eax
  unsigned int v27; // ecx
  int appended; // eax
  unsigned int v29; // ecx
  __int64 v30; // r8
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // r15d
  int v36; // eax
  int v37; // eax
  unsigned int v38; // ecx
  _WORD v39[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v40; // [rsp+40h] [rbp-20h] BYREF
  __int128 v41; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v42; // [rsp+90h] [rbp+30h] BYREF

  v42 = a1;
  if ( !ppModule )
  {
    v26 = D3DLoadModule(&unk_180281770, 0xEE3DuLL, &ppModule);
    v9 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x424u);
      return v9;
    }
  }
  *(_QWORD *)&v40 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v40);
  v7 = ((__int64 (__fastcall *)(struct ID3D11Module *, const CHAR *, __int128 *))ppModule->lpVtbl->CreateInstance)(
         ppModule,
         psz,
         &v40);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x42Au);
    goto LABEL_29;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v40 + 24LL))(v40, 1LL, 1LL);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x430u);
    goto LABEL_29;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, v40);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x432u);
LABEL_29:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v40);
    return v9;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v40);
  v14 = a2[20];
  v15 = v14 + 1;
  v16 = v14 | 0x600;
  a2[20] = v15;
  if ( a4 < 0 )
  {
    *((_QWORD *)&v40 + 1) = &v42;
    *(_QWORD *)&v40 = 1LL;
    v41 = v40;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (_DWORD)a2,
                 v16,
                 (unsigned int)psz,
                 (_DWORD)ppModule,
                 (__int64)"UnPremultiplyForLighting",
                 (__int64)&v41);
    v9 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, appended, 0x43Cu);
    }
    else
    {
      *(_QWORD *)&v40 = 1LL;
      *((_QWORD *)&v40 + 1) = v39;
      v39[0] = v16;
      v41 = v40;
      v31 = LinkLightShader((unsigned __int64)a2, a3, v30, (__int64 *)&v41, 0, (__int16 *)&v40);
      v9 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x449u);
      }
      else
      {
        *((_QWORD *)&v41 + 1) = &v40;
        *(_QWORD *)&v41 = 2LL;
        WORD1(v40) = v42;
        v33 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a2,
                v42,
                (unsigned int)psz,
                (_DWORD)ppModule,
                (__int64)"PostLightingLib",
                (__int64)&v41);
        v9 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x450u);
      }
    }
  }
  else
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v16, v42, (unsigned int)a4);
    v9 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, NodeFromOutputArgument, 0x456u);
      return v9;
    }
    if ( *a3 == -1 )
    {
      v35 = a2[20];
      v41 = 0LL;
      v36 = v35 + 1;
      v22 = v35 | 0x600;
      a2[20] = v36;
      v37 = CShaderLinkingGraphBuilder::AppendNode(
              (_DWORD)a2,
              v22,
              (unsigned int)psz,
              (_DWORD)ppModule,
              (__int64)"NoLightAccumulator",
              (__int64)&v41);
      v9 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x46Bu);
        return v9;
      }
    }
    else
    {
      v39[0] = v42;
      *(_QWORD *)&v41 = 2LL;
      *((_QWORD *)&v41 + 1) = v39;
      v39[1] = v16;
      v20 = LinkLightShader((unsigned __int64)a2, a3, v19, (__int64 *)&v41, 1, (__int16 *)&v40);
      v9 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x465u);
        return v9;
      }
      v22 = v40;
    }
    *((_QWORD *)&v41 + 1) = &v40;
    *(_QWORD *)&v41 = 2LL;
    LOWORD(v40) = v22;
    WORD1(v40) = v16;
    v23 = CShaderLinkingGraphBuilder::AppendNode(
            (_DWORD)a2,
            v42,
            (unsigned int)psz,
            (_DWORD)ppModule,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v41);
    v9 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x472u);
  }
  return v9;
}
