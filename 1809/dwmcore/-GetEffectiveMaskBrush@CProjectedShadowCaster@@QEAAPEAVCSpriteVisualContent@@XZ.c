/*
 * XREFs of ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AD988
 * Callers:
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEAA_NXZ @ 0x1801ADA80 (-IsRectangular@CProjectedShadowCaster@@QEAA_NXZ.c)
 *     ?IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801CB870 (-IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ @ 0x1801AD028 (-EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ.c)
 */

struct CSpriteVisualContent *__fastcall CProjectedShadowCaster::GetEffectiveMaskBrush(CProjectedShadowCaster *this)
{
  struct CSpriteVisualContent *result; // rax

  result = (struct CSpriteVisualContent *)*((_QWORD *)this + 15);
  if ( !result || *((_DWORD *)this + 23) != 1 )
  {
    if ( (int)CProjectedShadowCaster::EnsureBlackColorBrush(this) >= 0 )
      return (struct CSpriteVisualContent *)*((_QWORD *)this + 17);
    else
      return 0LL;
  }
  return result;
}
