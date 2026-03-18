/*
 * XREFs of ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180008BB8
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180008960 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18025C000 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180009ABC (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
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
    0x10uLL,
    4uLL,
    (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  v5 = *(_DWORD *)(*(_QWORD *)this + 136LL);
  v7 = *(_DWORD *)(*(_QWORD *)this + 132LL);
  v8 = v5;
  CVisualDepthGeometry::Init(this, (const struct Windows::Foundation::Numerics::float2 *)&v7, a3);
  return this;
}
