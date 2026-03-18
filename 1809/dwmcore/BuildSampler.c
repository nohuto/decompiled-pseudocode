/*
 * XREFs of BuildSampler @ 0x1800E1FB8
 * Callers:
 *     LoadShaderBody @ 0x1800E2B0C (LoadShaderBody.c)
 * Callees:
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x180020174 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800E296C (-HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z.c)
 *     AppendColorConversion @ 0x1800E2D7C (AppendColorConversion.c)
 *     PrepareSamplerTexcoord @ 0x1800E2DD8 (PrepareSamplerTexcoord.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall BuildSampler(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int16 v7; // r12
  unsigned __int16 v9; // si
  unsigned int v10; // ebx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int16 v16; // di
  __int64 v17; // r13
  int v18; // eax
  __int64 v19; // rcx
  int v21; // eax
  __int64 v22; // rcx
  char v23; // al
  int appended; // eax
  __int64 v25; // rcx
  char HasNode; // al
  char v27; // al
  int v28; // eax
  __int64 v29; // rcx
  unsigned __int8 v30; // di
  __int128 v31; // xmm0
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  char v36; // al
  __int64 v37; // xmm1_8
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  __int16 v42[2]; // [rsp+30h] [rbp-61h] BYREF
  __int16 v43; // [rsp+34h] [rbp-5Dh]
  __int16 v44; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int16 v45; // [rsp+3Ch] [rbp-55h]
  __int128 v46; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v47[2]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v48[17]; // [rsp+60h] [rbp-31h] BYREF
  char v49; // [rsp+71h] [rbp-20h]
  char v50; // [rsp+72h] [rbp-1Fh]
  _BYTE v51[24]; // [rsp+80h] [rbp-11h] BYREF
  char v52; // [rsp+98h] [rbp+7h]
  unsigned __int8 v53; // [rsp+99h] [rbp+8h]
  char v54; // [rsp+9Ah] [rbp+9h]

  v47[0] = a4;
  v6 = a3;
  v44 = a3 | 0x100;
  v7 = a3 | 0x200;
  v42[0] = a3 | 0x200;
  v9 = a3 | 0x300;
  v43 = a3 | 0x300;
  v10 = 0;
  v45 = a3 | 0x400;
  if ( (unsigned __int8)CShaderLinkingGraphBuilder::HasNode(a1, (unsigned __int16)a3 | 0x200u) )
    return v10;
  if ( *(_BYTE *)(v47[0] + 1LL) && !(unsigned __int8)CShaderLinkingGraphBuilder::HasNode(a1, v9) )
  {
    v23 = *(_BYTE *)(v47[0] + 4LL);
    qmemcpy(v48, "GetSamplerData", 14);
    *(_WORD *)&v48[14] = (unsigned __int8)(v23 + 48);
    v46 = 0LL;
    appended = CShaderLinkingGraphBuilder::AppendNode((__int64)a1, v9, (__int64)psz, a5, (__int64)v48, &v46);
    v10 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, appended, 0x2F0u);
      return v10;
    }
    v7 = v42[0];
  }
  v11 = a2 + 32 * v6;
  if ( !*(_BYTE *)(v11 + 27) )
  {
    v12 = PrepareSamplerTexcoord(a1, a2, (unsigned int)v6, a5);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x301u);
      return v10;
    }
    if ( *(_BYTE *)(a2 + 158) )
    {
      qmemcpy(v51, "SampleCubeTexture", 17);
      *(_WORD *)&v51[17] = (unsigned __int8)(v6 + 48);
      goto LABEL_9;
    }
    if ( *(_BYTE *)(v11 + 26) )
    {
      qmemcpy(v51, "MultiSampleTexture", 18);
      *(_WORD *)&v51[18] = (unsigned __int8)(v6 + 48);
      goto LABEL_9;
    }
    if ( !*(_BYTE *)(v11 + 25) )
    {
      qmemcpy(v51, "SampleTexture", 13);
      *(_WORD *)&v51[13] = (unsigned __int8)(v6 + 48);
LABEL_9:
      *(_QWORD *)&v48[8] = &v44;
      *(_QWORD *)v48 = 1LL;
      v46 = *(_OWORD *)v48;
      v14 = CShaderLinkingGraphBuilder::AppendNode((__int64)a1, v42[0], (__int64)psz, a5, (__int64)v51, &v46);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x335u);
        return v10;
      }
      v16 = v43;
      v17 = v47[0];
LABEL_11:
      if ( *(_BYTE *)(v11 + 28)
        && (*(_QWORD *)&v48[8] = v42,
            *(_QWORD *)v48 = 1LL,
            v46 = *(_OWORD *)v48,
            v21 = CShaderLinkingGraphBuilder::AppendNode(
                    (__int64)a1,
                    v42[0],
                    (__int64)psz,
                    a5,
                    (__int64)"IgnoreAlpha",
                    &v46),
            v10 = v21,
            v21 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x33Bu);
      }
      else if ( *(_BYTE *)(v11 + 29)
             && (*(_QWORD *)&v48[8] = v42,
                 *(_QWORD *)v48 = 1LL,
                 v46 = *(_OWORD *)v48,
                 v38 = CShaderLinkingGraphBuilder::AppendNode(
                         (__int64)a1,
                         v42[0],
                         (__int64)psz,
                         a5,
                         (__int64)"UnBoostSDRLuminance",
                         &v46),
                 v10 = v38,
                 v38 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x341u);
      }
      else
      {
        v46 = *(_OWORD *)v11;
        v18 = AppendColorConversion((_DWORD)a1, a5, (unsigned __int16)v42[0], (unsigned int)&v46, 0);
        v10 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x344u);
        }
        else if ( *(_BYTE *)(v17 + 1) )
        {
          if ( !*(_BYTE *)(v11 + 16) )
          {
            WORD1(v47[0]) = v44;
            *(_QWORD *)v48 = 3LL;
            *(_QWORD *)&v48[8] = v47;
            LOWORD(v47[0]) = v42[0];
            WORD2(v47[0]) = v16;
            v46 = *(_OWORD *)v48;
            v40 = CShaderLinkingGraphBuilder::AppendNode(
                    (__int64)a1,
                    v42[0],
                    (__int64)psz,
                    a5,
                    (__int64)"ClampTransparent",
                    &v46);
            v10 = v40;
            if ( v40 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x34Eu);
          }
        }
      }
      return v10;
    }
    HasNode = CShaderLinkingGraphBuilder::HasNode(a1, v45);
    v17 = v47[0];
    if ( !HasNode )
    {
      v27 = *(_BYTE *)(v47[0] + 4LL);
      v50 = 0;
      v49 = v27 + 48;
      qmemcpy(v48, "GetSamplerDataExt", sizeof(v48));
      v46 = 0LL;
      v28 = CShaderLinkingGraphBuilder::AppendNode((__int64)a1, v45, (__int64)psz, a5, (__int64)v48, &v46);
      v10 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x317u);
        return v10;
      }
    }
    v30 = v6 + 48;
    if ( *(_BYTE *)(v11 + 17) == 2 )
    {
      if ( *(_BYTE *)(v11 + 16) == 2 )
      {
        v31 = *(_OWORD *)"SampleWrappedTexture";
        *(_DWORD *)&v51[16] = *(_DWORD *)"ture";
        *(_WORD *)&v51[20] = v30;
        goto LABEL_26;
      }
      v31 = *(_OWORD *)"SampleWrappedTextureVOnly";
      v36 = aSamplewrappedt_1[24];
      v37 = *(_QWORD *)"tureVOnly";
    }
    else
    {
      v31 = *(_OWORD *)"SampleWrappedTextureUOnly";
      v36 = aSamplewrappedt_0[24];
      v37 = *(_QWORD *)"tureUOnly";
    }
    *(_QWORD *)&v51[16] = v37;
    v52 = v36;
    v53 = v30;
    v54 = 0;
LABEL_26:
    v16 = v43;
    LOWORD(v47[0]) = v44;
    *(_QWORD *)&v48[8] = v47;
    *(_OWORD *)v51 = v31;
    *(_QWORD *)v48 = 3LL;
    WORD1(v47[0]) = v43;
    WORD2(v47[0]) = v45;
    v46 = *(_OWORD *)v48;
    v32 = CShaderLinkingGraphBuilder::AppendNode((__int64)a1, v42[0], (__int64)psz, a5, (__int64)v51, &v46);
    v10 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x331u);
      return v10;
    }
    goto LABEL_11;
  }
  v34 = CShaderLinkingGraphBuilder::CopyNode(a1, v7, v43);
  v10 = v34;
  if ( v34 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x2FAu);
  return v10;
}
