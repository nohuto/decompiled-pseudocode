/*
 * XREFs of ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x1800AA018
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800A940C (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800A9FDC (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007897C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
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
