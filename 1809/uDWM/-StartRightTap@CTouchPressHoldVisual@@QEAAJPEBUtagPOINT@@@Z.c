/*
 * XREFs of ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800ACE58
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009281C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18009B63C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800ACAC0 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800ACFAC (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800AD05C (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800AD828 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartRightTap(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r8
  int v8; // eax
  int v9; // edi
  __int64 v10; // rax
  CTouchPressHoldVisual *v11; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *(_DWORD *)(v5 + 324) = 0;
  *(_QWORD *)(v5 + 300) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v5);
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v6 )
  {
    CTimelineBase::CTimelineBase(v6, 0.1500000059604645, 1.0, 0.0, 0);
    *v7 = &CTimeline<float>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 42) = v7;
  if ( !v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x63u);
LABEL_10:
    CTouchPressHoldVisual::StopAllTimelines(this);
    v10 = *(_QWORD *)((char *)this + 308);
    *((_DWORD *)this + 82) = 0;
    *((_DWORD *)this + 81) = 0;
    *(_QWORD *)((char *)this + 316) = v10;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(v11);
    return 0LL;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  v9 = v8;
  if ( v8 >= 0 )
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 2);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x65u);
  if ( v9 < 0 )
    goto LABEL_10;
  return 0LL;
}
