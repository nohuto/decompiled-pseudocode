/*
 * XREFs of AppendLights @ 0x18001BDE4
 * Callers:
 *     AppendShaderBody @ 0x180032E4C (AppendShaderBody.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033794 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     LinkLightShader @ 0x18001BFEC (LinkLightShader.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18001C24C (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800343C8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  struct ID3D11Module *v4; // rax
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // esi
  int v17; // eax
  unsigned __int16 v18; // si
  int NodeFromOutputArgument; // eax
  unsigned int v20; // ecx
  int v21; // r8d
  int v22; // eax
  unsigned int v23; // ecx
  unsigned __int16 v24; // r15
  int v25; // eax
  unsigned int v26; // ecx
  HRESULT v28; // eax
  unsigned int v29; // ecx
  int appended; // eax
  unsigned int v31; // ecx
  int v32; // r8d
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // r15d
  int v38; // eax
  int v39; // eax
  unsigned int v40; // ecx
  _WORD v41[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v42; // [rsp+40h] [rbp-20h] BYREF
  __int128 v43; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v44; // [rsp+90h] [rbp+30h] BYREF

  v44 = a1;
  v4 = ppModule;
  if ( !ppModule )
  {
    v28 = D3DLoadModule(&unk_1802831D0, 0xEE3DuLL, &ppModule);
    v11 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x3D3u, 0LL);
      return v11;
    }
    v4 = ppModule;
  }
  *(_QWORD *)&v42 = 0LL;
  CreateInstance = v4->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v42);
  v9 = ((__int64 (__fastcall *)(struct ID3D11Module *, const CHAR *, __int128 *))CreateInstance)(
         ppModule,
         byte_1802B2AA6,
         &v42);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3D9u, 0LL);
    goto LABEL_30;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v42 + 24LL))(v42, 1LL, 1LL);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3DFu, 0LL);
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, v42);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3E1u, 0LL);
LABEL_30:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v42);
    return v11;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v42);
  v16 = a2[20];
  v17 = v16 + 1;
  v18 = v16 | 0x600;
  a2[20] = v17;
  if ( a4 < 0 )
  {
    *((_QWORD *)&v42 + 1) = &v44;
    *(_QWORD *)&v42 = 1LL;
    v43 = v42;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (_DWORD)a2,
                 v18,
                 (unsigned int)byte_1802B2AA6,
                 (_DWORD)ppModule,
                 (__int64)"UnPremultiplyForLighting",
                 (__int64)&v43);
    v11 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, appended, 0x3EBu, 0LL);
    }
    else
    {
      *(_QWORD *)&v42 = 1LL;
      *((_QWORD *)&v42 + 1) = v41;
      v41[0] = v18;
      v43 = v42;
      v33 = LinkLightShader((_DWORD)a2, (_DWORD)a3, v32, (unsigned int)&v43, 0, (__int64)&v42);
      v11 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x3F8u, 0LL);
      }
      else
      {
        *((_QWORD *)&v43 + 1) = &v42;
        *(_QWORD *)&v43 = 2LL;
        WORD1(v42) = v44;
        v35 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a2,
                v44,
                (unsigned int)byte_1802B2AA6,
                (_DWORD)ppModule,
                (__int64)"PostLightingLib",
                (__int64)&v43);
        v11 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x3FFu, 0LL);
      }
    }
  }
  else
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v18, v44, (unsigned int)a4);
    v11 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, NodeFromOutputArgument, 0x405u, 0LL);
      return v11;
    }
    if ( *a3 == -1 )
    {
      v37 = a2[20];
      v43 = 0LL;
      v38 = v37 + 1;
      v24 = v37 | 0x600;
      a2[20] = v38;
      v39 = CShaderLinkingGraphBuilder::AppendNode(
              (_DWORD)a2,
              v24,
              (unsigned int)byte_1802B2AA6,
              (_DWORD)ppModule,
              (__int64)"NoLightAccumulator",
              (__int64)&v43);
      v11 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x41Au, 0LL);
        return v11;
      }
    }
    else
    {
      v41[0] = v44;
      *(_QWORD *)&v43 = 2LL;
      *((_QWORD *)&v43 + 1) = v41;
      v41[1] = v18;
      v22 = LinkLightShader((_DWORD)a2, (_DWORD)a3, v21, (unsigned int)&v43, 1, (__int64)&v42);
      v11 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x414u, 0LL);
        return v11;
      }
      v24 = v42;
    }
    *((_QWORD *)&v43 + 1) = &v42;
    *(_QWORD *)&v43 = 2LL;
    LOWORD(v42) = v24;
    WORD1(v42) = v18;
    v25 = CShaderLinkingGraphBuilder::AppendNode(
            (_DWORD)a2,
            v44,
            (unsigned int)byte_1802B2AA6,
            (_DWORD)ppModule,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v43);
    v11 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x421u, 0LL);
  }
  return v11;
}
