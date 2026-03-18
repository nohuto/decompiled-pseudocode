/*
 * XREFs of ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x1801DE394
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z @ 0x1801CB5B4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z.c)
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1802318A0 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x1801DEC70 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 */

CVisualDepthGeometry *__fastcall CVisualDepthGeometry::CVisualDepthGeometry(
        CVisualDepthGeometry *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  int v5; // xmm1_4
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  *(_QWORD *)this = a2;
  `vector constructor iterator'(
    (char *)this + 84,
    16LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  v5 = *(_DWORD *)(*(_QWORD *)this + 136LL);
  v7 = *(_DWORD *)(*(_QWORD *)this + 132LL);
  v8 = v5;
  CVisualDepthGeometry::Init(this, (const struct Windows::Foundation::Numerics::float2 *)&v7, a3);
  return this;
}
