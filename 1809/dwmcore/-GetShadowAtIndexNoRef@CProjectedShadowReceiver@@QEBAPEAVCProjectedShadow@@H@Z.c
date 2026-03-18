/*
 * XREFs of ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1801AF154
 * Callers:
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x180055D30 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800564B0 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x18005A820 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1801B8014 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 * Callees:
 *     <none>
 */

struct CProjectedShadow *__fastcall CProjectedShadowReceiver::GetShadowAtIndexNoRef(
        CProjectedShadowReceiver *this,
        int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 8);
  if ( a2 < (int)((*((_QWORD *)this + 9) - v2) >> 3) )
    return *(struct CProjectedShadow **)(v2 + 8LL * a2);
  else
    return 0LL;
}
