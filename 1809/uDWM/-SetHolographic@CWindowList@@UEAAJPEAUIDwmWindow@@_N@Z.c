/*
 * XREFs of ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800112F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::SetHolographic(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  int SyncedWindowData; // eax
  int v7; // ebx
  CTopLevelWindow *v8; // rdi
  int updated; // eax
  struct CWindowData *v11; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xA3Eu);
  }
  else if ( v11 )
  {
    v8 = (CTopLevelWindow *)*((_QWORD *)v11 + 49);
    if ( v8 )
    {
      v7 = 0;
      if ( a3 != ((*((_BYTE *)v8 + 241) & 4) != 0) )
      {
        *((_BYTE *)v8 + 241) = (4 * a3) | *((_BYTE *)v8 + 241) & 0xFB;
        updated = CTopLevelWindow::UpdateWindowVisuals(v8);
        v7 = updated;
        if ( updated >= 0 )
          CTopLevelWindow::ShowWindow(v8, (*((_BYTE *)v8 + 241) & 4) == 0);
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x15Cu);
      }
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xA42u);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v7;
}
