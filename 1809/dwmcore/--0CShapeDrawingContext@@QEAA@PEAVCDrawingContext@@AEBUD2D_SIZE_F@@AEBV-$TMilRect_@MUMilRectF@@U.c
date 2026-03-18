/*
 * XREFs of ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180222EE4
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801DA22C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x180234378 (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 */

__int64 __fastcall CShapeDrawingContext::CShapeDrawingContext(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4,
        __int64 a5)
{
  CMatrixStack2D *v5; // r14
  __int64 result; // rax

  v5 = (CMatrixStack2D *)(a1 + 64);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 28) = 1LL;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 64) = a1 + 96;
  *(_QWORD *)(a1 + 72) = a1 + 96;
  *(_DWORD *)(a1 + 80) = 10;
  *(_QWORD *)(a1 + 84) = 10LL;
  CMatrixStack2D::Clear((CMatrixStack2D *)(a1 + 64));
  *(_QWORD *)(a1 + 336) = a2;
  *(_QWORD *)(a1 + 344) = *a3;
  *(_OWORD *)(a1 + 352) = *a4;
  *(_OWORD *)(a1 + 368) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 384) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 400) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 416) = *(_OWORD *)(a5 + 48);
  *(_DWORD *)(a1 + 432) = *(_DWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 436) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 452) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 468) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 484) = *(_OWORD *)(a5 + 48);
  *(_DWORD *)(a1 + 500) = *(_DWORD *)(a5 + 64);
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)(a1 + 368), (float *)(a1 + 504), (float *)(a1 + 508));
  CMatrixStack2D::Clear(v5);
  *(_QWORD *)(a1 + 520) = *(_QWORD *)(a1 + 512);
  result = a1;
  *(_WORD *)(a1 + 536) = 0;
  return result;
}
