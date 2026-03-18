/*
 * XREFs of ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800AA428
 * Callers:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA1B4 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168A98 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x18016C2C4 (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

double __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(const struct D2D_RECT_F *a1)
{
  __int64 v1; // rcx
  double result; // xmm0_8

  if ( IsEmpty(a1) )
    return 0.0;
  *(_QWORD *)&result = *(unsigned int *)(v1 + 12);
  *(float *)&result = (float)(*(float *)&result - *(float *)(v1 + 4)) * (float)(*(float *)(v1 + 8) - *(float *)v1);
  return result;
}
