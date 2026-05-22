/*
 * XREFs of ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180083D08
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082828 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800843BC (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084A64 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084B0C (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCHolographicInputManager::UpdateGazeSensorData(
        MPCHolographicInputManager *this,
        struct InputInfo *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  const char *v4; // r9
  float v5; // eax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  float v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    *(_OWORD *)this = *((_OWORD *)a2 + 44);
    *((_OWORD *)this + 1) = *((_OWORD *)a2 + 45);
    *((_OWORD *)this + 2) = *((_OWORD *)a2 + 46);
    *((_OWORD *)this + 3) = *((_OWORD *)a2 + 47);
    if ( !Windows::Foundation::Numerics::invert(this, (MPCHolographicInputManager *)((char *)this + 64), this) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        491LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v4);
      __debugbreak();
    }
    *(_QWORD *)(v2 + 128) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v12 = FLOAT_N1_0;
    *(_DWORD *)(v2 + 136) = 0;
    v5 = v12;
    *(_QWORD *)(v2 + 140) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(float *)(v2 + 148) = v5;
    v6 = Windows::Foundation::Numerics::transform(v11, v2 + 128, v3);
    *(_QWORD *)(v7 + 152) = *(_QWORD *)v6;
    *(_DWORD *)(v7 + 160) = *(_DWORD *)(v6 + 8);
    v9 = Windows::Foundation::Numerics::transform_normal(v11, v8, v7, v8);
    *(_QWORD *)(v10 + 164) = *(_QWORD *)v9;
    *(_DWORD *)(v10 + 172) = *(_DWORD *)(v9 + 8);
  }
}
