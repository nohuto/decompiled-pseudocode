/*
 * XREFs of ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B0FAC
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800973A8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EB84 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18009FF8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800B0DA0 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B128C (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B133C (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B1AA8 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartHold(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  _QWORD *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // r8
  int v10; // eax
  int v11; // edi
  CTouchPressHoldVisual *v12; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  *(_QWORD *)(v4 + 300) = *v3;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v4);
  v5 = *(_QWORD *)((char *)this + 308);
  *((_DWORD *)this + 81) = 0;
  *(_QWORD *)((char *)this + 316) = v5;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v6 )
  {
    CTimelineBase::CTimelineBase(v6, 0.1500000059604645, 0.0, 1.0, 0);
    *v7 = &CTimeline<float>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 42) = v7;
  if ( !v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x45u);
    goto LABEL_16;
  }
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v8 )
  {
    CTimelineBase::CTimelineBase(v8, 0.1500000059604645, 0.25, 1.0, 0);
    *v9 = &CTimeline<float>::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 43) = v9;
  if ( !v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x47u);
LABEL_16:
    CTouchPressHoldVisual::StopAllTimelines(this);
    *(_QWORD *)((char *)this + 316) = *(_QWORD *)((char *)this + 308);
    *((_DWORD *)this + 82) = 1065353216;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(v12);
    return 0LL;
  }
  v10 = CTouchVisual::RegisterGlobalTimer(this);
  v11 = v10;
  if ( v10 >= 0 )
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 1);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x49u);
  if ( v11 < 0 )
    goto LABEL_16;
  return 0LL;
}
