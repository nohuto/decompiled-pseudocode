/*
 * XREFs of ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800147A4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800AF780 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ChildContentChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  int SyncedWindowData; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rsi
  char v8; // al
  CDesktopManager *v9; // rbp
  int v11; // eax
  void *v12; // [rsp+28h] [rbp-20h]
  CWindowData *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x13D3u, v12);
  }
  else
  {
    v7 = v13;
    if ( v13 )
    {
      v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 184LL))(a2);
      if ( ((*((_BYTE *)v7 + 605) & 0x10) != 0) == v8
        || (*((_BYTE *)v7 + 605) ^= (*((_BYTE *)v7 + 605) ^ (16 * v8)) & 0x10,
            v11 = CWindowData::NotifyRepresentationChanged(v7),
            v6 = v11,
            v11 >= 0) )
      {
        v9 = CDesktopManager::s_pDesktopManagerInstance;
        if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 194) )
        {
          do
            CDesktopThumbnailBase::RecloneWindow(*(CDesktopThumbnailBase **)(*((_QWORD *)v9 + 94) + 8LL * v4++), v7);
          while ( v4 < *((_DWORD *)v9 + 194) );
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x13DDu, v12);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v6;
}
