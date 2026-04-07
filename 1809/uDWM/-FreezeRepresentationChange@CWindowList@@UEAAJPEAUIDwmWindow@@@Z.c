/*
 * XREFs of ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180003710
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180023DEC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180038288 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x18003B65C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800AAD7C (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CWindowList::FreezeRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  CWindowData *v6; // rdi
  char v7; // bl
  bool v8; // r8
  char v9; // bl
  int v10; // eax
  CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1433u);
  }
  else
  {
    v6 = v12;
    if ( v12 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
      if ( *((HWND *)v6 + 5) != CWindowList::GetShellWindowForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                  *((_QWORD *)v6 + 15))
        || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() == v7 )
      {
        if ( ((*((_BYTE *)v6 + 600) & 4) != 0) != v7 )
        {
          v9 = *((_BYTE *)v6 + 600) ^ (*((_BYTE *)v6 + 600) ^ (4 * v7)) & 4;
          *((_BYTE *)v6 + 600) = v9;
          if ( (v9 & 4) != 0 )
            CWindowData::SnapshotWindow(v6);
          else
            CWindowData::ClearSnapshot(v6, 1, v8, 0);
          v10 = CWindowData::NotifyRepresentationChanged(v6);
          v5 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x144Au);
        }
      }
      else
      {
        CDesktopThumbnail::FreezeDesktopThumbnail(v6, v7);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
