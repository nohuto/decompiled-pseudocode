/*
 * XREFs of ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C408C
 * Callers:
 *     ?SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800216D0 (-SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3FB0 (-SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3FF0 (-SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CSpriteVisualContent@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C4040 (-SetAnimatedProperty@CSpriteVisualContent@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E4DF0 (-SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18016BD30 (-SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801C56C0 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetAnimatedProperty@CParticleEmitterVisual@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801EDC70 (-SetAnimatedProperty@CParticleEmitterVisual@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?Update@CParticleEmitterVisual@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801EE8A0 (-Update@CParticleEmitterVisual@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801F5FE0 (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801F60F0 (-SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801FB8A0 (-SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@.c)
 *     ?SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801FB990 (-SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@.c)
 *     ?SetAnimatedProperty@CViewBox@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801FD430 (-SetAnimatedProperty@CViewBox@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801FE8C0 (-SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

char __fastcall CResource::ModifyProperty(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  size_t v4; // rbp
  char *v5; // rsi
  char v6; // bl

  v4 = *((_QWORD *)a2 + 2);
  v5 = (char *)this + *((_QWORD *)a2 + 1);
  v6 = 0;
  if ( memcmp_0(v5, a3, v4) )
  {
    v6 = 1;
    memcpy_0(v5, a3, v4);
  }
  return v6;
}
