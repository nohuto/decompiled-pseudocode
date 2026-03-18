/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800DC434
 * Callers:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800DB300 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
        __int64 a1,
        __int64 a2)
{
  float *v2; // r9
  __int64 result; // rax
  float v4; // xmm0_4

  v2 = (float *)a1;
  if ( *(__int64 *)a2 <= 0 )
    goto LABEL_13;
  *(_DWORD *)a1 = **(_DWORD **)(a2 + 8);
  if ( *(__int64 *)a2 <= 0 )
    goto LABEL_13;
  a1 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 4LL);
  *((_DWORD *)v2 + 1) = a1;
  if ( *(__int64 *)a2 <= 0 )
    goto LABEL_13;
  a1 = **(unsigned int **)(a2 + 8);
  *((_DWORD *)v2 + 2) = a1;
  if ( *(__int64 *)a2 <= 0 )
    goto LABEL_13;
  v2[3] = *(float *)(*(_QWORD *)(a2 + 8) + 4LL);
  a1 = 1LL;
  result = *(_QWORD *)a2;
  if ( *(__int64 *)a2 > 1 )
  {
    while ( a1 >= 0 )
    {
      if ( a1 >= result )
        break;
      *v2 = fminf(*v2, *(float *)(*(_QWORD *)(a2 + 8) + 8 * a1));
      if ( a1 >= *(_QWORD *)a2 )
        break;
      v2[1] = fminf(v2[1], *(float *)(*(_QWORD *)(a2 + 8) + 8 * a1 + 4));
      if ( a1 >= *(_QWORD *)a2 )
        break;
      v2[2] = fmaxf(v2[2], *(float *)(*(_QWORD *)(a2 + 8) + 8 * a1));
      if ( a1 >= *(_QWORD *)a2 )
        break;
      v4 = fmaxf(v2[3], *(float *)(*(_QWORD *)(a2 + 8) + 8 * a1++ + 4));
      v2[3] = v4;
      result = *(_QWORD *)a2;
      if ( a1 >= *(_QWORD *)a2 )
        return result;
    }
LABEL_13:
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x1800DC51ALL);
  }
  return result;
}
