/*
 * XREFs of PrepareSamplers @ 0x180033D34
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033794 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180032DD8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     PopulateSamplerArguments @ 0x180032F1C (PopulateSamplerArguments.c)
 *     PerformSample @ 0x18003343C (PerformSample.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrepareSamplers(__int64 a1, __int64 a2, _QWORD *a3)
{
  int FragmentsModuleNoRef; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rsi
  void *v10; // r15
  __int64 v11; // rax
  _BYTE *v12; // r9
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  void *v18; // [rsp+60h] [rbp+8h] BYREF

  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(
                           *(_BYTE *)(a1 + 84),
                           (struct ID3D11Module **)&v18);
  v8 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, FragmentsModuleNoRef, 0x309u, 0LL);
    return v8;
  }
  v9 = 0LL;
  if ( *(_DWORD *)a3 )
  {
    v10 = v18;
    do
    {
      if ( (unsigned __int64)(unsigned int)v9 >= *a3 )
      {
LABEL_18:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v11 = a3[1];
      v12 = (_BYTE *)(v11 + 8 * v9);
      if ( *v12 )
        goto LABEL_6;
      if ( (unsigned __int64)(unsigned int)v9 >= *a3 )
        goto LABEL_18;
      if ( *(_BYTE *)(v11 + 8 * v9 + 2) )
      {
LABEL_6:
        if ( (unsigned __int64)(unsigned int)v9 >= *a3 )
          goto LABEL_18;
        v13 = PopulateSamplerArguments(a1, a2, v9, v12, (__int64)v10);
        v8 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x310u, 0LL);
          return v8;
        }
        if ( (unsigned __int64)(unsigned int)v9 >= *a3 )
          goto LABEL_18;
        if ( *(_BYTE *)(a3[1] + 8 * v9 + 1) )
        {
          v15 = PerformSample(a1, a2, v9, (unsigned __int16)v9 | 0x100u, (unsigned __int16)v9 | 0x200u, v10);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x31Au, 0LL);
            return v8;
          }
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(_DWORD *)a3 );
  }
  return v8;
}
