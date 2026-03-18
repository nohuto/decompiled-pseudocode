/*
 * XREFs of ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18016CBA4
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18005164C (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180170E14 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019BE44 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall MoveOptimizationInfo::Create(
        __int64 a1,
        float a2,
        float a3,
        __int128 *a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  unsigned int v7; // ebx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0

  v7 = 0;
  *a7 = 0LL;
  v10 = operator new(0x40uLL);
  if ( v10 )
  {
    v10[2] = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *(_QWORD *)v10 = &MoveOptimizationInfo::`vftable';
    *((float *)v10 + 6) = a2;
    *((float *)v10 + 7) = a3;
    *((_QWORD *)v10 + 2) = a1;
    v12 = *a4;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_QWORD *)v10 + 6) = a5;
    *((_OWORD *)v10 + 2) = v12;
    *a7 = v10;
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v10);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8007000E, 0x64u, 0LL);
  }
  return v7;
}
