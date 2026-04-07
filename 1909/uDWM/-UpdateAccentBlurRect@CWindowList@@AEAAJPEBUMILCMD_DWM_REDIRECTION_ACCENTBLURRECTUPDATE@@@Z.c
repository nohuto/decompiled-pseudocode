/*
 * XREFs of ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180002618
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x1800026A4 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800166DC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::UpdateAccentBlurRect(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  CAccent *v8; // rcx
  void *v10; // [rsp+28h] [rbp-10h]
  struct CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v11);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x118Fu, v10);
  }
  else if ( v11 )
  {
    v7 = *((_QWORD *)v11 + 50);
    if ( v7 )
    {
      v8 = *(CAccent **)(v7 + 264);
      if ( v8 )
        CAccent::UpdateAccentBlurRect(v8, (const struct tagRECT *)((char *)a2 + 12));
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
