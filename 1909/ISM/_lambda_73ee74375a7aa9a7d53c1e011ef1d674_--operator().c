/*
 * XREFs of _lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator() @ 0x1800365F0
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180089DF8 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x18012DE7C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 */

char __fastcall lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator()(_QWORD *a1, float a2, float a3)
{
  char v3; // bl
  float v5; // xmm6_4
  struct MPCConstantManager *Instance; // rax
  float v7; // xmm6_4
  struct MPCConstantManager *v8; // rax
  float v9; // xmm6_4
  struct MPCConstantManager *v10; // rax
  bool v11; // r15
  float v12; // xmm6_4
  struct MPCConstantManager *v13; // rax
  float v14; // xmm6_4
  struct MPCConstantManager *v15; // rax
  float v16; // xmm6_4
  struct MPCConstantManager *v17; // rax
  bool v18; // r14
  float v19; // xmm6_4
  struct MPCConstantManager *v20; // rax
  float v21; // xmm6_4
  struct MPCConstantManager *v22; // rax
  float v23; // xmm6_4
  struct MPCConstantManager *v24; // rax
  bool v25; // bp
  float v26; // xmm6_4
  struct MPCConstantManager *v27; // rax
  float v28; // xmm6_4
  struct MPCConstantManager *v29; // rax
  float v30; // xmm6_4
  struct MPCConstantManager *v31; // rax
  bool v32; // si
  __int64 v33; // rax
  float v34; // xmm6_4
  struct MPCConstantManager *v35; // rax
  float v36; // xmm6_4
  struct MPCConstantManager *v37; // rax
  float v38; // xmm6_4
  struct MPCConstantManager *v39; // rax
  bool v40; // al

  v3 = 0;
  v11 = 0;
  if ( *(_BYTE *)(*a1 + 101LL) )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(*a1 + 76LL)) & _xmm);
    Instance = MPCConstantManager::GetInstance();
    if ( v5 > (float)(MPCConstantManager::GetConstant<float>(
                        Instance,
                        (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                        L"HomeMaximumAngularVelocity_X")
                    * a3)
      || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(*a1 + 80LL)) & _xmm),
          v8 = MPCConstantManager::GetInstance(),
          v7 > (float)(MPCConstantManager::GetConstant<float>(
                         v8,
                         (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                         L"HomeMaximumAngularVelocity_Y")
                     * a3))
      || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(*a1 + 84LL)) & _xmm),
          v10 = MPCConstantManager::GetInstance(),
          v9 > (float)(MPCConstantManager::GetConstant<float>(
                         v10,
                         (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                         L"HomeMaximumAngularVelocity_Z")
                     * a3)) )
    {
      v11 = 1;
    }
  }
  v18 = 0;
  if ( *(_BYTE *)(*a1 + 100LL) )
  {
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(*a1 + 64LL)) & _xmm);
    v13 = MPCConstantManager::GetInstance();
    if ( v12 > (float)(MPCConstantManager::GetConstant<float>(
                         v13,
                         (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                         L"HomeMaximumLinearVelocity_X")
                     * a2)
      || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(*a1 + 68LL)) & _xmm),
          v15 = MPCConstantManager::GetInstance(),
          v14 > (float)(MPCConstantManager::GetConstant<float>(
                          v15,
                          (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                          L"HomeMaximumLinearVelocity_Y")
                      * a2))
      || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(*a1 + 72LL)) & _xmm),
          v17 = MPCConstantManager::GetInstance(),
          v16 > (float)(MPCConstantManager::GetConstant<float>(
                          v17,
                          (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                          L"HomeMaximumLinearVelocity_Z")
                      * a2)) )
    {
      v18 = 1;
    }
  }
  v25 = 0;
  if ( *(_BYTE *)(*a1 + 101LL) )
  {
    v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a1[2]) & _xmm);
    v20 = MPCConstantManager::GetInstance();
    if ( v19 > (float)(MPCConstantManager::GetConstant<float>(
                         v20,
                         (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                         L"HomeMaximumAngularAcceleration_X")
                     * a3)
      || (v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1[2] + 4LL)) & _xmm),
          v22 = MPCConstantManager::GetInstance(),
          v21 > (float)(MPCConstantManager::GetConstant<float>(
                          v22,
                          (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                          L"HomeMaximumAngularAcceleration_Y")
                      * a3))
      || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1[2] + 8LL)) & _xmm),
          v24 = MPCConstantManager::GetInstance(),
          v23 > (float)(MPCConstantManager::GetConstant<float>(
                          v24,
                          (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                          L"HomeMaximumAngularAcceleration_Z")
                      * a3)) )
    {
      v25 = 1;
    }
  }
  v32 = 0;
  if ( *(_BYTE *)(*a1 + 100LL) )
  {
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a1[3]) & _xmm);
    v27 = MPCConstantManager::GetInstance();
    if ( v26 > (float)(MPCConstantManager::GetConstant<float>(
                         v27,
                         (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                         L"HomeMaximumLinearAcceleration_X")
                     * a2)
      || (v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1[3] + 4LL)) & _xmm),
          v29 = MPCConstantManager::GetInstance(),
          v28 > (float)(MPCConstantManager::GetConstant<float>(
                          v29,
                          (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                          L"HomeMaximumLinearAcceleration_Y")
                      * a2))
      || (v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1[3] + 8LL)) & _xmm),
          v31 = MPCConstantManager::GetInstance(),
          v30 > (float)(MPCConstantManager::GetConstant<float>(
                          v31,
                          (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                          L"HomeMaximumLinearAcceleration_Z")
                      * a2)) )
    {
      v32 = 1;
    }
  }
  v33 = a1[1];
  v40 = 0;
  if ( *(_BYTE *)(v33 + 5577) )
  {
    v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v33 + 5236)) & _xmm);
    v35 = MPCConstantManager::GetInstance();
    if ( v34 > MPCConstantManager::GetConstant<float>(
                 v35,
                 (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                 L"HomeMaximumWeightedDistance_X")
      || (v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1[1] + 5240LL)) & _xmm),
          v37 = MPCConstantManager::GetInstance(),
          v36 > MPCConstantManager::GetConstant<float>(
                  v37,
                  (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                  L"HomeMaximumWeightedDistance_Y"))
      || (v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1[1] + 5244LL)) & _xmm),
          v39 = MPCConstantManager::GetInstance(),
          v38 > MPCConstantManager::GetConstant<float>(
                  v39,
                  (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL),
                  L"HomeMaximumWeightedDistance_Z")) )
    {
      v40 = 1;
    }
  }
  if ( v11 || v18 || v25 || v32 || v40 )
    return 1;
  return v3;
}
