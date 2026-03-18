/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x180029B04
 * Callers:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180028F60 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

float *__fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
        float *a1,
        __int64 *a2)
{
  float *v2; // r8
  __int64 v3; // r9
  float *result; // rax
  bool v5; // cf
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm1_4

  if ( !*a2 )
    goto LABEL_7;
  v2 = (float *)a2[1];
  v3 = 1LL;
  *a1 = *v2;
  a1[1] = v2[1];
  a1[2] = *v2;
  result = (float *)*((unsigned int *)v2 + 1);
  *((_DWORD *)a1 + 3) = (_DWORD)result;
  if ( *a2 > 1 )
  {
    v5 = (unsigned __int64)*a2 > 1;
    result = v2 + 2;
    while ( v5 )
    {
      ++v3;
      v6 = a1[1];
      *a1 = fminf(*a1, *result);
      v7 = a1[2];
      a1[1] = fminf(v6, result[1]);
      v8 = a1[3];
      a1[2] = fmaxf(v7, *result);
      v9 = fmaxf(v8, result[1]);
      result += 2;
      a1[3] = v9;
      v5 = v3 < (unsigned __int64)*a2;
      if ( v3 >= *a2 )
        return result;
    }
LABEL_7:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return result;
}
