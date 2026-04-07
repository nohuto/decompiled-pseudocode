/*
 * XREFs of ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A034C
 * Callers:
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A2DB4 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800A4194 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E3E8 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x1800316CC (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetBitmap(CBaseObject **this, struct CBaseImageProxy **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int updated; // eax
  CBaseObject *v7; // rcx
  struct CBaseImageProxy *v8; // rax

  v4 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, a2[2]);
    v5 = updated;
    if ( updated >= 0 )
    {
      v7 = this[75];
      if ( v7 )
        CBaseObject::Release(v7);
      this[75] = a2[2];
      v8 = a2[2];
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x325u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x324u);
  }
  return v5;
}
