/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x1801D9E2C
 * Callers:
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x1801D9F98 (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<CMilPoint2F>(
        float *a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax

  if ( *(__int64 *)a2 <= 0
    || (*a1 = **(float **)(a2 + 8), *(__int64 *)a2 <= 0)
    || (a1[1] = *(float *)(*(_QWORD *)(a2 + 8) + 4LL), *(__int64 *)a2 <= 0)
    || (a1[2] = **(float **)(a2 + 8), *(__int64 *)a2 <= 0) )
  {
    gsl::details::terminate(0LL);
    JUMPOUT(0x1801D9F17LL);
  }
  v4 = 1LL;
  result = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 4LL);
  for ( *((_DWORD *)a1 + 3) = result; v4 < *(_QWORD *)a2; a1[3] = fmaxf(a1[3], *(float *)(result + 4)) )
  {
    *a1 = fminf(*a1, *(float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((__int64 *)a2, v4));
    a1[1] = fminf(
              a1[1],
              *(float *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((__int64 *)a2, v4) + 4));
    a1[2] = fmaxf(a1[2], *(float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((__int64 *)a2, v4));
    result = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((__int64 *)a2, v4++);
  }
  return result;
}
