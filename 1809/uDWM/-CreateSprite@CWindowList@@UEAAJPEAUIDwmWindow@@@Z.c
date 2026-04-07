/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001BC50
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B2F4 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001EC50 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180020D8C (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180021318 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180023DEC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // r14d
  CWindowData *v6; // rsi
  CWindowData *v7; // rax
  CWindowData **v8; // rcx
  CWindowData *v9; // rax
  CWindowData **v10; // rcx
  CBaseObject *v11; // rcx
  CAnimationScheduler *v12; // rdi
  char v13; // bl
  char v14; // al
  __int64 i; // r8
  __int64 v17; // rdx
  int v18; // r9d
  bool v19; // r8
  __int64 j; // rbx
  CWindowData *v21; // rcx
  unsigned int v22; // [rsp+20h] [rbp-39h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v24; // [rsp+40h] [rbp-19h]
  __int128 v25; // [rsp+50h] [rbp-9h]
  __int128 v26; // [rsp+60h] [rbp+7h]
  __int64 v27; // [rsp+70h] [rbp+17h]
  char v28; // [rsp+78h] [rbp+1Fh]
  CWindowData *v29; // [rsp+D0h] [rbp+77h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v29 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v29);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v22 = 2051;
LABEL_45:
    v18 = SyncedWindowData;
    goto LABEL_46;
  }
  v6 = v29;
  if ( v29 )
    goto LABEL_3;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    goto LABEL_33;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v29);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v22 = 2055;
    goto LABEL_45;
  }
  v6 = v29;
  if ( !v29 )
  {
LABEL_33:
    v5 = -2147024890;
    v22 = 2059;
LABEL_35:
    v18 = v5;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v22);
    goto LABEL_21;
  }
LABEL_3:
  if ( (*((_BYTE *)v6 + 596) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v6);
  if ( !*((_DWORD *)v6 + 32) )
  {
    SyncedWindowData = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD))(*(_QWORD *)a2 + 312LL))(
                         a2,
                         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v22 = 2071;
      goto LABEL_45;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v6);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v22 = 2075;
    goto LABEL_45;
  }
  v7 = *(CWindowData **)v6;
  if ( *(CWindowData **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = (CWindowData **)*((_QWORD *)v6 + 1), *v8 != v6) )
LABEL_47:
    __fastfail(3u);
  Buffer[1] = 0LL;
  v27 = -1LL;
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  Buffer[0] = *((_QWORD *)v6 + 15);
  v24 = 0LL;
  v28 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v9 = (CWindowData *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v9 )
    v9 = (CWindowData *)((char *)v9 + 80);
  if ( !v9 )
  {
    v5 = -2147024882;
    v22 = 2087;
    goto LABEL_35;
  }
  v10 = (CWindowData **)*((_QWORD *)v9 + 1);
  if ( *v10 != v9 )
    goto LABEL_47;
  *(_QWORD *)v6 = v9;
  *((_QWORD *)v6 + 1) = v10;
  *v10 = v6;
  *((_QWORD *)v9 + 1) = v6;
  if ( (*((int *)v6 + 28) >= 8 && *((int *)v6 + 28) <= 11 || CWindowData::IsShellManaged(v6)) && *((char *)v6 + 599) < 0 )
  {
    *((_BYTE *)v6 + 600) |= 8u;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v6 + 144); *(_BYTE *)(v17 + 600) |= 8u )
    {
      v17 = *(_QWORD *)(*((_QWORD *)v6 + 69) + 8 * i);
      i = (unsigned int)(i + 1);
    }
  }
  v11 = (CBaseObject *)*((_QWORD *)v6 + 53);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)v6 + 53) = 0LL;
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 144); j = (unsigned int)(j + 1) )
    {
      v21 = *(CWindowData **)(*((_QWORD *)v6 + 69) + 8 * j);
      if ( (*((_DWORD *)v21 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v21, 1, v19, 1);
    }
    CWindowData::NotifyRepresentationChanged(v6);
  }
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v22 = 2096;
    goto LABEL_45;
  }
  if ( (*((_BYTE *)v6 + 596) & 1) != 0 )
  {
    LOBYTE(v29) = 0;
    v12 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
    v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v12, v6, v14, v13, (bool *)&v29);
    if ( !(_BYTE)v29 )
    {
      SyncedWindowData = CWindowList::ShowHide(this, v6, 1);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v22 = 2105;
        goto LABEL_45;
      }
    }
  }
LABEL_21:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
