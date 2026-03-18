/*
 * XREFs of PrepareSamplerTexcoord @ 0x1800E2DD8
 * Callers:
 *     BuildSampler @ 0x1800E1FB8 (BuildSampler.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ApplyTexcoordExtendMode @ 0x1800E2EEC (ApplyTexcoordExtendMode.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800E42BC (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     ApplyTexcoordDisplacement @ 0x18022AEDC (ApplyTexcoordDisplacement.c)
 */

__int64 __fastcall PrepareSamplerTexcoord(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int16 v6; // dx
  bool v8; // zf
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // ebx
  char v15; // cl
  int v16; // eax
  __int64 v17; // rcx
  int appended; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int128 v23; // xmm1
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int128 v34[2]; // [rsp+30h] [rbp-20h] BYREF
  int v35; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int16 v36; // [rsp+90h] [rbp+40h] BYREF

  v5 = a2 + 32LL * a3;
  v6 = a3 | 0x100;
  v8 = *(_BYTE *)(a2 + 158) == 0;
  v36 = a3 | 0x100;
  if ( v8 )
  {
    if ( *(_BYTE *)(a2 + 156) )
    {
      *(_QWORD *)&v34[0] = 1LL;
      *((_QWORD *)&v34[0] + 1) = &v36;
      appended = CShaderLinkingGraphBuilder::AppendNode(a1, v6, (__int64)psz, a4, (__int64)"FlattenTexcoords", v34);
      v14 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, appended, 0x281u);
        return v14;
      }
    }
    else
    {
      v10 = CShaderLinkingGraphBuilder::SwizzleNode();
      v14 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x286u);
        return v14;
      }
    }
  }
  else
  {
    *(_QWORD *)&v34[0] = 2LL;
    *((_QWORD *)&v34[0] + 1) = &v35;
    v35 = 16843008;
    v21 = CShaderLinkingGraphBuilder::AppendNode(a1, v6, (__int64)psz, a4, (__int64)"GetCubeTexcoord", v34);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x27Au);
      return v14;
    }
  }
  if ( *(_BYTE *)(v5 + 30)
    && (v23 = *(_OWORD *)(v5 + 16),
        v34[0] = *(_OWORD *)v5,
        v34[1] = v23,
        v24 = ApplyTexcoordDisplacement(a1, v36, v34, a4),
        v14 = v24,
        v24 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x29Au);
  }
  else
  {
    LOBYTE(v12) = *(_BYTE *)(v5 + 16);
    LOBYTE(v13) = *(_BYTE *)(v5 + 25);
    if ( (_BYTE)v12 == *(_BYTE *)(v5 + 17) )
    {
      v15 = 0;
      if ( !*(_BYTE *)(a2 + 158) )
        v15 = *(_BYTE *)(v5 + 16);
      LOBYTE(v12) = v15;
      v16 = ApplyTexcoordExtendMode(a1, v36, v12, v13, a4, 0LL);
      v14 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2ACu);
    }
    else
    {
      v26 = ApplyTexcoordExtendMode(a1, v36, v12, v13, a4, (__int64)&v35);
      v14 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x2B2u);
      }
      else
      {
        LOBYTE(v29) = *(_BYTE *)(v5 + 25);
        LOBYTE(v28) = *(_BYTE *)(v5 + 17);
        v30 = ApplyTexcoordExtendMode(a1, v36, v28, v29, a4, (__int64)&v35 + 2);
        v14 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x2B3u);
        }
        else
        {
          *((_QWORD *)&v34[0] + 1) = &v35;
          *(_QWORD *)&v34[0] = 2LL;
          v32 = CShaderLinkingGraphBuilder::AppendNode(a1, v36, (__int64)psz, a4, (__int64)"BorderEffectCombine", v34);
          v14 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x2B5u);
        }
      }
    }
  }
  return v14;
}
