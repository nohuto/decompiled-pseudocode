/*
 * XREFs of ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x18007B508
 * Callers:
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18007B444 (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18007BA04 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasPixelSnappedContent(CVisual *this)
{
  char v1; // bl
  struct CSpriteVisualContent *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( CVisual::GetContentAsSpriteNoRef(this, &v3) )
    return (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v3 + 352LL))(v3) != 0;
  return v1;
}
