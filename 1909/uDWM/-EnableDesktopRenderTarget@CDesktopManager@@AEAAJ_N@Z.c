/*
 * XREFs of ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004BDC8
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004DB50 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000ACE8 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002A878 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002CAD8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D1E8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x1800397DC (-InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18004BECC (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z @ 0x18004BF70 (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007FD7C (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableDesktopRenderTarget(CDesktopManager *this, char a2)
{
  CDesktopManager *v2; // rdi
  unsigned int v3; // ebx
  int v5; // eax
  CWindowList *v6; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int MonitorRenderTargets; // eax
  bool v10; // dl
  int v12; // eax
  int v13; // eax
  void *v14; // [rsp+28h] [rbp-10h]
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = (unsigned __int64)this;
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = 0;
  if ( a2 != *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) )
  {
    if ( a2 )
    {
      GetDesktopID(1LL, &v15);
      v5 = CDesktopManager::SendSwitchModeCommand(v15);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5CFu, v14);
        return v3;
      }
      v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v15);
      CWindowList::BringDesktopToFront(v6, RenderTargetRootVisualForDesktop);
      inserted = CVisualProxy::InsertChildAt(
                   *((CVisualProxy **)v2 + 18),
                   *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61)
                                                       + 80LL)
                                           + 16LL),
                   0);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x5D5u, v14);
        return v3;
      }
      CWindowList::SetRenderTargetForDesktops(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
        *((struct IDCompositionDesktopTargetPartner **)v2 + 10));
      MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(v2);
      v3 = MonitorRenderTargets;
      if ( MonitorRenderTargets < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MonitorRenderTargets, 0x5D9u, v14);
        return v3;
      }
      v10 = 1;
    }
    else
    {
      CWindowList::SetRenderTargetForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), 0LL);
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v2 + 9) + 8LL))(*((_QWORD *)v2 + 9), 0LL);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x5E7u, v14);
        return v3;
      }
      v13 = CDesktopManager::ReleaseMonitorRenderTargets(v2);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5E9u, v14);
        return v3;
      }
      v10 = 0;
    }
    CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
      v10);
    *((_BYTE *)v2 + 16) = a2;
  }
  return v3;
}
