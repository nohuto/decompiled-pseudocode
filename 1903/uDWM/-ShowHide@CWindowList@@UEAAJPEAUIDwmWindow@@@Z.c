/*
 * XREFs of ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000EE10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x1800101A0 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rbp
  char v7; // al
  char v8; // dl
  char v9; // cl
  CDesktopManager *v10; // rax
  CAnimationScheduler *v11; // rdi
  char v12; // bl
  char v13; // al
  int v14; // eax
  void *v16; // [rsp+28h] [rbp-30h]
  struct CWindowData *v17; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v17);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xA35u, v16);
  }
  else
  {
    v6 = v17;
    if ( v17 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
      v8 = *((_BYTE *)v6 + 604);
      if ( v7 != (v8 & 1) )
      {
        LOBYTE(v17) = 0;
        v9 = v7 ^ v8;
        v10 = CDesktopManager::s_pDesktopManagerInstance;
        *((_BYTE *)v6 + 604) = v8 ^ v9 & 1;
        v11 = (CAnimationScheduler *)*((_QWORD *)v10 + 30);
        v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
        v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
        CAnimationScheduler::OnWindowCloakChange(v11, v6, v13, v12, (bool *)&v17);
        if ( !(_BYTE)v17 )
        {
          v14 = CWindowList::ShowHide(this, v6, 1);
          v5 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA44u, v16);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v5;
}
