/*
 * XREFs of fmodf_0 @ 0x1800F001B
 * Callers:
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005BA70 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18006D838 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?make_float3x2_rotation@Numerics@Foundation@Windows@@YA?AUfloat3x2@123@MAEBUfloat2@123@@Z @ 0x1801C7EDC (-make_float3x2_rotation@Numerics@Foundation@Windows@@YA-AUfloat3x2@123@MAEBUfloat2@123@@Z.c)
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801CDFC4 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x1801D169C (-Modulus@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801D9054 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18021F368 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl fmodf_0(float X, float Y)
{
  return fmodf(X, Y);
}
