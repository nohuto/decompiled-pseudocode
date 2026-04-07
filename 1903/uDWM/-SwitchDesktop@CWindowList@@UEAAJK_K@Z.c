/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002C490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800182C0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002A898 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002C1BC (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002C2F4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002C464 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002F4B8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18002FA1C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x18008F0B0 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A602C (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  char v6; // r14
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  CScreenRotation *v10; // rcx
  CScreenRotation *v11; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  CLoginTransition *v17; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  int started; // eax
  CLoginTransition *v20; // rcx
  void *v21; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+68h] [rbp+20h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 1;
  v7 = CDesktopManager::SendSwitchModeCommand(a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1961u, v21);
    goto LABEL_7;
  }
  v10 = (CScreenRotation *)*((_QWORD *)this + 62);
  if ( v10 && *((_QWORD *)v10 + 3) )
    CScreenRotation::Stop(v10, 0);
  v11 = (CScreenRotation *)*((_QWORD *)this + 63);
  if ( v11 && *((_QWORD *)v11 + 3) )
    CScreenRotation::Stop(v11, 0);
  if ( !*((_QWORD *)this + 66) || a2 != 55 && a2 != 65 || !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
  {
LABEL_7:
    if ( v9 >= 0 )
      goto LABEL_8;
    goto LABEL_31;
  }
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(this, a3);
  v14 = CWindowList::BringDesktopToFront(this, RenderTargetRootVisualForDesktop);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1977u, v21);
    goto LABEL_7;
  }
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30));
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                        + 16LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 16LL));
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x197Bu, v21);
    goto LABEL_7;
  }
  if ( *((_QWORD *)this + 65) )
    goto LABEL_18;
  v16 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v16 )
  {
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_QWORD *)v16 = &CLoginTransition::`vftable';
    *(_DWORD *)(v16 + 72) = -1;
    *(_QWORD *)(v16 + 80) = -1LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_QWORD *)(v16 + 40) = 0LL;
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_BYTE *)(v16 + 68) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)this + 65) = v16;
  if ( v16 )
  {
LABEL_18:
    v17 = (CLoginTransition *)*((_QWORD *)this + 65);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, a3);
    started = CLoginTransition::StartAnimation(v17, a2, *((struct CVisual **)this + 66), RootVisualForDesktop, a3);
    v9 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x1984u, v21);
    else
      v6 = 0;
    goto LABEL_7;
  }
  v9 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1980u, v21);
LABEL_31:
  v20 = (CLoginTransition *)*((_QWORD *)this + 65);
  if ( v20 )
  {
    CLoginTransition::`scalar deleting destructor'(v20, v8);
    *((_QWORD *)this + 65) = 0LL;
  }
LABEL_8:
  if ( v6 )
    v9 = CWindowList::DesktopSwitchImmediately((CLoginTransition **)this, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return (unsigned int)v9;
}
