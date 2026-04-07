/*
 * XREFs of ?RoundToNearestInt@@YAHM@Z @ 0x1800279E0
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000D620 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800196D4 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002789C (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A0098 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0CC8 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0EAC (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800B08E0 (-Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800B0B40 (-Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 * Callees:
 *     ceilf_0 @ 0x18004FD62 (ceilf_0.c)
 *     floorf_0 @ 0x18004FD86 (floorf_0.c)
 */

__int64 __fastcall RoundToNearestInt(float a1)
{
  float v1; // xmm0_4

  if ( a1 < 0.0 )
    v1 = ceilf_0(a1 - 0.5);
  else
    v1 = floorf_0(a1 + 0.5);
  return (unsigned int)(int)v1;
}
