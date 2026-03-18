/*
 * XREFs of ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C01235B0
 * Callers:
 *     <none>
 * Callees:
 *     efSin @ 0x1C0001040 (efSin.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C002BC24 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C002C770 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x1C008C300 (-eqLength@EFLOAT@@QEAA-AV1@AEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bComputeUnits(
        __m128 **this,
        int a2,
        struct POINTFL *a3,
        struct EFLOAT *a4,
        struct EFLOAT *a5)
{
  unsigned int v5; // ebx
  __m128 *v8; // r8
  __int32 v11; // esi
  int v12; // r10d
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  char v16; // dl
  float v17; // xmm4_4
  int v18; // xmm5_4
  __m128i v19; // xmm0
  __m128i v20; // xmm6
  float *v21; // rax
  float v23[8]; // [rsp+20h] [rbp-40h] BYREF
  int v24; // [rsp+90h] [rbp+30h] BYREF
  float v25; // [rsp+98h] [rbp+38h] BYREF

  v5 = 0;
  v8 = *this;
  v25 = 0.0;
  v11 = v8[2].m128_i32[0];
  v12 = abs32(a2);
  if ( (v11 & 1) != 0 && v12 == 900 * (v12 / 900) )
  {
    if ( ((v12 / 900) & 1) != 0 )
    {
      v13 = v8->m128_f32[3];
      v14 = 0.0;
      v23[0] = 0.0;
      v15 = FLOAT_1_0;
      v23[1] = FLOAT_1_0;
    }
    else
    {
      v13 = v8->m128_f32[0];
      v15 = 0.0;
      v14 = FLOAT_1_0;
      *(_QWORD *)v23 = LODWORD(FLOAT_1_0);
    }
    v25 = v13;
    if ( EFLOAT::bIsZero((EFLOAT *)&v25) )
      return v5;
    if ( (v16 & 2) != 0 )
      LODWORD(v13) ^= _xmm;
    if ( v17 <= v13 )
      goto LABEL_16;
    LODWORD(v23[0]) = LODWORD(v14) ^ _xmm;
    LODWORD(v13) ^= _xmm;
    LODWORD(v15) = v18 ^ _xmm;
  }
  else
  {
    v19 = (__m128i)COERCE_UNSIGNED_INT((float)v12);
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 / 10.0;
    v20 = v19;
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + *(float *)&FP_90_0;
    LODWORD(v23[0]) = efSin((unsigned int)_mm_cvtsi128_si32(v19));
    LODWORD(v23[1]) = efSin((unsigned int)_mm_cvtsi128_si32(v20));
    if ( (v11 & 2) == 0 && !(unsigned int)EXFORMOBJ::bXform(this, (struct VECTORFL *)v23, (struct VECTORFL *)v23, 1LL) )
      return v5;
    EFLOAT::eqLength((EFLOAT *)&v25, &v24, v23);
    if ( EFLOAT::bIsZero((EFLOAT *)&v25) )
      return v5;
    v15 = v23[1] / v25;
    v13 = v25 * 16.0;
    v23[0] = v23[0] / v25;
  }
  v23[1] = v15;
LABEL_16:
  if ( a2 < 0 )
    LODWORD(v23[1]) = LODWORD(v15) ^ _xmm;
  v21 = (float *)a5;
  *(_QWORD *)a3 = *(_QWORD *)v23;
  *(float *)a4 = v13;
  if ( v21 )
    *v21 = 1.0 / v13;
  return 1;
}
