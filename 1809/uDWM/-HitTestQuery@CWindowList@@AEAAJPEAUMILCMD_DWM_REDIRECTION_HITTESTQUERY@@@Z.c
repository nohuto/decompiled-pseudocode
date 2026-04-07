/*
 * XREFs of ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x180004158
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180004224 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::HitTestQuery(CWindowList *this, struct MILCMD_DWM_REDIRECTION_HITTESTQUERY *a2)
{
  HWND v4; // rdx
  unsigned int v5; // ebp
  int v6; // edi
  int SyncedWindowDataByHwnd; // eax
  unsigned int v8; // ebx
  CTopLevelWindow *v9; // rcx
  bool v10; // r8
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  struct CWindowData *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v5 = -2;
  v6 = 0;
  v12 = -2;
  v13 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v13);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x167Cu);
  }
  else
  {
    if ( v13 )
    {
      v9 = (CTopLevelWindow *)*((_QWORD *)v13 + 49);
      if ( v9 )
      {
        v10 = 1;
        if ( (*((_BYTE *)a2 + 24) & 1) == 0 && *((_DWORD *)a2 + 3) != 513 )
          v10 = *((_DWORD *)a2 + 3) == 161;
        CTopLevelWindow::HitTestQuery(v9, (const struct tagPOINT *)a2 + 2, v10, *((_DWORD *)a2 + 10), &v12);
        v5 = v12;
      }
    }
    *((_DWORD *)a2 + 11) = v5;
    LOBYTE(v6) = v5 != -2;
    *((_DWORD *)a2 + 12) = v6;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v8;
}
