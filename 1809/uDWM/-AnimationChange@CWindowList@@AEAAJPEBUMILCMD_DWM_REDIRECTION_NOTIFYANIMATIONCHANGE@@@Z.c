/*
 * XREFs of ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18000DDBC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18003CE2C (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::AnimationChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *a2)
{
  HWND v4; // rdx
  unsigned int v5; // ebx
  int SyncedWindowDataByHwnd; // eax
  struct CWindowData *v8; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v5 = 0;
  if ( v4 )
  {
    v8 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v8);
    v5 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x1851u);
    }
    else if ( v8 )
    {
      *((_BYTE *)v8 + 596) = *((_BYTE *)v8 + 596) & 0xDF | (*((_DWORD *)a2 + 3) == 0 ? 0x20 : 0);
    }
  }
  else
  {
    CDesktopManager::SetWindowAnimation(*((_DWORD *)a2 + 3) != 0);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}
