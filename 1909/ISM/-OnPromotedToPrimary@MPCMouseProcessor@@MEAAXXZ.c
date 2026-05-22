/*
 * XREFs of ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x18013B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084A64 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x18012D848 (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

void __fastcall MPCMouseProcessor::OnPromotedToPrimary(MPCMouseProcessor *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v3; // rax
  float *v4; // rax
  float v5; // [rsp+20h] [rbp-E0h] BYREF
  int v6; // [rsp+28h] [rbp-D8h]
  _OWORD v7[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[952]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v9; // [rsp+428h] [rbp+328h]
  __int128 v10; // [rsp+438h] [rbp+338h]
  __int128 v11; // [rsp+448h] [rbp+348h]
  __int128 v12; // [rsp+458h] [rbp+358h]

  Instance = MPCHolographicInputManager::GetInstance();
  *(_QWORD *)((char *)this + 6276) = *((_QWORD *)Instance + 28);
  *((_DWORD *)this + 1571) = *((_DWORD *)Instance + 58);
  v3 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v8, v3, 0x8F0uLL);
  v7[0] = v9;
  v7[1] = v10;
  v7[2] = v11;
  v7[3] = v12;
  v4 = Windows::Foundation::Numerics::transform(&v5, (float *)this + 1569, (float *)v7);
  *((_QWORD *)this + 786) = *(_QWORD *)v4;
  *(float *)&v4 = v4[2];
  v6 = 0;
  *((_DWORD *)this + 1574) = (_DWORD)v4;
  LODWORD(v4) = v6;
  *(_QWORD *)((char *)this + 6300) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 1577) = (_DWORD)v4;
  RayStabilizer::Reset((MPCMouseProcessor *)((char *)this + 384));
  *((_DWORD *)this + 1585) = 1;
}
