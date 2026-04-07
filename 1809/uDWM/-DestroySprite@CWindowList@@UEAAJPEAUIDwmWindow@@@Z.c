/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18000D284 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180010664 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B2F4 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180020E80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  CTopLevelWindow3D *v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  CWindowData *v10; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v9 = 2264;
    goto LABEL_19;
  }
  v6 = v10;
  if ( v10 )
  {
    v7 = (CTopLevelWindow3D *)*((_QWORD *)v10 + 50);
    LOBYTE(v10) = 1;
    if ( !v7 )
      goto LABEL_6;
    SyncedWindowData = CTopLevelWindow3D::BeginDestroySprite(v7, (bool *)&v10);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v9 = 2270;
      goto LABEL_19;
    }
    if ( !(_BYTE)v10 )
    {
      *((_BYTE *)v6 + 596) |= 4u;
      if ( !*((_QWORD *)v6 + 53) && !CWindowData::IsImmersiveWindow(v6) )
        CWindowData::SnapshotWindow(v6);
      SyncedWindowData = CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 280), (__int64)v6);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v9 = 2289;
LABEL_19:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, v9);
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
        v9 = 2294;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x8D9u);
  }
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
