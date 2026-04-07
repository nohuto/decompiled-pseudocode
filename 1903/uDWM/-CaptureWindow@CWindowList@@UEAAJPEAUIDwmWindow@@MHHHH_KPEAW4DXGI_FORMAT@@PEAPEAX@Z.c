/*
 * XREFs of ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18008F310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x18008D3BC (-GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
 */

__int64 __fastcall CWindowList::CaptureWindow(CWindowList *this, struct IDwmWindow *a2, float a3)
{
  int SyncedWindowData; // eax
  unsigned int v6; // ebx
  int v7; // r9d
  CTopLevelWindow *v8; // rcx
  unsigned int CanvasRootCompositionNodeHandle; // edi
  unsigned int v11; // [rsp+20h] [rbp-78h]
  unsigned int v12; // [rsp+60h] [rbp-38h] BYREF
  struct CWindowData *v13; // [rsp+68h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+70h] [rbp-28h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0;
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v6 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    if ( !v13
      || (v8 = (CTopLevelWindow *)*((_QWORD *)v13 + 50)) == 0LL
      || (CanvasRootCompositionNodeHandle = CTopLevelWindow::GetCanvasRootCompositionNodeHandle(v8)) == 0 )
    {
      v6 = -2147024890;
      v11 = 5447;
      v7 = -2147024890;
      goto LABEL_12;
    }
    SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                                  + 5)
                                                                                                + 16LL)
                                                                                  + 96LL))(
                         *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                         20LL,
                         &v12);
    v6 = SyncedWindowData;
    if ( SyncedWindowData >= 0 )
    {
      SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                           + 5)
                                                                                         + 16LL)
                                                                           + 360LL))(
                           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                           v12,
                           CanvasRootCompositionNodeHandle);
      v6 = SyncedWindowData;
      if ( SyncedWindowData >= 0 )
        goto LABEL_13;
      v11 = 5458;
    }
    else
    {
      v11 = 5448;
    }
  }
  else
  {
    v11 = 5441;
  }
  v7 = SyncedWindowData;
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v11);
LABEL_13:
  if ( v12 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v6;
}
