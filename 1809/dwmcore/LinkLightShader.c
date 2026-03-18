/*
 * XREFs of LinkLightShader @ 0x1800213E8
 * Callers:
 *     AppendLights @ 0x1800215DC (AppendLights.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ??A?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_J@Z @ 0x1800E021C (--A-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_J@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall LinkLightShader(unsigned __int64 a1, _DWORD *a2, __int64 a3, __int64 *a4, char a5, __int16 *a6)
{
  int v7; // r12d
  unsigned __int64 v8; // r13
  int v9; // ecx
  int v10; // r9d
  int appended; // eax
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // ebx
  _DWORD *v15; // rax
  int v16; // edi
  int v17; // edx
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  _WORD *v24; // rax
  int v25; // edx
  int v26; // r9d
  int v27; // edx
  int v28; // edx
  unsigned int v29; // [rsp+20h] [rbp-59h]
  __int128 v31; // [rsp+40h] [rbp-39h] BYREF
  __int128 v32; // [rsp+50h] [rbp-29h] BYREF
  __int128 v33; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v34[14]; // [rsp+70h] [rbp-9h] BYREF
  char v35; // [rsp+7Eh] [rbp+5h]
  int v36; // [rsp+80h] [rbp+7h] BYREF
  __int16 v37; // [rsp+84h] [rbp+Bh]
  int v38; // [rsp+86h] [rbp+Dh]
  __int16 v39; // [rsp+8Ah] [rbp+11h]

  v7 = (int)ppModule;
  v8 = a1;
  if ( a6 )
  {
    v9 = *(_DWORD *)(a1 + 80);
    v10 = (int)ppModule;
    v31 = 0LL;
    *(_DWORD *)(v8 + 80) = v9 + 1;
    LOWORD(v9) = v9 | 0x600;
    *a6 = v9;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 v8,
                 (unsigned __int16)v9,
                 (unsigned int)psz,
                 v10,
                 (__int64)"InitLightAccumulator",
                 (__int64)&v31);
    v13 = 0LL;
    v14 = appended;
    if ( appended >= 0 )
    {
      v15 = a2;
      v16 = 0;
      LOBYTE(v12) = 48;
      while ( 1 )
      {
        a1 = (unsigned int)(4 * v16);
        v17 = (*v15 >> (4 * v16)) & 0xF;
        if ( v17 == 15 )
          goto LABEL_5;
        if ( !v17 )
          break;
        v27 = v17 - 1;
        if ( !v27 )
        {
          if ( a5 )
          {
            v19 = *(_OWORD *)"DistantSceneLightingEffectLib";
            qmemcpy(&v34[8], "ctLib", 5);
            v20 = *(_QWORD *)"tingEffectLib";
            v34[13] = v16 + 48;
            goto LABEL_10;
          }
          v19 = *(_OWORD *)"DistantLightingLib";
          *(_WORD *)v34 = *(_WORD *)"ib";
          v34[2] = v16 + 48;
LABEL_38:
          v34[3] = 0;
          goto LABEL_11;
        }
        v28 = v27 - 1;
        if ( !v28 )
        {
          if ( a5 )
          {
            v19 = *(_OWORD *)"PointSceneLightingEffectLib";
            v34[11] = v16 + 48;
            qmemcpy(v34, "ngEffectLib", 11);
            v34[12] = 0;
          }
          else
          {
            v19 = *(_OWORD *)"PointLightingLib";
            *(_WORD *)v34 = (unsigned __int8)(v16 + 48);
          }
          goto LABEL_11;
        }
        if ( v28 != 1 )
        {
          v29 = 1019;
          goto LABEL_24;
        }
        if ( a5 )
        {
          v19 = *(_OWORD *)"SpotSceneLightingEffectLib";
          *(_WORD *)&v34[10] = (unsigned __int8)(v16 + 48);
          qmemcpy(v34, "gEffectLib", 10);
          goto LABEL_11;
        }
        HIBYTE(v33) = v16 + 48;
        qmemcpy(&v33, "SpotLightingLib", 15);
        v34[0] = 0;
LABEL_12:
        v36 = 196610;
        if ( v16 )
          v36 = 327684;
        v21 = 3;
        v37 = *a6;
        v38 = 0;
        v39 = 0;
        while ( 1 )
        {
          v22 = *a4;
          v23 = (int)v21 - 3LL;
          if ( v23 >= *a4 )
            break;
          v24 = (_WORD *)gsl::span<enum ShaderLinkingArgument const,-1>::operator[](a4, v23, v13, v12);
          a1 = v21++;
          *((_WORD *)&v36 + a1) = *v24;
          if ( v21 >= 6 )
          {
            v22 = *a4;
            break;
          }
        }
        *(_QWORD *)&v31 = v22 + 3;
        if ( v22 + 3 < 0 )
        {
          gsl::details::terminate((gsl::details *)a1);
          JUMPOUT(0x1800215D5LL);
        }
        v25 = (unsigned __int16)*a6;
        *((_QWORD *)&v31 + 1) = &v36;
        v32 = v31;
        appended = CShaderLinkingGraphBuilder::AppendNode(v8, v25, (unsigned int)psz, v7, (__int64)&v33, (__int64)&v32);
        v13 = 0LL;
        v14 = appended;
        if ( appended < 0 )
        {
          v29 = 1039;
          goto LABEL_41;
        }
        v15 = a2;
        LOBYTE(v12) = 48;
LABEL_5:
        if ( (unsigned int)++v16 >= 3 )
          return v14;
      }
      if ( a5 )
      {
        v19 = *(_OWORD *)"AmbientSceneLightingEffectLib";
        qmemcpy(&v34[8], "ctLib0", 6);
        v20 = *(_QWORD *)"tingEffectLib";
LABEL_10:
        *(_QWORD *)v34 = v20;
        v35 = 0;
LABEL_11:
        v33 = v19;
        goto LABEL_12;
      }
      v19 = *(_OWORD *)"AmbientLightingLib";
      qmemcpy(v34, "ib0", 3);
      goto LABEL_38;
    }
    v29 = 962;
LABEL_41:
    v26 = appended;
  }
  else
  {
    v29 = 957;
LABEL_24:
    v26 = -2147024809;
    LODWORD(v13) = 0;
    v14 = -2147024809;
  }
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, v13, v26, v29);
  return v14;
}
