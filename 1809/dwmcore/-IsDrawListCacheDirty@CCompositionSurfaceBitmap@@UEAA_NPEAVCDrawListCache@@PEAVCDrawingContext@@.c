/*
 * XREFs of ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180012BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013150 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800CC2D0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsDrawListCacheDirty(
        CCompositionSurfaceBitmap *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4)
{
  char v8; // al
  _BYTE v10[64]; // [rsp+30h] [rbp-88h] BYREF
  int v11; // [rsp+70h] [rbp-48h]
  __int64 v12; // [rsp+80h] [rbp-38h] BYREF

  v11 = 0;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a4, v10, &v12);
  return CContent::IsDrawListCacheDirty(
           this,
           a2,
           a3,
           a4,
           (const struct CMILMatrix *)((unsigned __int64)v10 & -(__int64)(v8 != 0)));
}
