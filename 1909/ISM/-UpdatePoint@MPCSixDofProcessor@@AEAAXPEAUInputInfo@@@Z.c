/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180131EEC
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131510 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     sqrtf_0 @ 0x18003785B (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z @ 0x18012E0F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@PEBG@Z.c)
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801306A4 (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18013195C (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180140A70 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180140C30 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // bl
  int v5; // xmm0_4
  bool v6; // r15
  const char *v7; // r9
  float v8; // xmm6_4
  struct BamoMPCConstantManagerClientPrincipal *v9; // r14
  int v10; // eax
  bool v11; // dl
  __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  char v14; // r14
  int v15; // ebx
  char v16; // bl
  const char *v17; // r9
  int v18; // xmm0_4
  int v19; // xmm1_4
  struct BamoMPCConstantManagerClientPrincipal *v20; // rsi
  char *v21; // rbx
  int v22; // eax
  const char *v23; // r9
  struct BamoMPCConstantManagerClientPrincipal *v24; // rsi
  int v25; // eax
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm8_4
  float v29; // xmm6_4
  const char *v30; // r9
  float v31; // xmm7_4
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  float v35; // xmm10_4
  struct BamoMPCConstantManagerClientPrincipal *v36; // rsi
  int v37; // eax
  const char *v38; // r9
  struct BamoMPCConstantManagerClientPrincipal *v39; // rsi
  int v40; // eax
  const char *v41; // r9
  float v42; // xmm10_4
  struct BamoMPCConstantManagerClientPrincipal *v43; // rsi
  int v44; // eax
  const char *v45; // r9
  float v46; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v47; // rsi
  int v48; // eax
  wchar_t *v49; // r8
  float v50; // xmm0_4
  BOOL v51; // edx
  int *v52; // rax
  float v53; // xmm2_4
  const char *v54; // r9
  __m128 v55; // xmm2
  __m128 v56; // xmm1
  __m128 v57; // xmm2
  __m128 v58; // xmm2
  __m128 v59; // xmm1
  __m128 v60; // xmm2
  float v61; // xmm7_4
  struct BamoMPCConstantManagerClientPrincipal *v62; // rbx
  int v63; // eax
  float v64; // xmm0_4
  float v65; // xmm7_4
  __m128 v66; // xmm2
  __m128 v67; // xmm1
  __m128 v68; // xmm1
  __m128 v69; // xmm2
  __m128 v70; // xmm1
  _DWORD v71[2]; // [rsp+38h] [rbp-59h] BYREF
  float v72; // [rsp+40h] [rbp-51h]
  __int64 v73; // [rsp+48h] [rbp-49h]
  std::_Ref_count_base *v74[2]; // [rsp+50h] [rbp-41h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  __int64 v76; // [rsp+F8h] [rbp+67h]
  float v77; // [rsp+108h] [rbp+77h]
  float v78; // [rsp+10Ch] [rbp+7Bh]
  int v79; // [rsp+110h] [rbp+7Fh] BYREF
  float v80; // [rsp+114h] [rbp+83h]

  v73 = -2LL;
  v4 = 0;
  *((_DWORD *)this + 1262) = *((_DWORD *)a2 + 179);
  v5 = *((_DWORD *)a2 + 187);
  *((_DWORD *)this + 1272) = *((_DWORD *)a2 + 186);
  *((_DWORD *)this + 1273) = v5;
  *((_DWORD *)this + 1263) = *((_DWORD *)a2 + 182) & *((_DWORD *)a2 + 181);
  if ( (*((_BYTE *)a2 + 728) & 4) == 0 || (v6 = 1, *((_BYTE *)this + 5584)) )
    v6 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 629),
    v6,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 39),
    *((float *)a2 + 40),
    *((float *)a2 + 54));
  if ( *((_BYTE *)a2 + 771) )
  {
    v8 = *((float *)a2 + 190) - *((float *)this + 1264);
    v9 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v7);
      __debugbreak();
    }
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 48LL))((char *)this + 24);
    *((float *)this + 1264) = (float)(MPCConstantManager::GetStaticConstant<float>(
                                        (__int64)v9,
                                        v10,
                                        L"TriggerSmoothingFactor").m128_f32[0]
                                    * v8)
                            + *((float *)this + 1264);
  }
  else
  {
    *((_DWORD *)this + 1264) = 0;
  }
  if ( (*((_BYTE *)this + 5052) & 8) == 0 || (v11 = 1, *((_BYTE *)this + 5584)) )
    v11 = 0;
  *((_BYTE *)this + 5578) = v11;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 624), v11, *((_QWORD *)a2 + 2));
  if ( *(_BYTE *)(*((_QWORD *)this + 624) + 10LL) )
  {
    v13 = (volatile signed __int32 *)v74[1];
LABEL_18:
    v14 = 1;
    goto LABEL_19;
  }
  v12 = *((_QWORD *)this + 629);
  *(_OWORD *)v74 = 0LL;
  v13 = *(volatile signed __int32 **)(v12 + 24);
  if ( v13 )
  {
    _InterlockedIncrement(v13 + 2);
    v13 = *(volatile signed __int32 **)(v12 + 24);
  }
  v74[0] = *(std::_Ref_count_base **)(v12 + 16);
  v74[1] = (std::_Ref_count_base *)v13;
  v4 = 1;
  if ( *((_BYTE *)v74[0] + 10) )
    goto LABEL_18;
  v14 = 0;
LABEL_19:
  if ( (v4 & 1) != 0 && v13 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  if ( v14 )
    MPCSixDofProcessor::ResetRayLength(this);
  v15 = *((_DWORD *)a2 + 182) & 0x40;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 627), v15 != 0, *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 626), v15 == 0, *((_QWORD *)a2 + 2));
  v16 = 0;
  if ( *((_BYTE *)this + 4644) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 626) + 9LL) )
      *((_BYTE *)this + 4644) = 0;
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 627) + 9LL) )
  {
    *((_BYTE *)this + 4644) = 1;
    v16 = 1;
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 628), *((_BYTE *)this + 4644), *((_QWORD *)a2 + 2));
  if ( v16 )
  {
    v18 = *((_DWORD *)a2 + 186);
    v19 = *((_DWORD *)a2 + 187);
    *((_DWORD *)this + 1268) = v18;
    *((_DWORD *)this + 1269) = v19;
    *((_DWORD *)this + 1274) = v18;
    *((_DWORD *)this + 1275) = v19;
    *((_DWORD *)this + 1160) = 2;
    *((_QWORD *)this + 638) = 0LL;
    *((_QWORD *)this + 639) = 0LL;
    *(_QWORD *)((char *)this + 5164) = 0LL;
  }
  if ( *((_BYTE *)this + 4644) )
  {
    v20 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v17);
      __debugbreak();
    }
    v21 = (char *)this + 24;
    v22 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 48LL))((char *)this + 24);
    *((float *)this + 1268) = (float)((float)(*((float *)this + 1272) - *((float *)this + 1268))
                                    * MPCConstantManager::GetStaticConstant<float>(
                                        (__int64)v20,
                                        v22,
                                        L"TouchpadAxesSmoothingFactor").m128_f32[0])
                            + *((float *)this + 1268);
    v24 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v23);
      __debugbreak();
    }
    v25 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v21 + 48LL))((char *)this + 24);
    v26 = (float)((float)(*((float *)this + 1273) - *((float *)this + 1269))
                * MPCConstantManager::GetStaticConstant<float>((__int64)v24, v25, L"TouchpadAxesSmoothingFactor").m128_f32[0])
        + *((float *)this + 1269);
    *((float *)this + 1269) = v26;
    v27 = v26 - *((float *)this + 1271);
    *((float *)this + 1276) = *((float *)this + 1268) - *((float *)this + 1270);
    *((float *)this + 1277) = v27;
    v28 = v26 - *((float *)this + 1275);
    v29 = *((float *)this + 1268) - *((float *)this + 1274);
    *(float *)&v76 = v29;
    *((float *)&v76 + 1) = v28;
    v31 = sqrtf_0((float)(v29 * v29) + (float)(v28 * v28));
    if ( v6 )
    {
      v32 = 3;
      *((_DWORD *)this + 1160) = 3;
    }
    else
    {
      v32 = *((_DWORD *)this + 1160);
    }
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 && !*((_BYTE *)this + 4644) )
            *((_DWORD *)this + 1160) = 2;
        }
        else
        {
          v35 = (double)(*(_DWORD *)(*((_QWORD *)this + 627) + 32LL) - *(_DWORD *)(*((_QWORD *)this + 627) + 16LL))
              / (double)(int)qword_1801E0BE0;
          v36 = MPCConstantManager::s_instance;
          if ( !MPCConstantManager::s_instance )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v30);
            __debugbreak();
          }
          v37 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v21 + 48LL))((char *)this + 24);
          if ( v35 > MPCConstantManager::GetStaticConstant<float>((__int64)v36, v37, L"TouchpadRailsTimeoutSeconds").m128_f32[0] )
          {
            v39 = MPCConstantManager::s_instance;
            if ( !MPCConstantManager::s_instance )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                41LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                v38);
              __debugbreak();
            }
            v40 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v21 + 48LL))((char *)this + 24);
            if ( v31 > MPCConstantManager::GetStaticConstant<float>(
                         (__int64)v39,
                         v40,
                         L"TouchpadRailsMinDistanceTraveled").m128_f32[0] )
            {
              v42 = sqrtf_0(
                      (float)(*((float *)this + 1274) * *((float *)this + 1274))
                    + (float)(*((float *)this + 1275) * *((float *)this + 1275)));
              v43 = MPCConstantManager::s_instance;
              if ( !MPCConstantManager::s_instance )
              {
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  41LL,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                  v41);
                __debugbreak();
              }
              v44 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v21 + 48LL))((char *)this + 24);
              v46 = MPCConstantManager::GetStaticConstant<float>((__int64)v43, v44, L"TouchpadRailsMinDistance").m128_f32[0];
              v47 = MPCConstantManager::s_instance;
              if ( v42 <= v46 )
              {
                if ( !MPCConstantManager::s_instance )
                {
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    41LL,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                    v45);
                  __debugbreak();
                }
                v48 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v21 + 48LL))((char *)this + 24);
                v49 = L"TouchpadRailsDirectionDegrees";
              }
              else
              {
                v76 = *((_QWORD *)this + 637);
                if ( !MPCConstantManager::s_instance )
                {
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    41LL,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                    v45);
                  __debugbreak();
                }
                v48 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v21 + 48LL))((char *)this + 24);
                v49 = L"TouchpadRailsPressDegrees";
              }
              v50 = MPCConstantManager::GetStaticConstant<float>((__int64)v47, v48, v49).m128_f32[0];
              v51 = !IsPointInHorizontalQuadrant(v50 * 0.0174532925199433, v76);
              *((_DWORD *)this + 1160) = v51;
              if ( v51 )
              {
                v79 = 0;
                v80 = v31;
              }
              else
              {
                *(float *)v71 = v31;
                v71[1] = 0;
              }
              v52 = &v79;
              if ( !v51 )
                v52 = v71;
              *((_QWORD *)this + 638) = *(_QWORD *)v52;
              if ( v51 && v51 )
                v29 = v28;
              if ( v29 < 0.0 )
              {
                v53 = *((float *)this + 1277) * -1.0;
                *((float *)this + 1276) = *((float *)this + 1276) * -1.0;
                *((float *)this + 1277) = v53;
              }
            }
          }
        }
      }
      else
      {
        *((_DWORD *)this + 1276) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 1277) = 0;
    }
  }
  else
  {
    *((_QWORD *)this + 638) = 0LL;
  }
  if ( sqrtf_0(
         (float)(*((float *)this + 1277) * *((float *)this + 1277))
       + (float)(*((float *)this + 1276) * *((float *)this + 1276))) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 628) + 9LL) )
    {
      v55 = (__m128)*((unsigned __int64 *)this + 639);
      v56 = _mm_mul_ps(v55, v55);
      v56.m128_f32[0] = v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0];
      v57 = _mm_div_ps(v55, _mm_sqrt_ps(_mm_shuffle_ps(v56, v56, 0)));
      v77 = v57.m128_f32[0];
      v78 = _mm_shuffle_ps(v57, v57, 85).m128_f32[0];
      v58 = (__m128)*((unsigned __int64 *)this + 638);
      v59 = _mm_mul_ps(v58, v58);
      v59.m128_f32[0] = v59.m128_f32[0] + _mm_shuffle_ps(v59, v59, 85).m128_f32[0];
      v60 = _mm_div_ps(v58, _mm_sqrt_ps(_mm_shuffle_ps(v59, v59, 0)));
      v61 = _mm_shuffle_ps(v60, v60, 85).m128_f32[0] - v78;
      v62 = MPCConstantManager::s_instance;
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v54);
        __debugbreak();
      }
      v63 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 48LL))((char *)this + 24);
      v64 = MPCConstantManager::GetStaticConstant<float>((__int64)v62, v63, L"TouchpadDeltaSmoothingFactor").m128_f32[0];
      v65 = (float)(v61 * v64) + *((float *)this + 1279);
      *((float *)this + 1278) = (float)((float)(v60.m128_f32[0] - v77) * v64) + *((float *)this + 1278);
      *((float *)this + 1279) = v65;
    }
    else
    {
      v66 = (__m128)*((unsigned __int64 *)this + 638);
      v67 = _mm_mul_ps(v66, v66);
      v67.m128_f32[0] = v67.m128_f32[0] + _mm_shuffle_ps(v67, v67, 85).m128_f32[0];
      v68 = _mm_div_ps(v66, _mm_sqrt_ps(_mm_shuffle_ps(v67, v67, 0)));
      *((_QWORD *)this + 639) = _mm_unpacklo_ps(v68, _mm_shuffle_ps(v68, v68, 85)).m128_u64[0];
    }
  }
  v69 = (__m128)*((unsigned int *)this + 1265);
  v69.m128_f32[0] = (float)(v69.m128_f32[0] * *((float *)this + 1285)) + *((float *)this + 1282);
  v70 = (__m128)*((unsigned int *)this + 1265);
  v70.m128_f32[0] = (float)(v70.m128_f32[0] * *((float *)this + 1286)) + *((float *)this + 1283);
  v72 = (float)(*((float *)this + 1265) * *((float *)this + 1287)) + *((float *)this + 1284);
  *((_QWORD *)this + 644) = _mm_unpacklo_ps(v69, v70).m128_u64[0];
  *((float *)this + 1290) = v72;
  *((_QWORD *)this + 635) = *((_QWORD *)this + 634);
}
