/*
 * XREFs of ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x18012D4C4
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CB00 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     fmodf_0 @ 0x180037D33 (fmodf_0.c)
 *     sqrtf_0 @ 0x180037D4B (sqrtf_0.c)
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x18012CAB4 (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x18012DB14 (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1801408DC (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

bool __fastcall RayStabilizer::ProcessHistory(
        RayStabilizer *this,
        __int64 a2,
        const struct RayStabilizer::TargetingData *a3,
        struct RayStabilizer::ProcessedHistoryData *a4)
{
  __int64 v4; // rdi
  float v9; // xmm11_4
  __int64 v10; // r14
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm7_4
  float v25; // xmm1_4
  float v26; // xmm8_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  bool result; // al
  float v30; // xmm0_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  float v33; // xmm10_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm9_4
  float v41; // xmm0_4
  __int64 v42; // [rsp+28h] [rbp-99h] BYREF
  __int64 v43; // [rsp+30h] [rbp-91h]
  __int64 v44; // [rsp+38h] [rbp-89h] BYREF
  int v45; // [rsp+40h] [rbp-81h]
  __int128 v46; // [rsp+48h] [rbp-79h] BYREF
  __int64 v47; // [rsp+58h] [rbp-69h]
  __int128 v48; // [rsp+68h] [rbp-59h] BYREF
  __int64 v49; // [rsp+78h] [rbp-49h]
  float v50; // [rsp+88h] [rbp-39h] BYREF
  float v51; // [rsp+8Ch] [rbp-35h]
  float v52; // [rsp+90h] [rbp-31h]
  __int64 v53; // [rsp+94h] [rbp-2Dh]
  int v54; // [rsp+9Ch] [rbp-25h]
  float v55; // [rsp+A0h] [rbp-21h]
  float v56; // [rsp+A4h] [rbp-1Dh]

  v4 = *((_QWORD *)this + 3);
  *((_DWORD *)a4 + 6) = 0;
  *((_DWORD *)a4 + 2) = 0;
  *((_DWORD *)a4 + 14) = 0;
  *((_DWORD *)a4 + 10) = 0;
  *(_DWORD *)a4 = 0x800000;
  v9 = 0.0;
  *((_DWORD *)a4 + 4) = 0x800000;
  *((_DWORD *)a4 + 8) = 0x800000;
  *((_DWORD *)a4 + 12) = 0x800000;
  *((_DWORD *)a4 + 1) = 2139095039;
  *((_DWORD *)a4 + 5) = 2139095039;
  *((_DWORD *)a4 + 9) = 2139095039;
  *((_DWORD *)a4 + 13) = 2139095039;
  v10 = v4 + *((_QWORD *)this + 4);
  while ( v4 != v10 )
  {
    RayStabilizationResult::GetAtStep(
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v4 & (*((_QWORD *)this + 2) - 1LL))),
      &v46,
      a2);
    v48 = v46;
    v49 = v47;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v48, &v50) )
    {
      v9 = v9 + 1.0;
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)(v51 - *((float *)a3 + 1))
                                                                      * (float)(v51 - *((float *)a3 + 1)))
                                                              + (float)((float)(v50 - *(float *)a3)
                                                                      * (float)(v50 - *(float *)a3)))
                                                      + (float)((float)(v52 - *((float *)a3 + 2))
                                                              * (float)(v52 - *((float *)a3 + 2))))) & _xmm);
      v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fmodf_0(*((float *)a3 + 6) - v55, 360.0)) & _xmm);
      v13 = fmodf_0(*((float *)a3 + 7) - v56, 360.0);
      LODWORD(v43) = *((_DWORD *)a3 + 5);
      v45 = v54;
      v42 = *(_QWORD *)((char *)a3 + 12);
      v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm);
      v44 = v53;
      v15 = RayStabilizer::DeltaAngle((float *)&v44, (float *)&v42);
      v16 = fminf(*(float *)a4, v11);
      v17 = fmaxf(*((float *)a4 + 1), v11);
      v18 = v11 + *((float *)a4 + 2);
      v19 = fminf(*((float *)a4 + 12), v14);
      *(float *)a4 = v16;
      v20 = fminf(*((float *)a4 + 8), v12);
      *((float *)a4 + 1) = v17;
      v21 = *((float *)a4 + 9);
      *((float *)a4 + 12) = v19;
      v22 = fmaxf(v21, v12);
      v23 = *((float *)a4 + 4);
      v24 = v12 + *((float *)a4 + 10);
      *((float *)a4 + 8) = v20;
      v25 = fmaxf(*((float *)a4 + 13), v14);
      *((float *)a4 + 2) = v18;
      v26 = v14 + *((float *)a4 + 14);
      *((float *)a4 + 9) = v22;
      *((float *)a4 + 10) = v24;
      *((float *)a4 + 4) = fminf(v23, v15);
      *((float *)a4 + 13) = v25;
      v27 = fmaxf(*((float *)a4 + 5), v15);
      *((float *)a4 + 14) = v26;
      v28 = v15 + *((float *)a4 + 6);
      *((float *)a4 + 5) = v27;
      *((float *)a4 + 6) = v28;
    }
    ++v4;
  }
  if ( v9 == 0.0 )
    return 0;
  v30 = *(float *)a4;
  v31 = *((float *)a4 + 10) / v9;
  v32 = *((float *)a4 + 14) / v9;
  v33 = *((float *)a4 + 6) / v9;
  *((float *)a4 + 10) = v31;
  *((float *)a4 + 14) = v32;
  *((float *)a4 + 6) = v33;
  v34 = sqrtf_0(v30);
  v35 = *((float *)a4 + 1);
  *(float *)a4 = v34;
  v36 = sqrtf_0(v35);
  v37 = *((float *)a4 + 2) / v9;
  *((float *)a4 + 1) = v36;
  v38 = sqrtf_0(v37);
  *((float *)a4 + 2) = v38;
  result = 1;
  *((float *)a4 + 3) = (float)(v38 + v38) + (float)(v36 - v34);
  v39 = *((float *)a4 + 13) - *((float *)a4 + 12);
  *((float *)a4 + 11) = (float)(v31 + v31) + (float)(*((float *)a4 + 9) - *((float *)a4 + 8));
  v40 = (float)(v32 + v32) + v39;
  v41 = *((float *)a4 + 5) - *((float *)a4 + 4);
  *((float *)a4 + 15) = v40;
  *((float *)a4 + 7) = (float)(v33 + v33) + v41;
  return result;
}
