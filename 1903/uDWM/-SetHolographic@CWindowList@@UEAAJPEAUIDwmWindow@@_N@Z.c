/*
 * XREFs of ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800103E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008E134 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::SetHolographic(CWindowList *this, struct IDwmWindow *a2, bool a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rax
  CTopLevelWindow *v9; // rcx
  int v11; // eax
  void *v12; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xA55u, v12);
  }
  else
  {
    v8 = v14;
    if ( v14 )
    {
      *((_BYTE *)v14 + 609) &= ~1u;
      *((_BYTE *)v8 + 609) |= a3;
      v9 = (CTopLevelWindow *)*((_QWORD *)v8 + 50);
      if ( v9 )
      {
        v11 = CTopLevelWindow::SetHolographic(v9, a3);
        v7 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA5Du, v12);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v7;
}
