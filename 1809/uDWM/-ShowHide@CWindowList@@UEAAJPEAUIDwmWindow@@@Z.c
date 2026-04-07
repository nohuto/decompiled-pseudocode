/*
 * XREFs of ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180023C40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180021318 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
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
  struct CWindowData *v16; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v16);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xA1Eu);
  }
  else
  {
    v6 = v16;
    if ( v16 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
      v8 = *((_BYTE *)v6 + 596);
      if ( v7 != (v8 & 1) )
      {
        LOBYTE(v16) = 0;
        v9 = v7 ^ v8;
        v10 = CDesktopManager::s_pDesktopManagerInstance;
        *((_BYTE *)v6 + 596) = v8 ^ v9 & 1;
        v11 = (CAnimationScheduler *)*((_QWORD *)v10 + 30);
        v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
        v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
        CAnimationScheduler::OnWindowCloakChange(v11, (const struct CTopLevelWindow **)v6, v13, v12, (bool *)&v16);
        if ( !(_BYTE)v16 )
        {
          v14 = CWindowList::ShowHide(this, v6, 1);
          v5 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA2Du);
        }
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
