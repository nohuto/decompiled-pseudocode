/*
 * XREFs of ??0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x1801DE33C
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z @ 0x1801CB5B4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x1801DEC70 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 */

CVisualDepthGeometry *__fastcall CVisualDepthGeometry::CVisualDepthGeometry(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        const struct CMILMatrix *a3)
{
  `vector constructor iterator'(
    (char *)this + 84,
    16LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  CVisualDepthGeometry::Init(this, a2, a3);
  return this;
}
