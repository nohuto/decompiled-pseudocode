/*
 * XREFs of ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18008F8A0
 * Callers:
 *     ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x18008FB50 (-UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009081C (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ @ 0x18008EEC4 (-AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18008F730 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18008F9CC (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StartRectAnimation(
        CAnimatedGlassSheet *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        float a4)
{
  __int64 v4; // rax
  bool v8; // zf
  char v9; // al
  __int64 v10; // rax
  _QWORD *v11; // r8
  int v12; // ebx
  int v13; // eax

  v4 = *((_QWORD *)this + 54);
  if ( v4 )
  {
    v8 = (*(_DWORD *)(v4 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v10 )
  {
    CTimelineBase::CTimelineBase(v10, a4, 0.0, 1.0, 0);
    *v11 = &CTimeline<float>::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 54) = v11;
  if ( !v11 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x123u);
LABEL_14:
    CAnimatedGlassSheet::StopAnimation(this);
    return (unsigned int)v12;
  }
  *((struct tagRECT *)this + 24) = *a2;
  *((struct tagRECT *)this + 25) = *a3;
  v13 = CAnimatedGlassSheet::RegisterGlobalTimer(this);
  v12 = v13;
  if ( v13 >= 0 )
    CAnimatedGlassSheet::AdjustTargetRect((RECT *)this);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x128u);
  if ( v12 < 0 )
    goto LABEL_14;
  return (unsigned int)v12;
}
