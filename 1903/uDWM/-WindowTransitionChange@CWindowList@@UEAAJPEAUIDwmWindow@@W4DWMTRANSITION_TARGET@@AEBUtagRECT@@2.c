/*
 * XREFs of ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031970
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031A54 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0pd @ 0x180093548 (McTemplateU0pd.c)
 */

__int64 __fastcall CWindowList::WindowTransitionChange(
        CWindowList *a1,
        struct IDwmWindow *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  int SyncedWindowData; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  struct CWindowData *v12; // rbx
  void *v14; // [rsp+28h] [rbp-30h]
  struct CWindowData *v15; // [rsp+40h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+48h] [rbp-10h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(a1, a2, 1, &v15);
  v11 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1601u, v14);
  }
  else
  {
    v12 = v15;
    if ( v15 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0pd(v10, &UdwmTransitionTarget_Info, *((_QWORD *)v15 + 5), a3);
      CAnimationScheduler::OnWindowTransitionTargetChanged(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
        v12,
        a3,
        a4,
        a5);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v11;
}
