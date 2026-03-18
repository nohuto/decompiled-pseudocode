/*
 * XREFs of ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029248
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180028FD8 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800291F0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveGroup::GetLargestOpaqueRect(__int64 a1, float *a2)
{
  char result; // al
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm3_4

  result = 0;
  if ( *(_QWORD *)(a1 + 504) )
  {
    if ( a2 )
    {
      v3 = *(float *)(a1 + 556);
      *a2 = v3;
      v4 = *(float *)(a1 + 560);
      a2[1] = v4;
      v5 = *(float *)(a1 + 564);
      a2[2] = v5;
      v6 = *(float *)(a1 + 568);
      a2[3] = v6;
      if ( v5 > v3 && v6 > v4 )
        return 1;
    }
  }
  return result;
}
