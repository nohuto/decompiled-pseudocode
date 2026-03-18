/*
 * XREFs of AppendShaderBody @ 0x1800315F4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180031B14 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     AppendLights @ 0x18000C33C (AppendLights.c)
 *     PerformSample @ 0x1800317BC (PerformSample.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180032580 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800331F4 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall AppendShaderBody(
        _DWORD *a1,
        int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        _BYTE *a8)
{
  unsigned __int16 v10; // di
  __int64 v11; // rax
  int appended; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  __int16 v16; // ax
  unsigned __int8 v17; // bp
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  __int128 v25; // [rsp+30h] [rbp-28h] BYREF

  v10 = a2;
  v11 = *((_QWORD *)a3 + 5);
  v25 = *(_OWORD *)a3;
  appended = CShaderLinkingGraphBuilder::AppendNode((_DWORD)a1, a2, a5, a6, v11, (__int64)&v25);
  v15 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, 0x436u, 0LL);
  }
  else
  {
    v16 = *((_WORD *)a3 + 26);
    v17 = v16;
    if ( v16 == 11 )
    {
      v19 = AppendLights(v10, a1, (_DWORD *)(a4 + 128), *a3);
      v15 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x43Bu, 0LL);
      else
        *a8 = 1;
    }
    else if ( (v16 & 0xFF00) == 0x100 )
    {
      v21 = CShaderLinkingGraphBuilder::SwizzleNode(a1, v10);
      v15 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x444u, 0LL);
      }
      else
      {
        v23 = PerformSample((_DWORD)a1, a4, v17, v10, a7);
        v15 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x44Bu, 0LL);
      }
    }
  }
  return v15;
}
