/*
 * XREFs of ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@InteractionTrackerProperty@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18019F108 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4En.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801B60FC (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?StartEmitterTimerAnimation@CParticleEmitter@@IEAAJXZ @ 0x1801C75C8 (-StartEmitterTimerAnimation@CParticleEmitter@@IEAAJXZ.c)
 * Callees:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180052FB0 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18005F158 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180073378 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180076048 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800BD464 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800BD640 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800C22F8 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C2558 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  unsigned int CacheSizeForType; // eax
  SIZE_T v20; // r8
  size_t v21; // rbx
  void *v22; // rax
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rcx
  KeyframeSequence *v26; // rsi
  __int64 v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-28h]

  updated = CBaseExpression::SetTarget(a1, 0, a2, a3, a4, 0, 0, 0LL);
  v18 = updated;
  if ( updated < 0 )
  {
    v29 = 76;
LABEL_15:
    v23 = updated;
    goto LABEL_16;
  }
  CacheSizeForType = GetCacheSizeForType(*(_DWORD *)(a1 + 144));
  v20 = CacheSizeForType;
  if ( !CacheSizeForType )
    v20 = 1LL;
  v21 = CacheSizeForType;
  v22 = HeapAlloc(WPF::g_processHeap, 0, v20);
  *(_QWORD *)(a1 + 328) = v22;
  if ( !v22 )
  {
    v18 = -2147024882;
    v29 = 80;
    v23 = -2147024882;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v23, v29);
    goto LABEL_17;
  }
  memset_0(v22, 0, v21);
  *(_DWORD *)(a1 + 312) = 2;
  v24 = CKeyframeAnimation::SetIterationInfo(a1, a10, 0, a12, 0);
  v18 = v24;
  if ( v24 >= 0 )
  {
    updated = CKeyframeAnimation::SetKeyFrameData(a1, 0, 0, a15);
    v18 = updated;
    if ( updated < 0 )
    {
      v29 = 94;
    }
    else
    {
      updated = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
      v18 = updated;
      if ( updated < 0 )
      {
        v29 = 96;
      }
      else
      {
        updated = CKeyframeAnimation::UpdatePlaybackState(a1, 1u, 1, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL));
        v18 = updated;
        if ( updated >= 0 )
          return v18;
        v29 = 101;
      }
    }
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x59u);
LABEL_17:
  v26 = *(KeyframeSequence **)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  if ( v26 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v26);
    v27 = *((_QWORD *)v26 + 8);
    if ( v27 )
    {
      *((_QWORD *)v26 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    WPF::ProcessHeapImpl::Free(v26);
  }
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>((void **)(a1 + 328));
  return v18;
}
