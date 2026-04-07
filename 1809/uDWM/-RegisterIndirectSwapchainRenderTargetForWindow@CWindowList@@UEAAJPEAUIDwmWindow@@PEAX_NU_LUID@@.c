/*
 * XREFs of ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x18008BC00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180087DB0 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterIndirectSwapchainRenderTargetForWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        HANDLE hObject,
        char a4,
        struct _LUID a5)
{
  int SyncedWindowData; // ebx
  unsigned int v10; // eax
  CTopLevelWindow *v11; // rcx
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  if ( SyncedWindowData < 0 )
  {
    v10 = 5368;
    goto LABEL_8;
  }
  if ( !v15 || (v11 = (CTopLevelWindow *)*((_QWORD *)v15 + 49)) == 0LL )
  {
    SyncedWindowData = -2147024890;
    v10 = 5371;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, v10);
    if ( hObject )
      CloseHandle(hObject);
    goto LABEL_10;
  }
  v12 = CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(v11, hObject, a4, a5);
  SyncedWindowData = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1502u);
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return (unsigned int)SyncedWindowData;
}
