/*
 * XREFs of ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800994EC
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18009382C (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800943F0 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800995D0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18009B63C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::SnapToAnchor(CTetherVisual *this)
{
  __int64 v1; // rax
  bool v3; // zf
  char v4; // al
  __int64 v5; // rax
  _QWORD *v6; // r8
  int v7; // ebx
  unsigned int v8; // eax

  v1 = *((_QWORD *)this + 49);
  if ( v1 )
  {
    v3 = (*(_DWORD *)(v1 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v5 )
  {
    CTimelineBase::CTimelineBase(v5, *((float *)this + 102), 1.0, 0.0, 2);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 49) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    v8 = 326;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8);
    CTetherVisual::Stop(this);
    return (unsigned int)v7;
  }
  v7 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v7 < 0 )
  {
    v8 = 328;
    goto LABEL_12;
  }
  return (unsigned int)v7;
}
