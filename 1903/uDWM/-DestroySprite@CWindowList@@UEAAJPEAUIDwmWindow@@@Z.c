/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000FB50
 * Callers:
 *     <none>
 * Callees:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010728 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800235F0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026464 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180026C70 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18003C848 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  CTopLevelWindow3D *v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-28h]
  void *v10; // [rsp+28h] [rbp-20h]
  CWindowData *v11; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v9 = 2274;
    goto LABEL_19;
  }
  v6 = v11;
  if ( v11 )
  {
    v7 = (CTopLevelWindow3D *)*((_QWORD *)v11 + 51);
    LOBYTE(v11) = 1;
    if ( !v7 )
      goto LABEL_6;
    SyncedWindowData = CTopLevelWindow3D::BeginDestroySprite(v7, (bool *)&v11);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v9 = 2280;
      goto LABEL_19;
    }
    if ( !(_BYTE)v11 )
    {
      *((_BYTE *)v6 + 604) |= 4u;
      if ( !*((_QWORD *)v6 + 54) && !CWindowData::IsImmersiveWindow(v6) )
        CWindowData::SnapshotWindow(v6);
      SyncedWindowData = CGenericSet<CWindowData *>::Add((char *)this + 280, v6);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v9 = 2299;
LABEL_19:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, v9, v10);
        goto LABEL_8;
      }
    }
    else
    {
LABEL_6:
      CWindowList::ImmediateDestroySprite(this, v6);
    }
    if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    {
      SyncedWindowData = CWindowList::DestroyWindow(this, a2);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v9 = 2304;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x8E3u, v10);
  }
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}
