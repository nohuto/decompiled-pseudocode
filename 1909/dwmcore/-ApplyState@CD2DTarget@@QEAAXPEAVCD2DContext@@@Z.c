/*
 * XREFs of ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180061E30
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18002C700 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180058E20 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180065430 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x18002C0D0 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
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
