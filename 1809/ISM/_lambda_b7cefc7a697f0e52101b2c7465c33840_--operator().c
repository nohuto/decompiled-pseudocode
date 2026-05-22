/*
 * XREFs of _lambda_b7cefc7a697f0e52101b2c7465c33840_::operator() @ 0x1800F016C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 */

char __fastcall lambda_b7cefc7a697f0e52101b2c7465c33840_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  char v6; // di
  double v8; // xmm0_8
  float v9; // xmm6_4
  MPCConstantManager *Instance; // rax
  double v11; // xmm0_8
  float v12; // xmm6_4
  MPCConstantManager *v13; // rax
  double v14; // xmm0_8
  float v15; // xmm6_4
  MPCConstantManager *v16; // rax
  char v17; // r12
  double v18; // xmm0_8
  float v19; // xmm6_4
  MPCConstantManager *v20; // rax
  double v21; // xmm0_8
  float v22; // xmm6_4
  MPCConstantManager *v23; // rax
  double v24; // xmm0_8
  float v25; // xmm6_4
  MPCConstantManager *v26; // rax
  char v27; // r15
  double v28; // xmm0_8
  float v29; // xmm6_4
  MPCConstantManager *v30; // rax
  double v31; // xmm0_8
  float v32; // xmm6_4
  MPCConstantManager *v33; // rax
  double v34; // xmm0_8
  float v35; // xmm6_4
  MPCConstantManager *v36; // rax
  char v37; // r14
  double v38; // xmm0_8
  float v39; // xmm6_4
  MPCConstantManager *v40; // rax
  double v41; // xmm0_8
  float v42; // xmm6_4
  MPCConstantManager *v43; // rax
  double v44; // xmm0_8
  float v45; // xmm6_4
  MPCConstantManager *v46; // rax
  char v47; // bp
  __int64 v48; // rcx
  double v49; // xmm0_8
  float v50; // xmm6_4
  MPCConstantManager *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  const char *v54; // r9
  double v55; // xmm0_8
  float v56; // xmm6_4
  MPCConstantManager *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  const char *v60; // r9
  double v61; // xmm0_8
  float v62; // xmm6_4
  MPCConstantManager *v63; // rax
  char v64; // al

  v6 = 0;
  if ( !*(_BYTE *)(*a1 + 101LL) )
    goto LABEL_6;
  *(_QWORD *)&v8 = COERCE_UNSIGNED_INT64(*(float *)(*a1 + 76LL)) & _xmm;
  v9 = v8;
  Instance = MPCConstantManager::GetInstance((__int64)a1, -a1[1], a3, a4);
  MPCConstantManager::GetConstant<float>(Instance);
  if ( v9 > (float)(*(float *)&v8 * v5) )
    goto LABEL_5;
  *(_QWORD *)&v11 = COERCE_UNSIGNED_INT64(*(float *)(*a1 + 80LL)) & _xmm;
  v12 = v11;
  v13 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4);
  MPCConstantManager::GetConstant<float>(v13);
  if ( v12 > (float)(*(float *)&v11 * v5)
    || (*(_QWORD *)&v14 = COERCE_UNSIGNED_INT64(*(float *)(*a1 + 84LL)) & _xmm,
        v15 = v14,
        v16 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4),
        MPCConstantManager::GetConstant<float>(v16),
        v15 > (float)(*(float *)&v14 * v5)) )
  {
LABEL_5:
    v17 = 1;
  }
  else
  {
LABEL_6:
    v17 = 0;
  }
  if ( !*(_BYTE *)(*a1 + 100LL) )
    goto LABEL_12;
  *(_QWORD *)&v18 = COERCE_UNSIGNED_INT64(*(float *)(*a1 + 64LL)) & _xmm;
  v19 = v18;
  v20 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4);
  MPCConstantManager::GetConstant<float>(v20);
  if ( v19 > (float)(*(float *)&v18 * v4) )
    goto LABEL_11;
  *(_QWORD *)&v21 = COERCE_UNSIGNED_INT64(*(float *)(*a1 + 68LL)) & _xmm;
  v22 = v21;
  v23 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4);
  MPCConstantManager::GetConstant<float>(v23);
  if ( v22 > (float)(*(float *)&v21 * v4)
    || (*(_QWORD *)&v24 = COERCE_UNSIGNED_INT64(*(float *)(*a1 + 72LL)) & _xmm,
        v25 = v24,
        v26 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4),
        MPCConstantManager::GetConstant<float>(v26),
        v25 > (float)(*(float *)&v24 * v4)) )
  {
LABEL_11:
    v27 = 1;
  }
  else
  {
LABEL_12:
    v27 = 0;
  }
  if ( !*(_BYTE *)(*a1 + 101LL) )
    goto LABEL_18;
  *(_QWORD *)&v28 = COERCE_UNSIGNED_INT64(*(float *)a1[2]) & _xmm;
  v29 = v28;
  v30 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4);
  MPCConstantManager::GetConstant<float>(v30);
  if ( v29 > (float)(*(float *)&v28 * v5) )
    goto LABEL_17;
  *(_QWORD *)&v31 = COERCE_UNSIGNED_INT64(*(float *)(a1[2] + 4LL)) & _xmm;
  v32 = v31;
  v33 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4);
  MPCConstantManager::GetConstant<float>(v33);
  if ( v32 > (float)(*(float *)&v31 * v5)
    || (*(_QWORD *)&v34 = COERCE_UNSIGNED_INT64(*(float *)(a1[2] + 8LL)) & _xmm,
        v35 = v34,
        v36 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4),
        MPCConstantManager::GetConstant<float>(v36),
        v35 > (float)(*(float *)&v34 * v5)) )
  {
LABEL_17:
    v37 = 1;
  }
  else
  {
LABEL_18:
    v37 = 0;
  }
  if ( !*(_BYTE *)(*a1 + 100LL) )
    goto LABEL_24;
  *(_QWORD *)&v38 = COERCE_UNSIGNED_INT64(*(float *)a1[3]) & _xmm;
  v39 = v38;
  v40 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4);
  MPCConstantManager::GetConstant<float>(v40);
  if ( v39 > (float)(*(float *)&v38 * v4) )
    goto LABEL_23;
  *(_QWORD *)&v41 = COERCE_UNSIGNED_INT64(*(float *)(a1[3] + 4LL)) & _xmm;
  v42 = v41;
  v43 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4);
  MPCConstantManager::GetConstant<float>(v43);
  if ( v42 > (float)(*(float *)&v41 * v4)
    || (*(_QWORD *)&v44 = COERCE_UNSIGNED_INT64(*(float *)(a1[3] + 8LL)) & _xmm,
        v45 = v44,
        v46 = MPCConstantManager::GetInstance(-a1[1], a2, a3, a4),
        MPCConstantManager::GetConstant<float>(v46),
        v45 > (float)(*(float *)&v44 * v4)) )
  {
LABEL_23:
    v47 = 1;
  }
  else
  {
LABEL_24:
    v47 = 0;
  }
  v48 = a1[1];
  if ( !*(_BYTE *)(v48 + 4704) )
    goto LABEL_30;
  *(_QWORD *)&v49 = COERCE_UNSIGNED_INT64(*(float *)(v48 + 4356)) & _xmm;
  v50 = v49;
  v51 = MPCConstantManager::GetInstance(-v48, a2, a3, a4);
  MPCConstantManager::GetConstant<float>(v51);
  if ( v50 > *(float *)&v49 )
    goto LABEL_29;
  *(_QWORD *)&v55 = COERCE_UNSIGNED_INT64(*(float *)(a1[1] + 4360LL)) & _xmm;
  v56 = v55;
  v57 = MPCConstantManager::GetInstance(-a1[1], v52, v53, v54);
  MPCConstantManager::GetConstant<float>(v57);
  if ( v56 > *(float *)&v55
    || (*(_QWORD *)&v61 = COERCE_UNSIGNED_INT64(*(float *)(a1[1] + 4364LL)) & _xmm,
        v62 = v61,
        v63 = MPCConstantManager::GetInstance(-a1[1], v58, v59, v60),
        MPCConstantManager::GetConstant<float>(v63),
        v62 > *(float *)&v61) )
  {
LABEL_29:
    v64 = 1;
  }
  else
  {
LABEL_30:
    v64 = 0;
  }
  if ( v17 || v27 || v37 || v47 || v64 )
    return 1;
  return v6;
}
