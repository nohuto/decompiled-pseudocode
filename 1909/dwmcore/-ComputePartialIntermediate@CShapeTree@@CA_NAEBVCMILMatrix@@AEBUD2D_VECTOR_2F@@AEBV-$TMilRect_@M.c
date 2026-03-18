/*
 * XREFs of ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x18020CC3C
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C1E14 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x18020C9EC (--$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniquenes.c)
 */

char __fastcall CShapeTree::ComputePartialIntermediate(struct CMILMatrix *a1, float *a2, float *a3, int *a4, float *a5)
{
  int v6; // xmm2_4
  int v8; // xmm0_4
  const struct CMILMatrix *v9; // rdx
  int v10; // xmm1_4
  signed int v11; // r9d
  int v12; // r9d
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  char result; // al
  __int128 v22; // [rsp+28h] [rbp-31h] BYREF
  __int128 v23; // [rsp+38h] [rbp-21h] BYREF
  int v24; // [rsp+48h] [rbp-11h] BYREF
  int v25; // [rsp+4Ch] [rbp-Dh]
  int v26; // [rsp+50h] [rbp-9h]
  int v27; // [rsp+54h] [rbp-5h]
  int v28; // [rsp+58h] [rbp-1h]
  int v29; // [rsp+5Ch] [rbp+3h]
  int v30; // [rsp+60h] [rbp+7h]
  int v31; // [rsp+64h] [rbp+Bh]

  v6 = *a4;
  v8 = a4[2];
  v9 = a1;
  v25 = a4[1];
  v27 = v25;
  v10 = a4[3];
  v11 = 0;
  v29 = v10;
  v31 = v10;
  v24 = v6;
  v26 = v8;
  v28 = v8;
  v30 = v6;
  do
  {
    if ( !CHitTestContext::GetPointInLocalSpace(
            (const struct D2D_POINT_2F *)&v24 + v11,
            v9,
            (struct D2D_POINT_2F *)&v24 + v11) )
      return 0;
    v11 = v12 + 1;
  }
  while ( (unsigned int)v11 < 4 );
  *(_QWORD *)&v23 = 4LL;
  *((_QWORD *)&v23 + 1) = &v24;
  v22 = v23;
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<CMilPoint2F>(
    (float *)&v23,
    (unsigned __int64 *)&v22);
  v13 = *a3;
  v14 = *(float *)&v23 - 1.0;
  v15 = *((float *)&v23 + 1) - 1.0;
  v16 = *((float *)&v23 + 2) + 1.0;
  v17 = *((float *)&v23 + 3) + 1.0;
  if ( *a3 > (float)(*(float *)&v23 - 1.0) )
    v14 = *a3;
  v18 = a3[1];
  v19 = *((float *)&v23 + 1) - 1.0;
  if ( v18 > v15 )
  {
    v15 = a3[1];
    v19 = v15;
  }
  if ( v16 > a3[2] )
    v16 = a3[2];
  if ( v17 > a3[3] )
    v17 = a3[3];
  if ( v16 <= v14 || v17 <= v19 )
  {
    v15 = 0.0;
    v14 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
  }
  result = 1;
  *a5 = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) + v14) * *a2;
  a5[1] = (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) + v15) * a2[1];
  a5[2] = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) + v16) * *a2;
  a5[3] = (float)(v17 + COERCE_FLOAT(LODWORD(v18) ^ _xmm)) * a2[1];
  return result;
}
