/*
 * XREFs of ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802193C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801CB4E0 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CArithmeticCompositeEffect::GetBoundsFromInputs(float *a1, _DWORD *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  char result; // al
  float *v8; // r9
  float **v9; // r10
  float *v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float *v19; // rdx
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4

  if ( a2[6] != 2 )
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[44]) & _xmm);
  if ( v3 <= 0.0000099999997
    || (v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[45]) & _xmm), v4 >= 0.0000099999997)
    || (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[46]) & _xmm), v5 >= 0.0000099999997)
    || (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[47]) & _xmm), v6 >= 0.0000099999997) )
  {
    if ( v3 < 0.0000099999997 )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[45]) & _xmm) > 0.0000099999997 )
      {
        v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[46]) & _xmm);
        if ( v17 < 0.0000099999997 )
        {
          v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[47]) & _xmm);
          if ( v18 < 0.0000099999997 )
          {
            v19 = (float *)(*(_QWORD *)a2 + 4LL);
            return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v19);
          }
        }
      }
      if ( v3 < 0.0000099999997 )
      {
        v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[45]) & _xmm);
        if ( v20 < 0.0000099999997 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[46]) & _xmm) > 0.0000099999997 )
        {
          v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[47]) & _xmm);
          if ( v21 < 0.0000099999997 )
          {
            v19 = (float *)(*(_QWORD *)a2 + 24LL);
            return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v19);
          }
        }
        if ( v3 < 0.0000099999997 )
        {
          v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[45]) & _xmm);
          if ( v22 < 0.0000099999997 )
          {
            v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[46]) & _xmm);
            if ( v23 < 0.0000099999997 )
            {
              v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[47]) & _xmm);
              if ( v24 < 0.0000099999997 )
                return result;
            }
          }
        }
      }
    }
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)(*(_QWORD *)a2 + 4LL));
  v10 = *v9;
  v11 = (*v9)[6];
  if ( v11 > *v8 )
    *v8 = v11;
  v12 = v10[7];
  if ( v12 > v8[1] )
    v8[1] = v12;
  v13 = v10[8];
  v14 = v8[2];
  if ( v14 > v13 )
  {
    v8[2] = v13;
    v14 = v13;
  }
  v15 = v10[9];
  v16 = v8[3];
  if ( v16 > v15 )
  {
    v8[3] = v15;
    v16 = v15;
    v14 = v8[2];
  }
  if ( v14 <= *v8 || v16 <= v8[1] )
  {
    result = 0;
    *((_QWORD *)v8 + 1) = 0LL;
    *(_QWORD *)v8 = 0LL;
  }
  return result;
}
