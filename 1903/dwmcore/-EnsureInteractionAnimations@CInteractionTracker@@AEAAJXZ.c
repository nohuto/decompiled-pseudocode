/*
 * XREFs of ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801DA0B0
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801DDF10 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DDF58 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z @ 0x1801D87C8 (--2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x1801D8854 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180206C30 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180208B34 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180208F78 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1802095F8 (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x18020F7E0 (--0CMotion@@QEAA@XZ.c)
 */

__int64 __fastcall CInteractionTracker::EnsureInteractionAnimations(struct CComposition **this)
{
  CScrollAnimation *v2; // rax
  CScrollAnimation *v3; // rsi
  CInteractionTrackerScaleAnimation *v4; // rcx
  unsigned int v5; // r9d
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD *v8; // rbx
  CInteractionTrackerPositionAnimation *v9; // rax
  CInteractionTrackerScaleAnimation **v10; // rbx
  CInteractionTrackerPositionAnimation *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct CComposition *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !this[40] )
  {
    v2 = (CScrollAnimation *)DefaultHeap::AllocClear(0x268uLL);
    v3 = v2;
    if ( !v2 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    CScrollAnimation::CScrollAnimation(v2, this[2]);
    *(_QWORD *)v3 = &CInteractionTrackerScaleAnimation::`vftable';
    CMotion::CMotion((CScrollAnimation *)((char *)v3 + 432));
    *((_QWORD *)v3 + 54) = &CScaleMotion::`vftable';
    v4 = this[40];
    if ( v4 != v3 )
    {
      (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v3 + 8LL))(v3);
      v15 = this[40];
      this[40] = v3;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v15);
      v4 = this[40];
    }
    if ( !v4 )
    {
      v13 = 3065;
LABEL_8:
      v5 = -2147024882;
      v6 = -2147024882;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v5, v13, 0LL);
      return v6;
    }
    v7 = CInteractionTrackerScaleAnimation::Initialize(v4, (struct CInteractionTracker *)this);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 3067;
LABEL_13:
      v5 = v7;
      goto LABEL_9;
    }
  }
  v8 = this + 41;
  if ( !this[41] )
  {
    v9 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v9 )
      v9 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v9, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 41, (__int64)v9);
    if ( !*v8 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0xC01u, 0LL);
      return v6;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v8, this, 0LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 3075;
      goto LABEL_13;
    }
  }
  v10 = this + 42;
  if ( !this[42] )
  {
    v11 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v11 )
      v11 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v11, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 42, (__int64)v11);
    v4 = *v10;
    if ( !*v10 )
    {
      v13 = 3081;
      goto LABEL_8;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(v4, this, 1LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 3083;
      goto LABEL_13;
    }
  }
  return 0;
}
