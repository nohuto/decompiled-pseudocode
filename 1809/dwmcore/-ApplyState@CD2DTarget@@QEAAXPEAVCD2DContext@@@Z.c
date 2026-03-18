/*
 * XREFs of ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180025ACC
 * Callers:
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180023580 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180025878 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180025B08 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180025C0C (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 */

void __fastcall CD2DTarget::ApplyState(CD2DTarget *this, struct CD2DContext *a2)
{
  if ( !*((_BYTE *)this + 48) )
  {
    *((_QWORD *)this + 2) = a2;
    CD2DContext::D2DSetTargetInternal(a2, this);
    *((_BYTE *)this + 48) = 1;
    CD2DTarget::ApplyCurrentClip(this);
  }
}
