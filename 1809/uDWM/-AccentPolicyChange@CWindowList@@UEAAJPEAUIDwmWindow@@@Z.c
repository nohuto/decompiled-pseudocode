/*
 * XREFs of ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180036880
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180036980 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::AccentPolicyChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  _DWORD *v7; // rax
  CTopLevelWindow *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-28h] BYREF
  struct CWindowData *v11[2]; // [rsp+38h] [rbp-20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1405u);
  }
  else
  {
    v6 = v11[0];
    if ( v11[0] )
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 216LL))(
                       a2,
                       v11);
      if ( *((_DWORD *)v6 + 38) != *v7 || *((_DWORD *)v6 + 39) != v7[1] || *((_DWORD *)v6 + 40) != v7[2] )
      {
        *(_OWORD *)((char *)v6 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 216LL))(
                                                     a2,
                                                     v11);
        v8 = (CTopLevelWindow *)*((_QWORD *)v6 + 49);
        if ( v8 )
          CTopLevelWindow::OnAccentPolicyUpdated(v8);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}
