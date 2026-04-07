/*
 * XREFs of ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x18009024C
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009081C (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036220 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003899C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180039A60 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180045C74 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x1800901F4 (-RegisterGlobalTimer@CRippleEffect@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x180090444 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::Start(CRippleEffect *this, const struct tagPOINT *a2, float a3)
{
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  CVisual *v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  char v14; // al
  __int64 v15; // rax
  _QWORD *v16; // r8
  int v17; // eax
  POINT v18; // rbx
  int v19; // ecx
  __int64 v20; // kr00_8

  if ( !a2 )
  {
    v5 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467261, 0x67u);
    goto LABEL_17;
  }
  v6 = CDesktopManager::MonitorDpiFromPoint(*a2);
  v7 = *(_QWORD *)(*((_QWORD *)this + 36) + 24LL);
  *((_QWORD *)this + 31) = v7;
  v8 = MulDiv(v7, v6, 96);
  v9 = *((_DWORD *)this + 63);
  *((_DWORD *)this + 62) = v8;
  v10 = MulDiv(v9, v6, 96);
  v11 = (CVisual *)*((_QWORD *)this + 35);
  *((_DWORD *)this + 63) = v10;
  CVisual::SetSize(v11, (const struct tagSIZE *)this + 31);
  v12 = *((_QWORD *)this + 33);
  if ( v12 )
  {
    v13 = (*(_DWORD *)(v12 + 8))-- == 1;
    v14 = CDesktopManager::s_fTimelineDirty;
    if ( v13 )
      v14 = 1;
    CDesktopManager::s_fTimelineDirty = v14;
  }
  v15 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v15 )
  {
    CTimelineBase::CTimelineBase(v15, a3, 0.0, 1.0, 0);
    *v16 = &CTimeline<float>::`vftable';
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)this + 33) = v16;
  if ( !v16 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x75u);
LABEL_17:
    CRippleEffect::Stop(this);
    return (unsigned int)v5;
  }
  v17 = CRippleEffect::RegisterGlobalTimer(this);
  v5 = v17;
  if ( v17 >= 0 )
  {
    v18 = *a2;
    v19 = (int)*a2;
    v20 = *((int *)this + 62);
    *((struct tagPOINT *)this + 30) = *a2;
    *((float *)this + 64) = a3;
    v18.x = v18.y - *((_DWORD *)this + 63) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 35), v19 - v20 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 35), v18.x);
    (*(void (__fastcall **)(CRippleEffect *))(*(_QWORD *)this + 104LL))(this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x77u);
  }
  if ( v5 < 0 )
    goto LABEL_17;
  return (unsigned int)v5;
}
