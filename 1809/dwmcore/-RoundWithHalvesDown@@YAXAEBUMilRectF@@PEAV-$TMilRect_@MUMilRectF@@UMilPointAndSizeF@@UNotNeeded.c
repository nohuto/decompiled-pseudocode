/*
 * XREFs of ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800150C8
 * Callers:
 *     ?Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180014F80 (-Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PushGpuClipToScope@CScopedClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800301C8 (-PushGpuClipToScope@CScopedClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180030278 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ??0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18008F618 (--0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18005F5E8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 */

__int64 __fastcall RoundWithHalvesDown(float *a1, float *a2)
{
  __int64 result; // rax

  *a2 = (float)(int)CFloatFPU::CeilingSat(*a1 - 0.5);
  a2[1] = (float)(int)CFloatFPU::CeilingSat(a1[1] - 0.5);
  a2[2] = (float)(int)CFloatFPU::CeilingSat(a1[2] - 0.5);
  result = CFloatFPU::CeilingSat(a1[3] - 0.5);
  a2[3] = (float)(int)result;
  return result;
}
