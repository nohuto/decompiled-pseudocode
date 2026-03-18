/*
 * XREFs of ApplyTexcoordExtendMode @ 0x1800E2EEC
 * Callers:
 *     PrepareSamplerTexcoord @ 0x1800E2DD8 (PrepareSamplerTexcoord.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall ApplyTexcoordExtendMode(__int64 a1, __int16 a2, char a3, char a4, __int64 a5, __int16 *a6)
{
  __int16 *v6; // rsi
  unsigned int v7; // ebx
  __int16 v8; // di
  char *v10; // rax
  int appended; // eax
  __int64 v12; // rcx
  int v13; // edi
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  __int16 v15; // [rsp+60h] [rbp+18h] BYREF
  __int16 v16; // [rsp+62h] [rbp+1Ah]

  v6 = a6;
  v7 = 0;
  v8 = a2;
  if ( !a3 )
    goto LABEL_2;
  if ( a6 )
  {
    v13 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v13 + 1;
    v8 = v13 | 0x600;
  }
  v15 = a2;
  *(_QWORD *)&v14 = 2LL;
  *((_QWORD *)&v14 + 1) = &v15;
  v16 = (unsigned __int8)a2 | 0x300;
  if ( a3 == 1 )
  {
    v10 = "BorderEffectClamp";
  }
  else if ( a3 == 2 )
  {
    v10 = "BorderEffectWrapBilinear";
    if ( !a4 )
      v10 = "BorderEffectWrap";
  }
  else
  {
    v10 = a3 == 3 ? "BorderEffectMirror" : 0LL;
  }
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, v8, (__int64)psz, a5, (__int64)v10, &v14);
  v7 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, appended, 0x1F1u);
  }
  else
  {
LABEL_2:
    if ( v6 )
      *v6 = v8;
  }
  return v7;
}
