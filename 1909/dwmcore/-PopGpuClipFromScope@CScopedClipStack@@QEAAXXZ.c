/*
 * XREFs of ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18003FBC4
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000D240 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18003FA3C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18003FBF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800616E0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x1800CE2E0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18016E9A4 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScopedClipStack::PopGpuClipFromScope(CScopedClipStack *this)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *((_DWORD *)this + 556);
  if ( v1 )
    *((_DWORD *)this + 556) = v1 - 1;
  v2 = 10LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(*(_QWORD *)this + 8 * v2);
}
