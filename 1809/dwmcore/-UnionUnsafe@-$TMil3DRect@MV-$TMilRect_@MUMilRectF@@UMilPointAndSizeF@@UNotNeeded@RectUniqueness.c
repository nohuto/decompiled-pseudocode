/*
 * XREFs of ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180056BE0
 * Callers:
 *     ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013BF0 (-AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        float *a1,
        float *a2)
{
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  int v9; // edx
  float v10; // xmm7_4
  float v11; // xmm0_4
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r10d
  char result; // al
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4

  v4 = a2[5];
  v5 = a2[2];
  v6 = *a2;
  v7 = a2[3];
  v8 = a2[1];
  v9 = (a1[5] <= a1[4]) + 1;
  v10 = *a1;
  v11 = a1[3];
  if ( a1[2] > *a1 )
    v9 = a1[5] <= a1[4];
  v12 = (v4 <= a2[4]) + 1;
  if ( v5 > v6 )
    v12 = v4 <= a2[4];
  v13 = v9 + 1;
  v14 = v12 + 1;
  if ( v7 > v8 )
    v14 = v12;
  if ( v11 > a1[1] )
    v13 = v9;
  if ( v13 <= 1 )
  {
    if ( v14 <= 1 )
    {
      if ( v10 > v6 )
      {
        *a1 = v6;
        v8 = a2[1];
      }
      if ( a1[1] > v8 )
        a1[1] = v8;
      v16 = a2[2];
      if ( v16 > a1[2] )
        a1[2] = v16;
      v17 = a2[3];
      if ( v17 > a1[3] )
        a1[3] = v17;
      v18 = a2[5];
      if ( v18 > a1[5] )
        a1[5] = v18;
      v19 = a2[4];
      if ( a1[4] > v19 )
        a1[4] = v19;
    }
    return 1;
  }
  if ( v14 <= 1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    return 1;
  }
  result = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
