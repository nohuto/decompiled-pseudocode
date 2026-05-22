/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800FF50C
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800FF370 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

void __fastcall MPCClickerProcessor::ProcessPoints(
        MPCClickerProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  struct IMPCInputProviderBase *v11; // rsi
  float v12; // xmm6_4
  unsigned int **Instance; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  const char *v17; // r9
  float v18; // xmm6_4
  unsigned int **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // r9
  float v24; // xmm8_4
  float v25; // xmm13_4
  float v26; // xmm6_4
  unsigned int **v27; // rax
  struct MPCHolographicInputManager *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  const char *v32; // r9
  unsigned int **v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  const char *v37; // r9
  unsigned int **v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  const char *v42; // r9
  unsigned int **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  const char *v47; // r9
  float v48; // xmm0_4
  float v49; // xmm1_4
  struct MPCHolographicInputManager *v50; // rax
  float v51; // xmm3_4
  float v52; // xmm5_4
  __m128 v53; // xmm6
  float v54; // xmm4_4
  float v55; // xmm0_4
  __m128 v56; // xmm2
  float v57; // xmm5_4
  unsigned int **v58; // rax
  __m128 v59; // xmm0
  __m128 v60; // xmm2
  __m128 v61; // xmm1
  float v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  const char *v66; // r9
  unsigned int **v67; // rax
  __m128 v68; // xmm0
  __m128 v69; // xmm3
  __m128 v70; // xmm2
  __m128 v71; // xmm0
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  const char *v75; // r9
  unsigned int **v76; // rax
  __m128 v77; // xmm0
  __m128 v78; // xmm4
  __m128 v79; // xmm0
  __m128 v80; // xmm2
  __m128 v81; // xmm7
  __m128 v82; // xmm1
  float v83; // eax
  __m128 v84; // xmm0
  float v85; // xmm5_4
  float v86; // xmm6_4
  struct MPCHolographicInputManager *v87; // rax
  __m128 v88; // xmm7
  __m128 v89; // xmm5
  __int64 v90; // xmm0_8
  float v91; // xmm2_4
  float v92; // [rsp+30h] [rbp-D8h]
  _BYTE v93[1344]; // [rsp+38h] [rbp-D0h] BYREF
  float v94; // [rsp+578h] [rbp+470h]
  float v95; // [rsp+57Ch] [rbp+474h]
  float v96; // [rsp+580h] [rbp+478h]
  float v97; // [rsp+588h] [rbp+480h]
  float v98; // [rsp+58Ch] [rbp+484h]
  float v99; // [rsp+590h] [rbp+488h]
  float v100; // [rsp+598h] [rbp+490h]
  float v101; // [rsp+59Ch] [rbp+494h]
  float v102; // [rsp+5A0h] [rbp+498h]
  float v103; // [rsp+5A8h] [rbp+4A0h]
  float v104; // [rsp+5ACh] [rbp+4A4h]
  float v105; // [rsp+5B0h] [rbp+4A8h]

  v4 = *((_BYTE *)this + 3792) == 0;
  v7 = (float)(*((float *)a2 + 287) + *((float *)this + 943)) * 0.5;
  v8 = (float)(*((float *)a2 + 288) + *((float *)this + 944)) * 0.5;
  v9 = 0.0;
  v10 = 0.0;
  *((float *)this + 943) = v7;
  *((float *)this + 944) = v8;
  if ( !v4 )
  {
    v10 = v7 - *((float *)this + 945);
    v9 = v8 - *((float *)this + 946);
  }
  v11 = (MPCClickerProcessor *)((char *)this + 24);
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7 - 0.0)) & _xmm);
  Instance = (unsigned int **)MPCConstantManager::GetInstance((__int64)this, (__int64)a2, a3, a4);
  if ( MPCConstantManager::GetConstant<float>(Instance, v11, L"DeadZoneAngle").m128_f32[0] > v12 )
    v10 = 0.0;
  v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 944) - 0.0)) & _xmm);
  v19 = (unsigned int **)MPCConstantManager::GetInstance(v15, v14, v16, v17);
  if ( MPCConstantManager::GetConstant<float>(v19, v11, L"DeadZoneAngle").m128_f32[0] > v18 )
    v9 = 0.0;
  v24 = 0.0;
  if ( *((_BYTE *)a2 + 1210) )
  {
    if ( (*((_BYTE *)a2 + 1168) & 0x40) != 0 )
    {
      v25 = *((float *)a2 + 297);
      v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - 0.0)) & _xmm);
      v27 = (unsigned int **)MPCConstantManager::GetInstance(v21, v20, v22, v23);
      if ( v26 > MPCConstantManager::GetConstant<float>(v27, v11, L"ThumbStickDeadZone").m128_f32[0] )
      {
        v24 = (float)(v25 + *((float *)this + 947)) * 0.5;
        *((float *)this + 947) = v24;
      }
    }
  }
  v28 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v93, v28, 0x710uLL);
  *((_DWORD *)this + 941) = *((_BYTE *)a2 + 1144) == 1;
  v33 = (unsigned int **)MPCConstantManager::GetInstance(v30, v29, v31, v32);
  *((float *)this + 955) = (float)(MPCConstantManager::GetConstant<float>(v33, v11, L"PointScaleFactorXY").m128_f32[0]
                                 * v10)
                         + *((float *)this + 955);
  v38 = (unsigned int **)MPCConstantManager::GetInstance(v35, v34, v36, v37);
  *((float *)this + 956) = (float)(MPCConstantManager::GetConstant<float>(v38, v11, L"PointScaleFactorXY").m128_f32[0]
                                 * v9)
                         + *((float *)this + 956);
  v43 = (unsigned int **)MPCConstantManager::GetInstance(v40, v39, v41, v42);
  v48 = MPCConstantManager::GetConstant<float>(v43, v11, L"PointScaleFactorStick").m128_f32[0];
  v4 = *((_DWORD *)this + 941) == 0;
  v49 = *((float *)this + 957);
  *((_DWORD *)this + 945) = *((_DWORD *)this + 943);
  *((_DWORD *)this + 946) = *((_DWORD *)this + 944);
  *((_BYTE *)this + 3792) = 1;
  *((float *)this + 957) = v49 - (float)(v48 * v24);
  if ( v4 )
  {
    v87 = MPCHolographicInputManager::GetInstance();
    v88 = (__m128)LODWORD(v97);
    v89 = (__m128)LODWORD(v95);
    v90 = *((_QWORD *)v87 + 22);
    LODWORD(v87) = *((_DWORD *)v87 + 46);
    v88.m128_f32[0] = (float)((float)((float)(v97 * *((float *)&v90 + 1)) + (float)(v94 * *(float *)&v90))
                            + (float)(v100 * *(float *)&v87))
                    + v103;
    v89.m128_f32[0] = (float)((float)((float)(v95 * *(float *)&v90) + (float)(v98 * *((float *)&v90 + 1)))
                            + (float)(v101 * *(float *)&v87))
                    + v104;
    v91 = (float)((float)((float)(v96 * *(float *)&v90) + (float)(v99 * *((float *)&v90 + 1)))
                + (float)(v102 * *(float *)&v87))
        + v105;
    *((_QWORD *)this + 476) = _mm_unpacklo_ps(v88, v89).m128_u64[0];
    *((float *)this + 954) = v91;
  }
  else if ( *((_DWORD *)this + 942) )
  {
    v58 = (unsigned int **)MPCConstantManager::GetInstance(v45, v44, v46, v47);
    v59 = MPCConstantManager::GetConstant<float>(v58, v11, L"PointScaleFactorXY");
    v59.m128_f32[0] = v59.m128_f32[0] * v10;
    v60 = v59;
    v59.m128_f32[0] = v59.m128_f32[0] * 0.0;
    v60.m128_f32[0] = v60.m128_f32[0] + *((float *)this + 952);
    v61 = v59;
    v61.m128_f32[0] = v59.m128_f32[0] + *((float *)this + 953);
    v62 = v59.m128_f32[0] + *((float *)this + 954);
    *((_QWORD *)this + 476) = _mm_unpacklo_ps(v60, v61).m128_u64[0];
    *((float *)this + 954) = v62;
    v67 = (unsigned int **)MPCConstantManager::GetInstance(v64, v63, v65, v66);
    v68 = MPCConstantManager::GetConstant<float>(v67, v11, L"PointScaleFactorXY");
    v69 = v68;
    v69.m128_f32[0] = v68.m128_f32[0] * v9;
    v70 = v69;
    v69.m128_f32[0] = (float)(v68.m128_f32[0] * v9) + *((float *)this + 953);
    v70.m128_f32[0] = v70.m128_f32[0] * 0.0;
    v71 = v70;
    v71.m128_f32[0] = v70.m128_f32[0] + *((float *)this + 952);
    v92 = v70.m128_f32[0] + *((float *)this + 954);
    *((_QWORD *)this + 476) = _mm_unpacklo_ps(v71, v69).m128_u64[0];
    *((float *)this + 954) = v92;
    v76 = (unsigned int **)MPCConstantManager::GetInstance(v73, v72, v74, v75);
    v77 = MPCConstantManager::GetConstant<float>(v76, v11, L"PointScaleFactorStick");
    v78 = (__m128)LODWORD(v95);
    v77.m128_f32[0] = v77.m128_f32[0] * v24;
    v79 = _mm_xor_ps(v77, (__m128)_xmm);
    v80 = v79;
    v80.m128_f32[0] = v79.m128_f32[0] * 0.0;
    v81 = (__m128)LODWORD(v94);
    v82 = v80;
    v82.m128_f32[0] = (float)(v79.m128_f32[0] * 0.0) + *((float *)this + 952);
    v80.m128_f32[0] = (float)(v79.m128_f32[0] * 0.0) + *((float *)this + 953);
    v83 = v79.m128_f32[0] + *((float *)this + 954);
    v84 = v82;
    v82.m128_f32[0] = v100;
    v84.m128_u64[0] = _mm_unpacklo_ps(v84, v80).m128_u64[0];
    v80.m128_f32[0] = v96;
    *((_QWORD *)this + 476) = v84.m128_u64[0];
    v84.m128_f32[0] = v97;
    *((float *)this + 954) = v83;
    v85 = *((float *)this + 953);
    v69.m128_i32[0] = *((_DWORD *)this + 952);
    v86 = *((float *)this + 954);
    v81.m128_f32[0] = (float)((float)((float)(v81.m128_f32[0] * v69.m128_f32[0]) + (float)(v84.m128_f32[0] * v85))
                            + (float)(v82.m128_f32[0] * v86))
                    + v103;
    v80.m128_f32[0] = (float)(v80.m128_f32[0] * v69.m128_f32[0]) + (float)(v99 * v85);
    v78.m128_f32[0] = (float)((float)((float)(v78.m128_f32[0] * v69.m128_f32[0]) + (float)(v98 * v85))
                            + (float)(v101 * v86))
                    + v104;
    v82.m128_f32[0] = v102 * v86;
    *(_QWORD *)((char *)this + 3796) = _mm_unpacklo_ps(v81, v78).m128_u64[0];
    *((float *)this + 951) = (float)(v80.m128_f32[0] + v82.m128_f32[0]) + v105;
  }
  else
  {
    v50 = MPCHolographicInputManager::GetInstance();
    *((_QWORD *)this + 476) = *((_QWORD *)v50 + 22);
    *((_DWORD *)this + 954) = *((_DWORD *)v50 + 46);
    v51 = *((float *)this + 953);
    v52 = *((float *)this + 952);
    v53 = (__m128)LODWORD(v51);
    v54 = *((float *)this + 954);
    v55 = v52 * v94;
    v56 = (__m128)LODWORD(v52);
    *((_BYTE *)this + 3792) = 0;
    v53.m128_f32[0] = (float)((float)((float)(v51 * v97) + v55) + (float)(v54 * v100)) + v103;
    v56.m128_f32[0] = (float)((float)((float)(v52 * v95) + (float)(v51 * v98)) + (float)(v54 * v101)) + v104;
    v57 = (float)((float)((float)(v52 * v96) + (float)(v51 * v99)) + (float)(v54 * v102)) + v105;
    *(_QWORD *)((char *)this + 3796) = _mm_unpacklo_ps(v53, v56).m128_u64[0];
    *((float *)this + 951) = v57;
    *(_QWORD *)((char *)this + 3820) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 957) = 0;
  }
  *((_DWORD *)this + 942) = *((_DWORD *)this + 941);
}
