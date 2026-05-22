/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F095C
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F1820 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800EE7C0 (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1800F26C8 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180102BE4 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180102D88 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     sqrtf_0 @ 0x18012DB2F (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // r14
  int v5; // xmm0_4
  bool v6; // r12
  float v7; // xmm0_4
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  float v12; // xmm6_4
  MPCConstantManager *Instance; // rax
  bool v14; // dl
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // r15
  bool v18; // bl
  char v19; // bl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  const char *v24; // r9
  float *v25; // r14
  int v26; // xmm1_4
  float v27; // xmm6_4
  MPCConstantManager *v28; // rax
  float v29; // xmm0_4
  float v30; // xmm6_4
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  const char *v34; // r9
  MPCConstantManager *v35; // rax
  float v36; // xmm0_4
  float v37; // xmm0_4
  __m128 v38; // xmm7
  __m128 v39; // xmm8
  float v40; // xmm9_4
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  const char *v48; // r9
  __int64 v49; // rax
  float v50; // xmm6_4
  float LowPart; // xmm0_4
  float v52; // xmm6_4
  MPCConstantManager *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  const char *v57; // r9
  MPCConstantManager *v58; // rax
  float v59; // xmm0_4
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  const char *v63; // r9
  MPCConstantManager *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  const char *v68; // r9
  MPCConstantManager *v69; // rax
  BOOL v70; // ecx
  int *v71; // rax
  float v72; // xmm0_4
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  const char *v76; // r9
  __m128 v77; // xmm2
  __m128 v78; // xmm1
  __m128 v79; // xmm2
  __m128 v80; // xmm2
  __m128 v81; // xmm1
  __m128 v82; // xmm0
  __m128 v83; // xmm2
  MPCConstantManager *v84; // rax
  __m128 v85; // xmm2
  __m128 v86; // xmm1
  __m128 v87; // xmm1
  __m128 v88; // xmm2
  __m128 v89; // xmm1
  _DWORD v90[2]; // [rsp+38h] [rbp-69h] BYREF
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp-61h] BYREF
  float v92; // [rsp+48h] [rbp-59h]
  __int64 v93; // [rsp+50h] [rbp-51h]
  __int128 v94; // [rsp+58h] [rbp-49h]
  float v95; // [rsp+118h] [rbp+77h]
  float v96; // [rsp+11Ch] [rbp+7Bh]
  int v97; // [rsp+120h] [rbp+7Fh] BYREF
  float v98; // [rsp+124h] [rbp+83h]

  v93 = -2LL;
  v4 = 0;
  *((_DWORD *)this + 1042) = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 297);
  *((_DWORD *)this + 1052) = *((_DWORD *)a2 + 296);
  *((_DWORD *)this + 1053) = v5;
  *((_DWORD *)this + 1043) = *((_DWORD *)a2 + 292) & *((_DWORD *)a2 + 291);
  if ( (*((_BYTE *)a2 + 1168) & 4) == 0 || (v6 = 1, *((_BYTE *)this + 4712)) )
    v6 = 0;
  v7 = *((float *)a2 + 166);
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 519),
    v6,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 151),
    *((float *)a2 + 152),
    v7);
  if ( *((_BYTE *)a2 + 1211) )
  {
    v12 = *((float *)this + 1044);
    Instance = MPCConstantManager::GetInstance(v9, v8, v10, v11);
    MPCConstantManager::GetConstant<float>(Instance);
    v7 = (float)(v7 * (float)(*((float *)a2 + 300) - v12)) + v12;
    *((float *)this + 1044) = v7;
  }
  else
  {
    *((_DWORD *)this + 1044) = 0;
  }
  if ( (*((_BYTE *)this + 4172) & 8) == 0 || (v14 = 1, *((_BYTE *)this + 4712)) )
    v14 = 0;
  *((_BYTE *)this + 4705) = v14;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 514), v14, *((_QWORD *)a2 + 2));
  if ( *(_BYTE *)(*((_QWORD *)this + 514) + 10LL) )
  {
    v16 = *((_QWORD *)&v94 + 1);
LABEL_16:
    v17 = 1;
    goto LABEL_17;
  }
  v15 = *((_QWORD *)this + 519);
  v7 = 0.0;
  v94 = 0LL;
  v16 = *(_QWORD *)(v15 + 24);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = *(_QWORD *)(v15 + 24);
  }
  *(_QWORD *)&v94 = *(_QWORD *)(v15 + 16);
  *((_QWORD *)&v94 + 1) = v16;
  v4 = 1;
  if ( *(_BYTE *)(v94 + 10) )
    goto LABEL_16;
  v17 = 0;
LABEL_17:
  if ( (v4 & 1) != 0 )
  {
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v94 + 1))(*((_QWORD *)&v94 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v94 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v94 + 1) + 8LL))(*((_QWORD *)&v94 + 1));
      }
    }
  }
  if ( v17 )
    MPCSixDofProcessor::ResetRayLength(this);
  v18 = (*((_DWORD *)a2 + 292) & 0x40) != 0;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 517), v18, *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 516), !v18, *((_QWORD *)a2 + 2));
  v19 = 0;
  v20 = *((_BYTE *)this + 3772);
  if ( v20 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 516) + 9LL) )
    {
      *((_BYTE *)this + 3772) = 0;
      v20 = 0;
    }
  }
  else
  {
    v20 = 0;
    if ( *(_BYTE *)(*((_QWORD *)this + 517) + 9LL) )
    {
      *((_BYTE *)this + 3772) = 1;
      v19 = 1;
      v20 = 1;
    }
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 518), v20, *((_QWORD *)a2 + 2));
  v25 = (float *)((char *)this + 4224);
  if ( v19 )
  {
    v7 = *((float *)a2 + 296);
    v26 = *((_DWORD *)a2 + 297);
    *((float *)this + 1048) = v7;
    *((_DWORD *)this + 1049) = v26;
    *((float *)this + 1054) = v7;
    *((_DWORD *)this + 1055) = v26;
    *((_DWORD *)this + 942) = 2;
    *(_QWORD *)v25 = 0LL;
    *((_QWORD *)this + 529) = 0LL;
    *(_QWORD *)((char *)this + 4284) = 0LL;
  }
  if ( *((_BYTE *)this + 3772) )
  {
    v27 = *((float *)this + 1048);
    v28 = MPCConstantManager::GetInstance(v22, v21, v23, v24);
    MPCConstantManager::GetConstant<float>(v28);
    v29 = (float)(v7 * (float)(*((float *)this + 1052) - v27)) + v27;
    *((float *)this + 1048) = v29;
    v30 = *((float *)this + 1049);
    v35 = MPCConstantManager::GetInstance(v32, v31, v33, v34);
    MPCConstantManager::GetConstant<float>(v35);
    v36 = (float)(v29 * (float)(*((float *)this + 1053) - v30)) + v30;
    *((float *)this + 1049) = v36;
    v37 = v36 - *((float *)this + 1051);
    *v25 = *((float *)this + 1048) - *((float *)this + 1050);
    *((float *)this + 1057) = v37;
    v38 = (__m128)*((unsigned int *)this + 1048);
    v38.m128_f32[0] = v38.m128_f32[0] - *((float *)this + 1054);
    v39 = (__m128)*((unsigned int *)this + 1049);
    v39.m128_f32[0] = v39.m128_f32[0] - *((float *)this + 1055);
    v40 = sqrtf_0((float)(v39.m128_f32[0] * v39.m128_f32[0]) + (float)(v38.m128_f32[0] * v38.m128_f32[0]));
    if ( v6 )
    {
      v41 = 3;
      *((_DWORD *)this + 942) = 3;
    }
    else
    {
      v41 = *((_DWORD *)this + 942);
    }
    if ( v41 )
    {
      v42 = v41 - 1;
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v43 )
        {
          if ( v43 == 1 && !*((_BYTE *)this + 3772) )
            *((_DWORD *)this + 942) = 2;
        }
        else
        {
          v44 = *((_QWORD *)this + 517);
          QueryPerformanceFrequency(&Frequency);
          v49 = *(_QWORD *)(v44 + 32) - *(_QWORD *)(v44 + 16);
          v50 = (float)(int)v49;
          if ( v49 < 0 )
            v50 = v50 + 1.8446744e19;
          LowPart = (float)(int)Frequency.LowPart;
          v52 = v50 / (float)(int)Frequency.LowPart;
          v53 = MPCConstantManager::GetInstance(v46, v45, v47, v48);
          MPCConstantManager::GetConstant<float>(v53);
          if ( v52 > LowPart )
          {
            v58 = MPCConstantManager::GetInstance(v55, v54, v56, v57);
            MPCConstantManager::GetConstant<float>(v58);
            if ( v40 > LowPart )
            {
              v59 = sqrtf_0(
                      (float)(*((float *)this + 1054) * *((float *)this + 1054))
                    + (float)(*((float *)this + 1055) * *((float *)this + 1055)));
              v64 = MPCConstantManager::GetInstance(v61, v60, v62, v63);
              MPCConstantManager::GetConstant<float>(v64);
              v69 = MPCConstantManager::GetInstance(v66, v65, v67, v68);
              MPCConstantManager::GetConstant<float>(v69);
              v70 = !IsPointInHorizontalQuadrant(v59 * 0.0174532925199433, _mm_unpacklo_ps(v38, v39).m128_i64[0]);
              *((_DWORD *)this + 942) = v70;
              if ( v70 )
              {
                v97 = 0;
                v98 = v40;
              }
              else
              {
                *(float *)v90 = v40;
                v90[1] = 0;
              }
              v71 = &v97;
              if ( !v70 )
                v71 = v90;
              *(_QWORD *)v25 = *(_QWORD *)v71;
              if ( *((_DWORD *)this + 942) )
                v38.m128_i32[0] = v39.m128_i32[0];
              if ( v38.m128_f32[0] < 0.0 )
              {
                v72 = *((float *)this + 1057) * -1.0;
                *v25 = *v25 * -1.0;
                *((float *)this + 1057) = v72;
              }
            }
          }
        }
      }
      else
      {
        *v25 = 0.0;
      }
    }
    else
    {
      *((_DWORD *)this + 1057) = 0;
    }
  }
  else
  {
    *((_QWORD *)this + 528) = 0LL;
  }
  if ( sqrtf_0((float)(*((float *)this + 1057) * *((float *)this + 1057)) + (float)(*v25 * *v25)) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 518) + 9LL) )
    {
      v77 = (__m128)*((unsigned __int64 *)this + 529);
      v78 = _mm_mul_ps(v77, v77);
      v78.m128_f32[0] = v78.m128_f32[0] + _mm_shuffle_ps(v78, v78, 85).m128_f32[0];
      v79 = _mm_div_ps(v77, _mm_sqrt_ps(_mm_shuffle_ps(v78, v78, 0)));
      v95 = v79.m128_f32[0];
      v96 = _mm_shuffle_ps(v79, v79, 85).m128_f32[0];
      v80 = (__m128)*(unsigned __int64 *)v25;
      v81 = _mm_mul_ps(v80, v80);
      v81.m128_f32[0] = v81.m128_f32[0] + _mm_shuffle_ps(v81, v81, 85).m128_f32[0];
      v82 = _mm_sqrt_ps(_mm_shuffle_ps(v81, v81, 0));
      v83 = _mm_div_ps(v80, v82);
      v84 = MPCConstantManager::GetInstance(v74, v73, v75, v76);
      MPCConstantManager::GetConstant<float>(v84);
      v81.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v83, v83, 85).m128_f32[0] - v96) * v82.m128_f32[0])
                      + *((float *)this + 1059);
      *((float *)this + 1058) = (float)((float)(v83.m128_f32[0] - v95) * v82.m128_f32[0]) + *((float *)this + 1058);
      *((_DWORD *)this + 1059) = v81.m128_i32[0];
    }
    else
    {
      v85 = (__m128)*(unsigned __int64 *)v25;
      v86 = _mm_mul_ps(v85, v85);
      v86.m128_f32[0] = v86.m128_f32[0] + _mm_shuffle_ps(v86, v86, 85).m128_f32[0];
      v87 = _mm_div_ps(v85, _mm_sqrt_ps(_mm_shuffle_ps(v86, v86, 0)));
      *((_QWORD *)this + 529) = _mm_unpacklo_ps(v87, _mm_shuffle_ps(v87, v87, 85)).m128_u64[0];
    }
  }
  v88 = (__m128)*((unsigned int *)this + 1045);
  v88.m128_f32[0] = (float)(v88.m128_f32[0] * *((float *)this + 1065)) + *((float *)this + 1062);
  v89 = (__m128)*((unsigned int *)this + 1045);
  v89.m128_f32[0] = (float)(v89.m128_f32[0] * *((float *)this + 1066)) + *((float *)this + 1063);
  v92 = (float)(*((float *)this + 1045) * *((float *)this + 1067)) + *((float *)this + 1064);
  *((_QWORD *)this + 534) = _mm_unpacklo_ps(v88, v89).m128_u64[0];
  *((float *)this + 1070) = v92;
  *((_DWORD *)this + 1175) = *((_DWORD *)this + 1043);
  *((_QWORD *)this + 525) = *((_QWORD *)this + 524);
}
