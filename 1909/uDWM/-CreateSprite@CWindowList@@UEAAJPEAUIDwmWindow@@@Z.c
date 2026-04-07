/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000F808 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18000FD70 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012070 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014254 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001850C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180018E44 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // r14
  struct CWindowData *v7; // rax
  struct CWindowData **v8; // rcx
  __int64 Element; // rax
  bool v10; // r8
  struct CWindowData **v11; // rcx
  CAnimationScheduler *v12; // rdi
  char v13; // bl
  char v14; // al
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-28h]
  void *v18; // [rsp+28h] [rbp-20h]
  struct CWindowData *v19; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v19 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v19);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 2061;
LABEL_31:
    v16 = SyncedWindowData;
    goto LABEL_32;
  }
  v6 = v19;
  if ( v19 )
    goto LABEL_3;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    goto LABEL_24;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v19);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 2065;
    goto LABEL_31;
  }
  v6 = v19;
  if ( !v19 )
  {
LABEL_24:
    v5 = -2147024890;
    v17 = 2069;
LABEL_26:
    v16 = v5;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v17, v18);
    goto LABEL_18;
  }
LABEL_3:
  if ( (*((_BYTE *)v6 + 604) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v6);
  if ( !*((_DWORD *)v6 + 32) )
  {
    SyncedWindowData = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD))(*(_QWORD *)a2 + 312LL))(
                         a2,
                         *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL));
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v17 = 2081;
      goto LABEL_31;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v6);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 2085;
    goto LABEL_31;
  }
  v7 = *(struct CWindowData **)v6;
  if ( *(struct CWindowData **)(*(_QWORD *)v6 + 8LL) != v6
    || (v8 = (struct CWindowData **)*((_QWORD *)v6 + 1), *v8 != v6) )
  {
LABEL_33:
    __fastfail(3u);
  }
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement((char *)this + 8);
  if ( Element )
    Element += 80LL;
  if ( !Element )
  {
    v5 = -2147024882;
    v17 = 2097;
    goto LABEL_26;
  }
  v11 = *(struct CWindowData ***)(Element + 8);
  if ( *v11 != (struct CWindowData *)Element )
    goto LABEL_33;
  *((_QWORD *)v6 + 1) = v11;
  *(_QWORD *)v6 = Element;
  *v11 = v6;
  *(_QWORD *)(Element + 8) = v6;
  CWindowData::ClearSnapshot(v6, 1, v10, 1);
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 2106;
    goto LABEL_31;
  }
  if ( (*((_BYTE *)v6 + 604) & 1) != 0 )
  {
    LOBYTE(v19) = 0;
    v12 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
    v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v12, (const struct CTopLevelWindow **)v6, v14, v13, (bool *)&v19);
    if ( !(_BYTE)v19 )
    {
      SyncedWindowData = CWindowList::ShowHide(this, v6, 1);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v17 = 2115;
        goto LABEL_31;
      }
    }
  }
LABEL_18:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
