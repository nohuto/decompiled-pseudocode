/*
 * XREFs of ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002FDAC
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180030060 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180033640 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 * Callees:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000ACE8 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D1E8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002FEE4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18002FF34 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18002FF74 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180030380 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::DesktopSwitchImmediately(CLoginTransition **this, __int64 a2)
{
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v5; // eax
  int v6; // ebx
  CContactManager *v7; // rsi
  int v8; // eax
  int refreshed; // eax
  CBaseObject *v10; // rcx
  CLoginTransition *v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  void *v14; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop((CWindowList *)this, a2);
  v5 = CWindowList::BringDesktopToFront((CWindowList *)this, RenderTargetRootVisualForDesktop);
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 6462;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v13, v14);
    goto LABEL_12;
  }
  v7 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v8 = CContactManager::Reset(v7);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x83Du, v14);
  }
  else
  {
    refreshed = CContactManager::RefreshPresentationModeSettings(v7);
    v6 = refreshed;
    if ( refreshed < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, refreshed, 0x83Eu, v14);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x193Fu, v14);
    goto LABEL_12;
  }
  v10 = this[66];
  if ( v10 )
    CBaseObject::Release(v10);
  this[66] = CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2);
  if ( CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) )
    _InterlockedIncrement((volatile signed __int32 *)CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) + 2);
  v11 = this[65];
  if ( v11 )
    CLoginTransition::StopAnimation(v11);
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL));
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 6477;
    goto LABEL_19;
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return (unsigned int)v6;
}
