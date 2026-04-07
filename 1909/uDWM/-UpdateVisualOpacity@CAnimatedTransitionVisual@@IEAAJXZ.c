/*
 * XREFs of ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E5B8
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E4CC (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18000ADE0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001AAC0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateVisualOpacity(CAnimatedTransitionVisual *this)
{
  float v1; // xmm0_4

  v1 = *((float *)this + 186);
  if ( v1 != *((float *)this + 187) )
  {
    CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v1);
    CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
  }
  return 0LL;
}
