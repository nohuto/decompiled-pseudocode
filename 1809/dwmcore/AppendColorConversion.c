/*
 * XREFs of AppendColorConversion @ 0x1800E2D7C
 * Callers:
 *     BuildSampler @ 0x1800E1FB8 (BuildSampler.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18022B044 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall AppendColorConversion(__int64 a1, __int64 a2, __int16 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __int16 v6; // r10
  int appended; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  __int16 v15; // [rsp+60h] [rbp+20h] BYREF

  v15 = a3;
  v5 = 0;
  v6 = a3;
  if ( *(_DWORD *)(a4 + 8) > 1u )
  {
    *(_QWORD *)&v14 = 1LL;
    *((_QWORD *)&v14 + 1) = &v15;
    appended = CShaderLinkingGraphBuilder::AppendNode(a1, a3, (__int64)psz, a2, *(_QWORD *)a4, &v14);
    v5 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, 0x2C7u);
      return v5;
    }
    v6 = v15;
  }
  if ( a5 )
  {
    *(_QWORD *)&v14 = 1LL;
    *((_QWORD *)&v14 + 1) = &v15;
    v12 = CShaderLinkingGraphBuilder::AppendNode(a1, v6, (__int64)psz, a2, (__int64)"BoostSDRLuminance", &v14);
    v5 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2CCu);
  }
  return v5;
}
