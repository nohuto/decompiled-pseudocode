/*
 * XREFs of ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18013195C
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180131EEC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     sqrtf_0 @ 0x180037D4B (sqrtf_0.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084CA4 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCSixDofProcessor::ResetRayLength(MPCSixDofProcessor *this)
{
  float v2; // xmm1_4
  struct MPCHolographicInputManager *Instance; // rax
  float v4[4]; // [rsp+20h] [rbp-E0h] BYREF
  float v5; // [rsp+30h] [rbp-D0h] BYREF
  float v6; // [rsp+34h] [rbp-CCh]
  float v7; // [rsp+38h] [rbp-C8h]
  _OWORD v8[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v9[952]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v10; // [rsp+438h] [rbp+338h]
  __int128 v11; // [rsp+448h] [rbp+348h]
  __int128 v12; // [rsp+458h] [rbp+358h]
  __int128 v13; // [rsp+468h] [rbp+368h]

  v2 = *((float *)this + 28);
  v4[0] = *((float *)this + 27);
  v4[2] = *((float *)this + 29);
  v4[1] = v2;
  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v9, Instance, 0x8F0uLL);
  v8[0] = v10;
  v8[1] = v11;
  v8[2] = v12;
  v8[3] = v13;
  Windows::Foundation::Numerics::transform(&v5, v4, (float *)v8);
  *((float *)this + 1265) = sqrtf_0(
                              (float)((float)((float)(v6 - *((float *)this + 1283))
                                            * (float)(v6 - *((float *)this + 1283)))
                                    + (float)((float)(v5 - *((float *)this + 1282))
                                            * (float)(v5 - *((float *)this + 1282))))
                            + (float)((float)(v7 - *((float *)this + 1284)) * (float)(v7 - *((float *)this + 1284))));
}
