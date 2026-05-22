/*
 * XREFs of ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800FC538
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800FB750 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1800FA994 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

void __fastcall MPCMouseProcessor::ProcessPoints(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  unsigned int **v8; // rax
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  float v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const char *v16; // r9
  unsigned int **v17; // rax
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  float v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  const char *v26; // r9
  unsigned int **v27; // rax
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  __m128 v30; // xmm2
  __m128 v31; // xmm1
  float v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  const char *v36; // r9
  unsigned int **v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  const char *v41; // r9
  unsigned int **v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  const char *v46; // r9
  unsigned int **v47; // rax
  float v48; // xmm0_4
  bool v49; // zf
  struct MPCHolographicInputManager *v50; // rax
  struct MPCHolographicInputManager *v51; // rax
  __m128 v52; // xmm6
  __m128 v53; // xmm2
  float v54; // xmm1_4
  float v55; // xmm5_4
  float v56[16]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v57[1344]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v58; // [rsp+5B8h] [rbp+4B0h]
  __int128 v59; // [rsp+5C8h] [rbp+4C0h]
  __int128 v60; // [rsp+5D8h] [rbp+4D0h]
  float v61[104]; // [rsp+5E8h] [rbp+4E0h]
  _OWORD v62[4]; // [rsp+788h] [rbp+680h] BYREF

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v57, Instance, 0x710uLL);
  v62[0] = v58;
  v62[1] = v59;
  v62[2] = v60;
  v62[3] = *(_OWORD *)v61;
  MPCMath::OrientToGravity((__int64)v56, (__int64)v62, 0.89999998);
  v8 = (unsigned int **)MPCConstantManager::GetInstance((__int64)this + 40, v5, v6, v7);
  v9 = MPCConstantManager::GetConstant<float>(
         v8,
         (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
         L"MouseParams_PointScaleFactorXY");
  v9.m128_f32[0] = v9.m128_f32[0] * (float)*((int *)this + 1203);
  v10 = v9;
  v11 = v9;
  v10.m128_f32[0] = (float)(v9.m128_f32[0] * v56[0]) + *((float *)this + 1212);
  v11.m128_f32[0] = (float)(v9.m128_f32[0] * v56[1]) + *((float *)this + 1213);
  v12 = (float)(v9.m128_f32[0] * v56[2]) + *((float *)this + 1214);
  *((_QWORD *)this + 606) = _mm_unpacklo_ps(v10, v11).m128_u64[0];
  *((float *)this + 1214) = v12;
  v17 = (unsigned int **)MPCConstantManager::GetInstance(v14, v13, v15, v16);
  v18 = MPCConstantManager::GetConstant<float>(
          v17,
          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
          L"MouseParams_PointScaleFactorXY");
  v18.m128_f32[0] = v18.m128_f32[0] * (float)*((int *)this + 1204);
  v19 = _mm_xor_ps(v18, (__m128)_xmm);
  v20 = v19;
  v21 = v19;
  v20.m128_f32[0] = (float)(v19.m128_f32[0] * v56[4]) + *((float *)this + 1212);
  v21.m128_f32[0] = (float)(v19.m128_f32[0] * v56[5]) + *((float *)this + 1213);
  v22 = (float)(v19.m128_f32[0] * v56[6]) + *((float *)this + 1214);
  *((_QWORD *)this + 606) = _mm_unpacklo_ps(v20, v21).m128_u64[0];
  *((float *)this + 1214) = v22;
  v27 = (unsigned int **)MPCConstantManager::GetInstance(v24, v23, v25, v26);
  v28 = MPCConstantManager::GetConstant<float>(
          v27,
          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
          L"MouseParams_PointScaleFactorWheel");
  v28.m128_f32[0] = v28.m128_f32[0] * (float)*((int *)this + 1206);
  v29 = _mm_xor_ps(v28, (__m128)_xmm);
  v30 = v29;
  v31 = v29;
  v30.m128_f32[0] = (float)(v29.m128_f32[0] * v56[8]) + *((float *)this + 1212);
  v31.m128_f32[0] = (float)(v29.m128_f32[0] * v56[9]) + *((float *)this + 1213);
  v32 = (float)(v29.m128_f32[0] * v56[10]) + *((float *)this + 1214);
  *((_QWORD *)this + 606) = _mm_unpacklo_ps(v30, v31).m128_u64[0];
  *((float *)this + 1214) = v32;
  v37 = (unsigned int **)MPCConstantManager::GetInstance(v34, v33, v35, v36);
  *((float *)this + 1215) = (float)(MPCConstantManager::GetConstant<float>(
                                      v37,
                                      (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
                                      L"MouseParams_PointScaleFactorXY").m128_f32[0]
                                  * (float)*((int *)this + 1203))
                          + *((float *)this + 1215);
  v42 = (unsigned int **)MPCConstantManager::GetInstance(v39, v38, v40, v41);
  *((float *)this + 1216) = *((float *)this + 1216)
                          - (float)(MPCConstantManager::GetConstant<float>(
                                      v42,
                                      (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
                                      L"MouseParams_PointScaleFactorXY").m128_f32[0]
                                  * (float)*((int *)this + 1204));
  v47 = (unsigned int **)MPCConstantManager::GetInstance(v44, v43, v45, v46);
  v48 = MPCConstantManager::GetConstant<float>(
          v47,
          (struct IMPCInputProviderBase *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
          L"MouseParams_PointScaleFactorWheel").m128_f32[0];
  v49 = (*((_BYTE *)this + 4832) & 0x70) == 0;
  *((float *)this + 1217) = (float)(v48 * (float)*((int *)this + 1206)) + *((float *)this + 1217);
  if ( !v49 && !*((_QWORD *)this + 467) )
  {
    v50 = MPCHolographicInputManager::GetInstance();
    *(_QWORD *)((char *)this + 4836) = *((_QWORD *)v50 + 22);
    *((_DWORD *)this + 1211) = *((_DWORD *)v50 + 46);
    v51 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v57, v51, 0x710uLL);
    v52 = (__m128)*((unsigned int *)this + 1210);
    v53 = (__m128)*((unsigned int *)this + 1209);
    v54 = *((float *)this + 1211);
    v52.m128_f32[0] = (float)((float)((float)(v52.m128_f32[0] * *(float *)&v59)
                                    + (float)(*((float *)this + 1209) * *(float *)&v58))
                            + (float)(v54 * *(float *)&v60))
                    + v61[0];
    v53.m128_f32[0] = (float)((float)((float)(v53.m128_f32[0] * *((float *)&v58 + 1))
                                    + (float)(*((float *)this + 1210) * *((float *)&v59 + 1)))
                            + (float)(v54 * *((float *)&v60 + 1)))
                    + v61[1];
    v55 = (float)((float)((float)(*((float *)this + 1209) * *((float *)&v58 + 2))
                        + (float)(*((float *)this + 1210) * *((float *)&v59 + 2)))
                + (float)(v54 * *((float *)&v60 + 2)))
        + v61[2];
    *((_QWORD *)this + 606) = _mm_unpacklo_ps(v52, v53).m128_u64[0];
    *((float *)this + 1214) = v55;
    *(_QWORD *)((char *)this + 4860) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1217) = 0;
  }
}
