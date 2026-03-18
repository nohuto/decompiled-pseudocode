/*
 * XREFs of ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18024B9EC
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18024B8EC (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x18024B9C8 (-ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18024BE44 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18024BEF8 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 */

void __fastcall CTrimPathOperation::SplitSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  float v4; // xmm2_4

  do
  {
    v4 = fmaxf(
           0.0,
           (float)(*((float *)this + *((unsigned int *)this + 8) + 6)
                 - (float)(*((float *)this + 11) - *((float *)a2 + 1)))
         / *((float *)a2 + 1));
    if ( *((_BYTE *)this + 396) )
      CTrimPathOperation::TrimToEndAt(this, a2, v4);
    else
      CTrimPathOperation::TrimToStartAt(this, a2, v4);
  }
  while ( CTrimPathOperation::ShouldSplitCurrentSegment(this) );
}
