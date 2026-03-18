/*
 * XREFs of ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C0BA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180197960 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CAffineTransform2DEffect::GetBoundsFromInputs(float *a1, _DWORD *a2, float *a3)
{
  float *v3; // rax
  float v4; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm9_4
  float v7; // xmm2_4
  float v8; // xmm10_4
  float v9; // xmm12_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v27; // [rsp+28h] [rbp-80h]
  _DWORD v28[5]; // [rsp+2Ch] [rbp-7Ch] BYREF

  if ( a2[6] == 1 )
  {
    v4 = a1[48];
    v5 = a1[49];
    v6 = a1[46] * *(float *)(*(_QWORD *)a2 + 12LL);
    v7 = a1[47];
    v8 = v7 * *(float *)(*(_QWORD *)a2 + 12LL);
    v9 = a1[46] * *(float *)(*(_QWORD *)a2 + 4LL);
    v10 = v4 * *(float *)(*(_QWORD *)a2 + 16LL);
    v11 = v5 * *(float *)(*(_QWORD *)a2 + 16LL);
    v12 = v7 * *(float *)(*(_QWORD *)a2 + 4LL);
    v13 = v4 * *(float *)(*(_QWORD *)a2 + 8LL);
    v14 = v5 * *(float *)(*(_QWORD *)a2 + 8LL);
    v3 = (float *)v28;
    v15 = (float)(v11 + v12) + a1[51];
    v27 = (float)(v10 + v9) + a1[50];
    v16 = (float)(v12 + v14) + a1[51];
    v17 = (float)(v9 + v13) + a1[50];
    *(float *)v28 = v15;
    v18 = v8;
    v19 = (float)(v6 + v10) + a1[50];
    v20 = (float)(v6 + v13) + a1[50];
    v21 = (float)(v8 + v14) + a1[51];
    v22 = (float)(v18 + v11) + a1[51];
    *a3 = v17;
    v23 = 3LL;
    *(float *)&v28[1] = v19;
    v24 = v16;
    *(float *)&v28[3] = v20;
    *(float *)&v28[4] = v21;
    *(float *)&v28[2] = v22;
    a3[1] = v16;
    a3[2] = v17;
    a3[3] = v16;
    do
    {
      v25 = fminf(*a3, *(v3 - 1));
      v16 = fminf(v16, *v3);
      v17 = fmaxf(v17, *(v3 - 1));
      v24 = fmaxf(v24, *v3);
      v3 += 2;
      *a3 = v25;
      --v23;
    }
    while ( v23 );
    a3[1] = v16;
    a3[2] = v17;
    a3[3] = v24;
  }
  else
  {
    LOBYTE(v3) = CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  return (char)v3;
}
