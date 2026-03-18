/*
 * XREFs of LinkLightShader @ 0x18001BFEC
 * Callers:
 *     AppendLights @ 0x18001BDE4 (AppendLights.c)
 * Callees:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800343C8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LinkLightShader(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        char a5,
        unsigned __int16 *a6)
{
  int v7; // r13d
  int v9; // ecx
  int v10; // r9d
  int appended; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  int v15; // edi
  int v16; // edx
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  unsigned __int16 v19; // r10
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int16 v24; // ax
  int v26; // edx
  int v27; // edx
  unsigned int v28; // [rsp+20h] [rbp-59h]
  __int128 v30; // [rsp+40h] [rbp-39h] BYREF
  __int128 v31; // [rsp+50h] [rbp-29h] BYREF
  __int128 v32; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v33[14]; // [rsp+70h] [rbp-9h] BYREF
  char v34; // [rsp+7Eh] [rbp+5h]
  int v35; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int16 v36; // [rsp+84h] [rbp+Bh]
  int v37; // [rsp+86h] [rbp+Dh]
  __int16 v38; // [rsp+8Ah] [rbp+11h]

  v7 = (int)ppModule;
  if ( a6 )
  {
    v9 = *(_DWORD *)(a1 + 80);
    v10 = (int)ppModule;
    v30 = 0LL;
    *(_DWORD *)(a1 + 80) = v9 + 1;
    LOWORD(v9) = v9 | 0x600;
    *a6 = v9;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 (unsigned __int16)v9,
                 (unsigned int)byte_1802B2AA6,
                 v10,
                 (__int64)"InitLightAccumulator",
                 (__int64)&v30);
    v13 = appended;
    if ( appended >= 0 )
    {
      v14 = a2;
      v15 = 0;
      while ( 1 )
      {
        v16 = (*v14 >> (4 * v15)) & 0xF;
        if ( v16 == 15 )
          goto LABEL_19;
        if ( !v16 )
          break;
        v26 = v16 - 1;
        if ( !v26 )
        {
          if ( a5 )
          {
            v17 = *(_OWORD *)"DistantSceneLightingEffectLib";
            qmemcpy(&v33[8], "ctLib", 5);
            v18 = *(_QWORD *)"tingEffectLib";
            v33[13] = v15 + 48;
            goto LABEL_8;
          }
          v17 = *(_OWORD *)"DistantLightingLib";
          *(_WORD *)v33 = *(_WORD *)"ib";
          v33[2] = v15 + 48;
LABEL_35:
          v33[3] = 0;
          goto LABEL_9;
        }
        v27 = v26 - 1;
        if ( !v27 )
        {
          if ( a5 )
          {
            v17 = *(_OWORD *)"PointSceneLightingEffectLib";
            v33[11] = v15 + 48;
            qmemcpy(v33, "ngEffectLib", 11);
            v33[12] = 0;
          }
          else
          {
            v17 = *(_OWORD *)"PointLightingLib";
            *(_WORD *)v33 = (unsigned __int8)(v15 + 48);
          }
          goto LABEL_9;
        }
        if ( v27 != 1 )
        {
          v13 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(4 * v15, 0LL, 0, -2147024809, 0x3AAu, 0LL);
          return v13;
        }
        if ( a5 )
        {
          v17 = *(_OWORD *)"SpotSceneLightingEffectLib";
          *(_WORD *)&v33[10] = (unsigned __int8)(v15 + 48);
          qmemcpy(v33, "gEffectLib", 10);
          goto LABEL_9;
        }
        HIBYTE(v32) = v15 + 48;
        qmemcpy(&v32, "SpotLightingLib", 15);
        v33[0] = 0;
LABEL_10:
        v35 = 196610;
        if ( v15 )
          v35 = 327684;
        v19 = *a6;
        v20 = *a4;
        v21 = 0LL;
        v36 = *a6;
        v37 = 0;
        v22 = 3;
        v38 = 0;
        do
        {
          if ( (int)(v22 - 3) >= (__int64)v20 )
            break;
          if ( v21 >= v20 )
            goto LABEL_38;
          v23 = v22++;
          v24 = *(_WORD *)(a4[1] + 2 * v21++);
          *((_WORD *)&v35 + v23) = v24;
        }
        while ( v22 < 6 );
        *(_QWORD *)&v30 = v20 + 3;
        if ( (__int64)(v20 + 3) < 0 )
        {
LABEL_38:
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        *((_QWORD *)&v30 + 1) = &v35;
        v31 = v30;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     v19,
                     (unsigned int)byte_1802B2AA6,
                     v7,
                     (__int64)&v32,
                     (__int64)&v31);
        v13 = appended;
        if ( appended < 0 )
        {
          v28 = 958;
          goto LABEL_40;
        }
        v14 = a2;
LABEL_19:
        if ( (unsigned int)++v15 >= 3 )
          return v13;
      }
      if ( a5 )
      {
        v17 = *(_OWORD *)"AmbientSceneLightingEffectLib";
        qmemcpy(&v33[8], "ctLib0", 6);
        v18 = *(_QWORD *)"tingEffectLib";
LABEL_8:
        *(_QWORD *)v33 = v18;
        v34 = 0;
LABEL_9:
        v32 = v17;
        goto LABEL_10;
      }
      v17 = *(_OWORD *)"AmbientLightingLib";
      qmemcpy(v33, "ib0", 3);
      goto LABEL_35;
    }
    v28 = 881;
LABEL_40:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, appended, v28, 0LL);
  }
  else
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x36Cu, 0LL);
  }
  return v13;
}
