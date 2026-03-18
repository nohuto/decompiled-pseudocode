/*
 * XREFs of ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1520
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801C2588 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x1801D9D80 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x1801EB9E8 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180080E18 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180082990 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180082B24 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C0510 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800C05C4 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800C6FE4 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800C70F8 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800C76CC (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::Initialize(
        __int64 a1,
        struct CResource *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        float a10,
        __int64 a11,
        float a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  int updated; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  SIZE_T CacheSizeForType; // rbx
  void *v20; // rax
  unsigned int v21; // r9d
  signed int v22; // eax
  __int64 v23; // rcx
  KeyframeSequence *v24; // rbp
  __int64 v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-28h]

  updated = CBaseExpression::SetTarget(a1, 0, a2, a3, a4, 0, 0, 0LL);
  v18 = updated;
  if ( updated < 0 )
  {
    v27 = 73;
LABEL_13:
    v21 = updated;
    goto LABEL_14;
  }
  CacheSizeForType = (unsigned int)GetCacheSizeForType(*(_DWORD *)(a1 + 144));
  v20 = DefaultHeap::Alloc(CacheSizeForType);
  *(_QWORD *)(a1 + 352) = v20;
  if ( !v20 )
  {
    v18 = -2147024882;
    v21 = -2147024882;
    v27 = 77;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v21, v27, 0LL);
    goto LABEL_15;
  }
  memset_0(v20, 0, CacheSizeForType);
  *(_DWORD *)(a1 + 336) = 2;
  v22 = CKeyframeAnimation::SetIterationInfo(a1, a10, 0, a12, 0);
  v18 = v22;
  if ( v22 >= 0 )
  {
    updated = CKeyframeAnimation::SetKeyFrameData(a1, 0, 0, a15);
    v18 = updated;
    if ( updated < 0 )
    {
      v27 = 91;
    }
    else
    {
      updated = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
      v18 = updated;
      if ( updated < 0 )
      {
        v27 = 93;
      }
      else
      {
        updated = CKeyframeAnimation::UpdatePlaybackState(a1, 1u, 1, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL));
        v18 = updated;
        if ( updated >= 0 )
          return v18;
        v27 = 98;
      }
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x56u, 0LL);
LABEL_15:
  v24 = *(KeyframeSequence **)(a1 + 360);
  *(_QWORD *)(a1 + 360) = 0LL;
  if ( v24 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v24);
    v25 = *((_QWORD *)v24 + 8);
    if ( v25 )
    {
      *((_QWORD *)v24 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    operator delete(v24);
  }
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)(a1 + 352));
  return v18;
}
