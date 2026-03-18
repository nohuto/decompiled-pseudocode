/*
 * XREFs of ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00C06A0
 * Callers:
 *     <none>
 * Callees:
 *     efSin @ 0x1C00124F0 (efSin.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0019A6C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x1C0019AB0 (-eqLength@EFLOAT@@QEAA-AV1@AEBVPOINTFL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C001A4C0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bComputeUnits(
        __m128 **this,
        int a2,
        struct POINTFL *a3,
        struct EFLOAT *a4,
        struct EFLOAT *a5)
{
  float *v5; // r11
  __int32 v10; // esi
  int v11; // r10d
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  char v15; // dl
  float v16; // xmm4_4
  int v17; // xmm5_4
  unsigned int v18; // ebx
  __m128i v19; // xmm0
  __m128i v20; // xmm6
  float *v21; // rax
  float v23[8]; // [rsp+20h] [rbp-40h] BYREF
  int v24; // [rsp+90h] [rbp+30h] BYREF
  float v25; // [rsp+98h] [rbp+38h] BYREF

  v5 = (float *)*this;
  v10 = (*this)[2].m128_i32[0];
  v11 = abs32(a2);
  if ( (v10 & 1) != 0 && v11 == 900 * (v11 / 900) )
  {
    if ( ((v11 / 900) & 1) != 0 )
    {
      v12 = v5[3];
      v13 = 0.0;
      v23[0] = 0.0;
      v14 = FLOAT_1_0;
      v23[1] = FLOAT_1_0;
    }
    else
    {
      v12 = *v5;
      v14 = 0.0;
      v13 = FLOAT_1_0;
      *(_QWORD *)v23 = LODWORD(FLOAT_1_0);
    }
    v25 = v12;
    v18 = 0;
    if ( EFLOAT::bIsZero((EFLOAT *)&v25) )
      return v18;
    if ( (v15 & 2) != 0 )
      LODWORD(v12) ^= _xmm;
    if ( v16 <= v12 )
      goto LABEL_16;
    LODWORD(v23[0]) = LODWORD(v13) ^ _xmm;
    LODWORD(v12) ^= _xmm;
    LODWORD(v14) = v17 ^ _xmm;
  }
  else
  {
    v19 = (__m128i)COERCE_UNSIGNED_INT((float)v11);
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 / 10.0;
    v20 = v19;
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + *(float *)&FP_90_0;
    LODWORD(v23[0]) = efSin((unsigned int)_mm_cvtsi128_si32(v19));
    v18 = 0;
    LODWORD(v23[1]) = efSin((unsigned int)_mm_cvtsi128_si32(v20));
    if ( (v10 & 2) == 0 && !(unsigned int)EXFORMOBJ::bXform(this, (struct VECTORFL *)v23, (struct VECTORFL *)v23, 1LL) )
      return v18;
    EFLOAT::eqLength((EFLOAT *)&v25, &v24, v23);
    if ( EFLOAT::bIsZero((EFLOAT *)&v25) )
      return v18;
    v14 = v23[1] / v25;
    v12 = v25 * 16.0;
    v23[0] = v23[0] / v25;
  }
  v23[1] = v14;
LABEL_16:
  if ( a2 < 0 )
    LODWORD(v23[1]) = LODWORD(v14) ^ _xmm;
  v21 = (float *)a5;
  *(_QWORD *)a3 = *(_QWORD *)v23;
  *(float *)a4 = v12;
  if ( v21 )
    *v21 = 1.0 / v12;
  return 1;
}
