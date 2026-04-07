/*
 * XREFs of ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000EE90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000FA8C (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClientGlassChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  CWindowList *v7; // rcx
  void *v9; // [rsp+28h] [rbp-10h]
  struct CWindowData *v10; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v10);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1230u, v9);
  }
  else
  {
    v6 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 160LL))(a2, (char *)v10 + 260);
      CWindowList::OnClientGlassChange(v7, v6);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v5;
}
