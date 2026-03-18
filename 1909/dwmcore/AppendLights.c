/*
 * XREFs of AppendLights @ 0x18000C33C
 * Callers:
 *     AppendShaderBody @ 0x1800315F4 (AppendShaderBody.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180031B14 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     LinkLightShader @ 0x18000C0DC (LinkLightShader.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18000C544 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180032580 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  struct ID3D11Module *v4; // rax
  int v5; // r14d
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // esi
  int v20; // eax
  unsigned __int16 v21; // si
  int NodeFromOutputArgument; // eax
  unsigned int v23; // ecx
  __int64 v24; // r8
  int v25; // eax
  unsigned int v26; // ecx
  unsigned __int16 v27; // r15
  int v28; // eax
  unsigned int v29; // ecx
  HRESULT v31; // eax
  unsigned int v32; // ecx
  int appended; // eax
  unsigned int v34; // ecx
  __int64 v35; // r8
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // r15d
  int v41; // eax
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  _WORD v47[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v48; // [rsp+40h] [rbp-20h] BYREF
  __int128 v49; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v50; // [rsp+90h] [rbp+30h] BYREF

  v50 = a1;
  v4 = ppModule;
  v5 = a4;
  if ( !ppModule )
  {
    v31 = D3DLoadModule(&unk_1802A1E70, 0xEE3DuLL, &ppModule);
    v11 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x3D3u, 0LL);
      return v11;
    }
    v4 = ppModule;
  }
  *(_QWORD *)&v48 = 0LL;
  CreateInstance = v4->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v48, a2, a3, a4);
  v9 = ((__int64 (__fastcall *)(struct ID3D11Module *, const CHAR *, __int128 *))CreateInstance)(
         ppModule,
         byte_18028123E,
         &v48);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3D9u, 0LL);
    goto LABEL_30;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v48 + 24LL))(v48, 1LL, 1LL);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3DFu, 0LL);
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, v48);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14, 0x3E1u, 0LL);
LABEL_30:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v48, v44, v45, v46);
    return v11;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v48, v15, v17, v18);
  v19 = a2[20];
  v20 = v19 + 1;
  v21 = v19 | 0x600;
  a2[20] = v20;
  if ( v5 < 0 )
  {
    *((_QWORD *)&v48 + 1) = &v50;
    *(_QWORD *)&v48 = 1LL;
    v49 = v48;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (_DWORD)a2,
                 v21,
                 (unsigned int)byte_18028123E,
                 (_DWORD)ppModule,
                 (__int64)"UnPremultiplyForLighting",
                 (__int64)&v49);
    v11 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, appended, 0x3EBu, 0LL);
    }
    else
    {
      *(_QWORD *)&v48 = 1LL;
      *((_QWORD *)&v48 + 1) = v47;
      v47[0] = v21;
      v49 = v48;
      v36 = LinkLightShader((__int64)a2, a3, v35, (unsigned __int64 *)&v49, 0, (unsigned __int16 *)&v48);
      v11 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x3F8u, 0LL);
      }
      else
      {
        *((_QWORD *)&v49 + 1) = &v48;
        *(_QWORD *)&v49 = 2LL;
        WORD1(v48) = v50;
        v38 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a2,
                v50,
                (unsigned int)byte_18028123E,
                (_DWORD)ppModule,
                (__int64)"PostLightingLib",
                (__int64)&v49);
        v11 = v38;
        if ( v38 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x3FFu, 0LL);
      }
    }
  }
  else
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v21, v50, (unsigned int)v5);
    v11 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, NodeFromOutputArgument, 0x405u, 0LL);
      return v11;
    }
    if ( *a3 == -1 )
    {
      v40 = a2[20];
      v49 = 0LL;
      v41 = v40 + 1;
      v27 = v40 | 0x600;
      a2[20] = v41;
      v42 = CShaderLinkingGraphBuilder::AppendNode(
              (_DWORD)a2,
              v27,
              (unsigned int)byte_18028123E,
              (_DWORD)ppModule,
              (__int64)"NoLightAccumulator",
              (__int64)&v49);
      v11 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x41Au, 0LL);
        return v11;
      }
    }
    else
    {
      v47[0] = v50;
      *(_QWORD *)&v49 = 2LL;
      *((_QWORD *)&v49 + 1) = v47;
      v47[1] = v21;
      v25 = LinkLightShader((__int64)a2, a3, v24, (unsigned __int64 *)&v49, 1, (unsigned __int16 *)&v48);
      v11 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x414u, 0LL);
        return v11;
      }
      v27 = v48;
    }
    *((_QWORD *)&v49 + 1) = &v48;
    *(_QWORD *)&v49 = 2LL;
    LOWORD(v48) = v27;
    WORD1(v48) = v21;
    v28 = CShaderLinkingGraphBuilder::AppendNode(
            (_DWORD)a2,
            v50,
            (unsigned int)byte_18028123E,
            (_DWORD)ppModule,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v49);
    v11 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x421u, 0LL);
  }
  return v11;
}
