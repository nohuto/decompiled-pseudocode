/*
 * XREFs of ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180086B58
 * Callers:
 *     ?s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001FBD8 (-s_HoverHittestRequest@CGlobalInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180086418 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180086DD0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800C8290 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 */

__int64 __fastcall CHitTestContext::HitTestTreeWalk(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 208) = a5;
  *(float *)(a1 + 88) = a3;
  *(float *)(a1 + 92) = a4;
  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(
    a1 + 144,
    &CRenderState::sc_DefaultBackfaceVisibility);
  v7 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(a1 + 8, a2, *(_QWORD *)(a2 + 24), a1);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1B0u, 0LL);
  return v9;
}
