/*
 * XREFs of ?HitTestPointHelper@CHitTestContext@@QEAAJPEAVCVisualTree@@MM@Z @ 0x18002C7B4
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x18002C198 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801D9D00 (-HitTest@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18002D180 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x18006B740 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHitTestContext::HitTestPointHelper(
        CHitTestContext *this,
        struct CVisualTree *a2,
        float a3,
        float a4)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx

  *((_QWORD *)this + 14) = 0LL;
  *((float *)this + 22) = a3;
  *((float *)this + 23) = a4;
  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(
    (char *)this + 120,
    &CRenderState::sc_DefaultBackfaceVisibility);
  v6 = CVisualTreeIterator::WalkSubtree<CHitTestContext>((char *)this + 8, a2, *((_QWORD *)a2 + 3), this);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x19Eu);
  return v8;
}
