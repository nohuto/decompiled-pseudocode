/*
 * XREFs of ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x18021B548
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022FAAC (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18001410C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x1800CF464 (-make_float4x4_scale@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@0@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x18021BFA8 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 */

void __fastcall CMILMatrix::Set2DAffineMatrix(
        CMILMatrix *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        float a3,
        const struct Windows::Foundation::Numerics::float2 **a4,
        const struct Windows::Foundation::Numerics::float2 *a5,
        const struct Windows::Foundation::Numerics::float2 *a6)
{
  __int64 v8; // rdx
  __int128 *v9; // rax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+34h] [rbp-D4h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh]
  _QWORD v16[3]; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+5Ch] [rbp-ACh]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h]
  int v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+74h] [rbp-94h]
  const struct Windows::Foundation::Numerics::float2 *v22; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+84h] [rbp-84h]
  _OWORD v25[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v26[4]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v27[64]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v28[80]; // [rsp+148h] [rbp+40h] BYREF
  const struct Windows::Foundation::Numerics::float2 *v29; // [rsp+1C8h] [rbp+C0h]

  v15 = 0;
  v13 = 1065353216;
  v14 = *(_QWORD *)a5;
  v12 = *(_QWORD *)a2;
  Windows::Foundation::Numerics::make_float4x4_scale((__int64)v26, (float *)&v12, (float *)&v14);
  v13 = 0;
  v12 = *(_QWORD *)a6;
  Windows::Foundation::Numerics::make_float4x4_rotation_z(v25, v8, &v12);
  v29 = *a4;
  v21 = 0;
  v23 = 0;
  v22 = v29;
  HIDWORD(v16[0]) = 1065353216;
  v16[1] = 0LL;
  v16[2] = 0LL;
  v17 = 1065353216;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 1065353216;
  v24 = 1065353216;
  v9 = Windows::Foundation::Numerics::operator*((__int64)v27, v26, v25);
  v10 = Windows::Foundation::Numerics::operator*((__int64)v28, v9, (_QWORD *)((char *)v16 + 4));
  *(_OWORD *)this = *v10;
  *((_OWORD *)this + 1) = v10[1];
  *((_OWORD *)this + 2) = v10[2];
  v11 = v10[3];
  *((_WORD *)this + 32) = 0x4000;
  *((_OWORD *)this + 3) = v11;
}
