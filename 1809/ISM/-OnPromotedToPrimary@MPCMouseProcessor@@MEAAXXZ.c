/*
 * XREFs of ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1800FD410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1801030B4 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

void __fastcall MPCMouseProcessor::OnPromotedToPrimary(MPCMouseProcessor *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v3; // rax
  __m128 v4; // xmm6
  __m128 v5; // xmm2
  float v6; // xmm1_4
  float v7; // xmm5_4
  _BYTE v8[1344]; // [rsp+38h] [rbp-D0h] BYREF
  float v9; // [rsp+578h] [rbp+470h]
  float v10; // [rsp+57Ch] [rbp+474h]
  float v11; // [rsp+580h] [rbp+478h]
  float v12; // [rsp+588h] [rbp+480h]
  float v13; // [rsp+58Ch] [rbp+484h]
  float v14; // [rsp+590h] [rbp+488h]
  float v15; // [rsp+598h] [rbp+490h]
  float v16; // [rsp+59Ch] [rbp+494h]
  float v17; // [rsp+5A0h] [rbp+498h]
  float v18; // [rsp+5A8h] [rbp+4A0h]
  float v19; // [rsp+5ACh] [rbp+4A4h]
  float v20; // [rsp+5B0h] [rbp+4A8h]

  Instance = MPCHolographicInputManager::GetInstance();
  *(_QWORD *)((char *)this + 4820) = *((_QWORD *)Instance + 22);
  *((_DWORD *)this + 1207) = *((_DWORD *)Instance + 46);
  v3 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v8, v3, 0x710uLL);
  v4 = (__m128)*((unsigned int *)this + 1206);
  v5 = (__m128)*((unsigned int *)this + 1205);
  v6 = *((float *)this + 1207);
  v4.m128_f32[0] = (float)((float)((float)(v4.m128_f32[0] * v12) + (float)(*((float *)this + 1205) * v9))
                         + (float)(v6 * v15))
                 + v18;
  v5.m128_f32[0] = (float)((float)((float)(v5.m128_f32[0] * v10) + (float)(*((float *)this + 1206) * v13))
                         + (float)(v6 * v16))
                 + v19;
  v7 = (float)((float)((float)(*((float *)this + 1205) * v11) + (float)(*((float *)this + 1206) * v14))
             + (float)(v6 * v17))
     + v20;
  *((_QWORD *)this + 604) = _mm_unpacklo_ps(v4, v5).m128_u64[0];
  *((float *)this + 1210) = v7;
  *(_QWORD *)((char *)this + 4844) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 1213) = 0;
  RayStabilizer::Reset((MPCMouseProcessor *)((char *)this + 376));
  *((_DWORD *)this + 1221) = 1;
}
