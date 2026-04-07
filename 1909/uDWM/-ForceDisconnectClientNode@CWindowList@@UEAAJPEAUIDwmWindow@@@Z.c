/*
 * XREFs of ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180039B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180012A84 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033790 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18007DF78 (McTemplateU0.c)
 */

__int64 __fastcall CWindowList::ForceDisconnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  struct CVisual *RootVisualForDesktop; // rax
  CDesktopManager *v8; // rcx
  int updated; // eax
  void *v11; // [rsp+28h] [rbp-10h]
  CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1633u, v11);
  }
  else
  {
    v6 = v12;
    if ( v12 )
    {
      CWindowData::ForceDisconnectClientNode(v12);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)v6 + 15));
      updated = CDesktopManager::UpdateSceneImpl(v8, RootVisualForDesktop);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x163Bu, v11);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &CommitChannel_Disconnect);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                       + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                          + 16LL));
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
