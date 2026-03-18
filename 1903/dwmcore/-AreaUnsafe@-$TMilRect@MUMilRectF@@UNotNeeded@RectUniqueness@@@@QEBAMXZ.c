/*
 * XREFs of ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18008E98C
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180077528 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B168 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z @ 0x18008E320 (-NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z.c)
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180183A58 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x18018712C (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(__int64 a1)
{
  float v1; // xmm1_4
  double result; // xmm0_8

  v1 = *(float *)(a1 + 8);
  if ( v1 <= *(float *)a1 )
    return 0.0;
  *(_QWORD *)&result = *(unsigned int *)(a1 + 12);
  if ( *(float *)&result <= *(float *)(a1 + 4) )
    return 0.0;
  *(float *)&result = (float)(*(float *)&result - *(float *)(a1 + 4)) * (float)(v1 - *(float *)a1);
  return result;
}
