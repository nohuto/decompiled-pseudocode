/*
 * XREFs of ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800210F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001F520 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180021318 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180038E74 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CloakChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3, bool a4)
{
  char *v8; // rbp
  int v9; // ebx
  CWindowData *v10; // rdi
  int v11; // edi
  CAnimationScheduler *v12; // rbx
  char v13; // al
  char v14; // al
  int SyncedWindowData; // eax
  char v16; // al
  struct CWindowData *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  CWindowData *v21; // rax
  int v22; // eax
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-48h]
  struct CWindowData *v30; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  v9 = 0;
  v10 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v10 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v21 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( v21 )
    v10 = CWindowData::CWindowData(v21);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
    v11 = -2147024882;
    goto LABEL_28;
  }
  *((_QWORD *)v10 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v10);
  *((_QWORD *)v10 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v22 = CWindowList::SyncWindowData(this, a2, v10);
  v9 = v22;
  if ( v22 >= 0 )
LABEL_2:
    v8 = (char *)v10;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x88Bu);
  v11 = v9;
  if ( v9 < 0 )
  {
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x152Au);
    goto LABEL_11;
  }
  if ( v8 )
  {
    LOBYTE(v30) = 0;
    v12 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v12, (const struct CWindowData *)v8, v13, a4, (bool *)&v30);
    if ( (_BYTE)v30 )
    {
LABEL_8:
      if ( v8[599] >= 0 )
      {
        v16 = v8[600];
        if ( (v16 & 4) == 0 )
          v8[600] = v16 & 0xF7;
      }
      goto LABEL_11;
    }
    v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    v8[599] &= ~0x80u;
    v8[599] |= v14 << 7;
    if ( a4 )
    {
      if ( !a3 )
        goto LABEL_8;
      v30 = 0LL;
      SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v30);
      v11 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v29 = 5437;
      }
      else
      {
        v18 = v30;
        if ( !v30 )
          goto LABEL_8;
        SyncedWindowData = CLivePreview::OnWindowShowHide(
                             *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
                             v30,
                             0LL,
                             1);
        v11 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v29 = 5442;
        }
        else
        {
          SyncedWindowData = CLivePreview::OnWindowShowHide(
                               *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
                               v18,
                               0LL,
                               0);
          v11 = SyncedWindowData;
          if ( SyncedWindowData < 0 )
          {
            v29 = 5443;
          }
          else
          {
            v11 = 0;
            v20 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
            LOBYTE(v19) = *(_BYTE *)(v20 + 280);
            if ( (_BYTE)v19 )
            {
              v24 = *(_QWORD *)(v20 + 536);
              v25 = 0LL;
              v26 = 0LL;
              if ( v24 )
                v25 = *(_QWORD *)(v24 + 40);
              v27 = *(_QWORD *)(v20 + 544);
              if ( v27 )
                v26 = *(_QWORD *)(v27 + 40);
              v28 = CLivePreview::Activate(v20, v19, v25, v26, *(_DWORD *)(v20 + 560), *(_DWORD *)(v20 + 296), 0, 0LL);
              v11 = v28;
              if ( v28 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x3F6u);
            }
            if ( v11 < 0 )
            {
              v29 = 5444;
              v23 = v11;
LABEL_32:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v29);
              goto LABEL_11;
            }
            SyncedWindowData = CWindowList::ShowHide(this, v18, 1);
            v11 = SyncedWindowData;
            if ( SyncedWindowData >= 0 )
              goto LABEL_8;
            v29 = 5445;
          }
        }
      }
    }
    else
    {
      SyncedWindowData = CWindowList::ShowHide(this, (struct CWindowData *)v8, 1);
      v11 = SyncedWindowData;
      if ( SyncedWindowData >= 0 )
        goto LABEL_8;
      v29 = 5432;
    }
    v23 = SyncedWindowData;
    goto LABEL_32;
  }
LABEL_11:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v11;
}
