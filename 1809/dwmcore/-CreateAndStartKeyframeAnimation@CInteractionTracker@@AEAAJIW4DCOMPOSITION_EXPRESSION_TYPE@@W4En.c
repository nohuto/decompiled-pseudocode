/*
 * XREFs of ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@InteractionTrackerProperty@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18019F108
 * Callers:
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18019E0A0 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801A0FD8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4VCScrollScaleKeyframeAnimation@@@?$ComPtr@VCScrollKeyframeAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollScaleKeyframeAnimation@@@Z @ 0x18019D794 (--$-4VCScrollScaleKeyframeAnimation@@@-$ComPtr@VCScrollKeyframeAnimation@@@WRL@Microsoft@@QEAAAE.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801D6E84 (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 *     ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801E00D4 (--0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::CreateAndStartKeyframeAnimation(
        struct CComposition **a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int128 *a5,
        int a6,
        __int64 *a7)
{
  const char *v10; // r9
  CScrollKeyframeAnimation *v11; // rax
  CScrollKeyframeAnimation *v12; // rbx
  CScrollPositionKeyframeAnimation *v13; // rax
  __int64 v14; // rbx
  __int128 v16; // xmm0
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19[2]; // [rsp+80h] [rbp-61h] BYREF
  _DWORD v20[20]; // [rsp+90h] [rbp-51h] BYREF
  __int128 v21; // [rsp+E0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v19[0] = 0LL;
  v10 = (const char *)(unsigned int)(a4 - 1);
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x16F6,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        v10);
      __debugbreak();
    }
    v11 = (CScrollKeyframeAnimation *)WPF::ProcessHeapImpl::AllocClear(0x2C8uLL);
    v12 = v11;
    if ( v11 )
    {
      CScrollKeyframeAnimation::CScrollKeyframeAnimation(v11, a1[2], (struct CInteractionTracker *)a1);
      *(_QWORD *)v12 = &CScrollScaleKeyframeAnimation::`vftable';
    }
    else
    {
      v12 = 0LL;
    }
    Microsoft::WRL::ComPtr<CScrollKeyframeAnimation>::operator=<CScrollScaleKeyframeAnimation>(v19, (__int64)v12);
  }
  else
  {
    v13 = (CScrollPositionKeyframeAnimation *)WPF::ProcessHeapImpl::AllocClear(0x2D0uLL);
    if ( v13 )
      v13 = CScrollPositionKeyframeAnimation::CScrollPositionKeyframeAnimation(
              v13,
              a1[2],
              (struct CInteractionTracker *)a1);
    Microsoft::WRL::ComPtr<CScrollKeyframeAnimation>::operator=<CScrollScaleKeyframeAnimation>(v19, (__int64)v13);
  }
  v14 = v19[0];
  if ( v19[0] )
  {
    memset_0(v20, 0, 0x60uLL);
    v20[0] = 0;
    v20[1] = 65543;
    v20[13] = 65543;
    v20[12] = a6;
    v20[2] = 1065353216;
    v20[6] = 3;
    v16 = *a5;
    v20[14] = 1065353216;
    v20[18] = 1;
    v21 = v16;
    v17 = CKeyframeAnimation::Initialize(v14, a1, a2, a3);
    v18 = v17;
    if ( v17 >= 0 )
    {
      *a7 = v14;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x171D,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        (const char *)(unsigned int)v17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      return v18;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16FA,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
