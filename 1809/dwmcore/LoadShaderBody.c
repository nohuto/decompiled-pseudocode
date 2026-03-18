/*
 * XREFs of LoadShaderBody @ 0x1800E2B0C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     BuildSampler @ 0x1800E1FB8 (BuildSampler.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800E30E8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadShaderBody(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6,
        struct ID3D11Module **a7)
{
  _QWORD *v8; // r14
  int FragmentsModuleNoRef; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct ID3D11Module *v14; // rdi
  HRESULT v15; // eax
  __int64 v16; // rcx
  struct ID3D11Module *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  struct ID3D11Module *v25; // rcx
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // [rsp+20h] [rbp-20h]
  struct ID3D11Module *v33; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D11Module *ppModule; // [rsp+38h] [rbp-8h] BYREF
  _QWORD *v35; // [rsp+70h] [rbp+30h]

  v35 = (_QWORD *)a1;
  ppModule = 0LL;
  v8 = (_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v33);
  v13 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, FragmentsModuleNoRef, 0x366u);
    goto LABEL_15;
  }
  v14 = v33;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    if ( ppModule != v33 )
    {
      if ( v33 )
        ((void (__fastcall *)(struct ID3D11Module *))v33->lpVtbl->AddRef)(v33);
      v33 = ppModule;
      ppModule = v14;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    }
    goto LABEL_7;
  }
  v33 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&ppModule);
  v15 = D3DLoadModule(*(LPCVOID *)(a2 + 24), *(_QWORD *)(a2 + 16), &ppModule);
  v13 = v15;
  if ( v15 < 0 )
  {
    v32 = 877;
    goto LABEL_23;
  }
  v17 = ppModule;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v33);
  v18 = ((__int64 (__fastcall *)(struct ID3D11Module *, __int64, struct ID3D11Module **))v17->lpVtbl->CreateInstance)(
          v17,
          a6,
          &v33);
  v13 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x36Eu);
LABEL_24:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v33);
    goto LABEL_15;
  }
  ((void (__fastcall *)(struct ID3D11Module *, _QWORD, _QWORD, _QWORD))v33->lpVtbl->CreateInstance)(v33, 0LL, 0LL, a5);
  ((void (__fastcall *)(struct ID3D11Module *, __int64, __int64))v33->lpVtbl->CreateInstance)(v33, 1LL, 1LL);
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Module *))(*(_QWORD *)*v8 + 32LL))(*v8, v33);
  v13 = v15;
  if ( v15 < 0 )
  {
    v32 = 899;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v32);
    goto LABEL_24;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v33);
LABEL_7:
  v20 = 0LL;
  for ( LODWORD(v33) = 0; (unsigned int)v20 < *(_DWORD *)a4; v20 = (unsigned int)(v20 + 1) )
  {
    if ( *(_BYTE *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a4, (unsigned int)v20)
      && !*((_BYTE *)&v33 + v20) )
    {
      v21 = 32LL * (unsigned int)v20;
      if ( *(_BYTE *)(v21 + a3 + 30) )
      {
        v27 = *(unsigned int *)(v21 + a3 + 20);
        v28 = v27;
        if ( *(_BYTE *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a4, (unsigned int)v27) )
        {
          if ( !*((_BYTE *)&v33 + v27) )
          {
            v29 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a4, (unsigned int)v27);
            v30 = BuildSampler(v35, a3, v27, v29, (__int64)v14);
            v13 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x3A0u);
              goto LABEL_15;
            }
            *((_BYTE *)&v33 + v28) = 1;
          }
        }
      }
      v22 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a4, (unsigned int)v20);
      v23 = BuildSampler(v35, a3, v20, v22, (__int64)v14);
      v13 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x3A5u);
        goto LABEL_15;
      }
      *((_BYTE *)&v33 + v20) = 1;
    }
  }
  v25 = ppModule;
  ppModule = 0LL;
  *a7 = v25;
LABEL_15:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&ppModule);
  return v13;
}
