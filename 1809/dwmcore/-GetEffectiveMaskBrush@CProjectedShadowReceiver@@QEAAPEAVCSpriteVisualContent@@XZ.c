/*
 * XREFs of ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AEDF0
 * Callers:
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AEC0C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801AEE84 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801CB870 (-IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ @ 0x1801AEB04 (-EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ.c)
 */

struct CSpriteVisualContent *__fastcall CProjectedShadowReceiver::GetEffectiveMaskBrush(CProjectedShadowReceiver *this)
{
  struct CSpriteVisualContent *result; // rax

  result = (struct CSpriteVisualContent *)*((_QWORD *)this + 12);
  if ( !result || *((_DWORD *)this + 22) != 1 )
  {
    if ( (int)CProjectedShadowReceiver::EnsureBlackColorBrush(this) >= 0 )
      return (struct CSpriteVisualContent *)*((_QWORD *)this + 14);
    else
      return 0LL;
  }
  return result;
}
