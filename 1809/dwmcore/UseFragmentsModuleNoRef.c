/*
 * XREFs of UseFragmentsModuleNoRef @ 0x1800E315C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800E30E8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UseFragmentsModuleNoRef(__int64 a1, unsigned int a2, char a3, struct ID3D11Module **a4)
{
  _QWORD *v5; // r14
  int FragmentsModuleNoRef; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct ID3D11Module *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64); // rax
  int v15; // eax
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+20h] [rbp-20h]
  struct ID3D11Module *v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF

  v22 = 0LL;
  v5 = (_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v21);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v20 = 32;
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v22);
  v11 = v21;
  v12 = ((__int64 (__fastcall *)(struct ID3D11Module *, const CHAR *, __int64 *))v21->lpVtbl->CreateInstance)(
          v21,
          psz,
          &v22);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x21u);
    goto LABEL_10;
  }
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v22 + 40LL);
  if ( a3 )
  {
    v18 = v14(v22, 16LL, 0LL, 1LL);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x26u);
      goto LABEL_10;
    }
    FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v22 + 56LL))(
                             v22,
                             0LL,
                             0LL,
                             1LL);
    v10 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      v20 = 39;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, FragmentsModuleNoRef, v20);
      goto LABEL_10;
    }
  }
  else
  {
    v15 = v14(v22, 0LL, 0LL, 4LL);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2Cu);
      goto LABEL_10;
    }
    FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v22 + 56LL))(
                             v22,
                             0LL,
                             0LL,
                             4LL);
    v10 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      v20 = 45;
      goto LABEL_22;
    }
  }
  FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
                           v22,
                           0LL,
                           0LL,
                           a2);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v20 = 55;
    goto LABEL_22;
  }
  FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 2LL, 2LL);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v20 = 61;
    goto LABEL_22;
  }
  FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 3LL, 3LL);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v20 = 65;
    goto LABEL_22;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(*v5, v22);
  *a4 = v11;
LABEL_10:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v22);
  return v10;
}
