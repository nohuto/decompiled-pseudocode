/*
 * XREFs of ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800A8670
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000A058 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A3584 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 */

__int64 __fastcall CTabletModeTransition::OnBeginTransitionRequest(CTabletModeTransition *this)
{
  HMONITOR v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  RECT *p_rcMonitor; // rax
  int DesktopSnapshotComponent; // eax
  CBaseObject *v7; // rbx
  int v8; // eax
  CBaseObject *v10; // [rsp+30h] [rbp-50h] BYREF
  POINT pt[2]; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF

  pt[0] = 0LL;
  v10 = 0LL;
  mi.cbSize = 40;
  v2 = MonitorFromPoint(0LL, 1u);
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  v3 = 0;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    p_rcMonitor = &mi.rcMonitor;
    if ( *((_BYTE *)this + 120) )
      p_rcMonitor = &mi.rcWork;
    *(RECT *)&pt[0].x = *p_rcMonitor;
    DesktopSnapshotComponent = CTransitionVisualController::CreateDesktopSnapshotComponent(
                                 *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                                 v4,
                                 (const struct tagRECT *)pt,
                                 this,
                                 (__int64 *)&v10);
    v7 = v10;
    v3 = DesktopSnapshotComponent;
    if ( DesktopSnapshotComponent >= 0 )
    {
      v8 = CStoryboard::_AddAnimationComponent(this, v10);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v8, 0x131Au);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        DesktopSnapshotComponent,
        0x1319u);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return v3;
}
