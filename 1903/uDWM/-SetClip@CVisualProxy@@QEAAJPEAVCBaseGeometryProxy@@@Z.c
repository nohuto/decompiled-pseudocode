/*
 * XREFs of ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18002BF6C
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003634 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180025480 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180027580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x18002BF0C (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0CC8 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0EAC (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetClip(CVisualProxy *this, struct CBaseGeometryProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 416LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
