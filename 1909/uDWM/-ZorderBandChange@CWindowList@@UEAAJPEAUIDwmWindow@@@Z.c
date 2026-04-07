/*
 * XREFs of ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180038060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ZorderBandChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  struct CWindowData *v6; // rdi
  void *v8; // [rsp+28h] [rbp-10h]
  struct CWindowData *v9; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v9);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xC9Eu, v8);
  }
  else
  {
    v6 = v9;
    if ( v9 )
      *((_DWORD *)v6 + 28) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
