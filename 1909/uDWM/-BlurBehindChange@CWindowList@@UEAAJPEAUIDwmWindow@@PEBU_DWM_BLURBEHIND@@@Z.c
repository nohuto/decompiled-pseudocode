/*
 * XREFs of ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x18004C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180010D18 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::BlurBehindChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        const struct _DWM_BLURBEHIND *a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rdx
  DWORD dwFlags; // eax
  CTopLevelWindow *v10; // rcx
  void *v12; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v14);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1383u, v12);
  }
  else
  {
    v8 = v14;
    if ( v14 )
    {
      dwFlags = a3->dwFlags;
      if ( (a3->dwFlags & 1) != 0 )
      {
        *((_BYTE *)v14 + 605) = *((_BYTE *)v14 + 605) & 0xFB | (a3->fEnable ? 4 : 0);
        dwFlags = a3->dwFlags;
      }
      if ( (dwFlags & 4) != 0 )
        *((_BYTE *)v8 + 605) = *((_BYTE *)v8 + 605) & 0xF7 | (a3->fTransitionOnMaximized ? 8 : 0);
      v10 = (CTopLevelWindow *)*((_QWORD *)v8 + 50);
      if ( v10 )
        CTopLevelWindow::OnBlurBehindUpdated(v10);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v7;
}
