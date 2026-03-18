/*
 * XREFs of ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x180221C94
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801F4360 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     GetIndividualScales @ 0x1801F3CD8 (GetIndividualScales.c)
 *     GetInverse @ 0x18022108C (GetInverse.c)
 *     IsEqualMatrix @ 0x180221218 (IsEqualMatrix.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::UpdateTransform(
        CInteractionContextTransformHelper *this,
        const struct D2D1::Matrix3x2F *a2,
        bool *a3)
{
  int Inverse; // r8d
  unsigned __int64 v6; // xmm1_8
  __int128 v7; // xmm0
  unsigned __int64 v8; // xmm1_8
  __int64 v9; // xmm0_8
  float v10; // xmm6_4
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  unsigned __int64 v13; // xmm0_8
  unsigned __int64 v14; // xmm7_8
  float v15; // xmm4_4
  __int128 v16; // xmm5
  __int64 v17; // xmm4_8
  __int128 v18; // xmm5
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  unsigned __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  unsigned __int64 v26; // xmm1_8
  float v28; // [rsp+28h] [rbp-69h] BYREF
  float v29; // [rsp+2Ch] [rbp-65h] BYREF
  __int128 v30; // [rsp+30h] [rbp-61h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-51h]
  __int128 v32; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-39h]
  __int128 v34; // [rsp+68h] [rbp-29h] BYREF
  __int64 v35; // [rsp+78h] [rbp-19h]
  __int128 v36; // [rsp+80h] [rbp-11h] BYREF
  __int64 v37; // [rsp+90h] [rbp-1h]
  __int128 v38; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v39; // [rsp+A8h] [rbp+17h]

  if ( !IsEqualMatrix((float *)a2, (float *)this) )
  {
    v6 = *((_QWORD *)a2 + 2);
    v38 = *(_OWORD *)a2;
    v39 = v6;
    Inverse = GetInverse((float *)&v38, (__int64)&v34);
    if ( Inverse >= 0 )
    {
      v7 = *(_OWORD *)a2;
      v29 = 1.0;
      v8 = *((_QWORD *)a2 + 2);
      v38 = v7;
      v28 = 1.0;
      v39 = v8;
      Inverse = GetIndividualScales((__int64)&v38, &v29, &v28);
      if ( Inverse >= 0 )
      {
        v9 = *((_QWORD *)a2 + 2);
        v38 = *(_OWORD *)a2;
        v10 = 1.0 / v29;
        v11 = (__m128)(unsigned int)v9;
        v12 = (__m128)HIDWORD(v9);
        *((float *)&v38 + 2) = *((float *)&v38 + 2) * (float)(1.0 / v29);
        *(float *)&v38 = *(float *)&v38 * (float)(1.0 / v29);
        *((float *)&v38 + 1) = *((float *)&v38 + 1) * (float)(1.0 / v28);
        v11.m128_f32[0] = *(float *)&v9 * (float)(1.0 / v29);
        *((float *)&v38 + 3) = *((float *)&v38 + 3) * (float)(1.0 / v28);
        v12.m128_f32[0] = *((float *)&v9 + 1) * (float)(1.0 / v28);
        v13 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        v14 = v13;
        v39 = v13;
        Inverse = GetInverse((float *)&v38, (__int64)&v36);
        if ( Inverse >= 0 )
        {
          DWORD2(v38) = 0;
          *((float *)&v38 + 3) = v15;
          *(_QWORD *)&v38 = LODWORD(v10);
          v31 = v13;
          v32 = v16;
          *(float *)&v39 = 0.0 - (float)(v10 * 0.0);
          *((float *)&v39 + 1) = 0.0 - (float)(v15 * 0.0);
          v33 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          Inverse = GetInverse((float *)&v32, (__int64)&v30);
          if ( Inverse >= 0 )
          {
            *(_OWORD *)this = *(_OWORD *)a2;
            v19 = v34;
            *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
            v20 = v35;
            *(_OWORD *)((char *)this + 24) = v19;
            v21 = v36;
            *((_QWORD *)this + 5) = v20;
            v22 = v37;
            *(_OWORD *)((char *)this + 72) = v21;
            v23 = v38;
            *((_QWORD *)this + 11) = v22;
            v24 = v39;
            *((_OWORD *)this + 6) = v23;
            v25 = v30;
            *((_QWORD *)this + 14) = v24;
            v26 = v31;
            *((_OWORD *)this + 9) = v25;
            *((_OWORD *)this + 3) = v18;
            *(_OWORD *)((char *)this + 120) = v18;
            *((_QWORD *)this + 20) = v26;
            *((_QWORD *)this + 8) = v14;
            *((_QWORD *)this + 17) = v17;
          }
        }
      }
    }
  }
  return (unsigned int)Inverse;
}
