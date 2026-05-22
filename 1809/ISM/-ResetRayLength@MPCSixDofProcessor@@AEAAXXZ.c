/*
 * XREFs of ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1800F26C8
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F095C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     sqrtf_0 @ 0x18012DB2F (sqrtf_0.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

void __fastcall MPCSixDofProcessor::ResetRayLength(MPCSixDofProcessor *this)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm8_4
  struct MPCHolographicInputManager *Instance; // rax
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm8_4
  _BYTE v9[1344]; // [rsp+28h] [rbp-E0h] BYREF
  float v10; // [rsp+568h] [rbp+460h]
  float v11; // [rsp+56Ch] [rbp+464h]
  float v12; // [rsp+570h] [rbp+468h]
  float v13; // [rsp+578h] [rbp+470h]
  float v14; // [rsp+57Ch] [rbp+474h]
  float v15; // [rsp+580h] [rbp+478h]
  float v16; // [rsp+588h] [rbp+480h]
  float v17; // [rsp+58Ch] [rbp+484h]
  float v18; // [rsp+590h] [rbp+488h]
  float v19; // [rsp+598h] [rbp+490h]
  float v20; // [rsp+59Ch] [rbp+494h]
  float v21; // [rsp+5A0h] [rbp+498h]

  v2 = *((float *)this + 28);
  v3 = *((float *)this + 29);
  v4 = *((float *)this + 27);
  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v9, Instance, 0x710uLL);
  v6 = (float)((float)(v2 * v13) + (float)(v4 * v10)) + (float)(v3 * v16);
  v7 = (float)((float)((float)((float)(v4 * v11) + (float)(v14 * v2)) + (float)(v3 * v17)) + v20)
     - *((float *)this + 1063);
  v8 = (float)((float)((float)((float)(v4 * v12) + (float)(v15 * v2)) + (float)(v3 * v18)) + v21)
     - *((float *)this + 1064);
  *((float *)this + 1045) = sqrtf_0(
                              (float)((float)((float)((float)(v6 + v19) - *((float *)this + 1062))
                                            * (float)((float)(v6 + v19) - *((float *)this + 1062)))
                                    + (float)(v7 * v7))
                            + (float)(v8 * v8));
}
