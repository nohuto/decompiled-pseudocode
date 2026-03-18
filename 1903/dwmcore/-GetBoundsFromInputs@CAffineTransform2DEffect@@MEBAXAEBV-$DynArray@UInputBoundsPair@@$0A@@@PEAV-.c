/*
 * XREFs of ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021A440
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801CCC80 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CAffineTransform2DEffect::GetBoundsFromInputs(float *a1, _DWORD *a2, float *a3)
{
  float *v3; // rax
  float v4; // xmm5_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm7_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm9_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v21; // [rsp+28h] [rbp-80h]
  float v22[5]; // [rsp+2Ch] [rbp-7Ch] BYREF

  if ( a2[6] == 1 )
  {
    v4 = a1[50];
    v5 = a1[46] * *(float *)(*(_QWORD *)a2 + 4LL);
    v6 = a1[47] * *(float *)(*(_QWORD *)a2 + 4LL);
    v7 = a1[48] * *(float *)(*(_QWORD *)a2 + 8LL);
    v8 = a1[48] * *(float *)(*(_QWORD *)a2 + 16LL);
    v9 = a1[49] * *(float *)(*(_QWORD *)a2 + 8LL);
    v10 = a1[49] * *(float *)(*(_QWORD *)a2 + 16LL);
    v11 = a1[46] * *(float *)(*(_QWORD *)a2 + 12LL);
    v12 = a1[47] * *(float *)(*(_QWORD *)a2 + 12LL);
    v13 = (float)(v5 + v7) + v4;
    v3 = v22;
    v14 = (float)(v6 + v9) + a1[51];
    v21 = (float)(v5 + v8) + v4;
    v15 = (float)(v9 + v12) + a1[51];
    v22[0] = (float)(v6 + v10) + a1[51];
    v22[3] = (float)(v7 + v11) + v4;
    v22[4] = v15;
    v22[1] = (float)(v11 + v8) + v4;
    v16 = v14;
    v17 = (float)(v12 + v10) + a1[51];
    *a3 = v13;
    v18 = 3LL;
    a3[1] = v14;
    a3[2] = v13;
    a3[3] = v14;
    v22[2] = v17;
    do
    {
      v19 = fminf(*a3, *(v3 - 1));
      v14 = fminf(v14, *v3);
      v13 = fmaxf(v13, *(v3 - 1));
      v16 = fmaxf(v16, *v3);
      v3 += 2;
      *a3 = v19;
      --v18;
    }
    while ( v18 );
    a3[1] = v14;
    a3[2] = v13;
    a3[3] = v16;
  }
  else
  {
    LOBYTE(v3) = CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  return (char)v3;
}
