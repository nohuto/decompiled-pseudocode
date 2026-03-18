/*
 * XREFs of ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18002B1DC
 * Callers:
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x18002B1A0 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180086418 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18008AA9C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

__int64 __fastcall CVisual::GetInputHandle(CVisual *this)
{
  struct CInteraction *InteractionInternal; // rax
  __int64 v2; // r10
  __int64 v3; // rax

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    v3 = *((_QWORD *)InteractionInternal + 12);
    if ( v3 )
      return *(_QWORD *)(v3 + 64);
  }
  return v2;
}
