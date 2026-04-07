/*
 * XREFs of ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x1800101A0 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001468C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003A804 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CloakChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3, bool a4)
{
  int SyncedWindowData; // eax
  int v9; // edi
  struct CWindowData *v10; // rsi
  CAnimationScheduler *v11; // rbx
  char v12; // al
  char v13; // al
  char v14; // al
  struct CWindowData *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-48h]
  void *v26; // [rsp+28h] [rbp-40h]
  bool v27; // [rsp+40h] [rbp-28h] BYREF
  struct CWindowData *v28; // [rsp+48h] [rbp-20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v28 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v28);
  v9 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v25 = 5530;
    goto LABEL_20;
  }
  v10 = v28;
  if ( !v28 )
    goto LABEL_9;
  v27 = 0;
  v11 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
  CAnimationScheduler::OnWindowCloakChange(v11, v10, v12, a4, &v27);
  if ( !v27 )
  {
    v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
    *((_BYTE *)v10 + 607) &= ~0x80u;
    *((_BYTE *)v10 + 607) |= v13 << 7;
    if ( a4 )
    {
      if ( !a3 )
        goto LABEL_6;
      v28 = 0LL;
      SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v28);
      v9 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v25 = 5549;
      }
      else
      {
        v16 = v28;
        if ( !v28 )
          goto LABEL_6;
        SyncedWindowData = CLivePreview::OnWindowShowHide(
                             *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
                             v28,
                             0LL,
                             1);
        v9 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v25 = 5554;
        }
        else
        {
          SyncedWindowData = CLivePreview::OnWindowShowHide(
                               *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
                               v16,
                               0LL,
                               0);
          v9 = SyncedWindowData;
          if ( SyncedWindowData < 0 )
          {
            v25 = 5555;
          }
          else
          {
            v9 = 0;
            v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
            LOBYTE(v17) = *(_BYTE *)(v18 + 280);
            if ( (_BYTE)v17 )
            {
              v20 = *(_QWORD *)(v18 + 536);
              v21 = 0LL;
              v22 = 0LL;
              if ( v20 )
                v21 = *(_QWORD *)(v20 + 40);
              v23 = *(_QWORD *)(v18 + 544);
              if ( v23 )
                v22 = *(_QWORD *)(v23 + 40);
              LODWORD(v26) = *(_DWORD *)(v18 + 296);
              v24 = CLivePreview::Activate(v18, v17, v21, v22, *(_DWORD *)(v18 + 560));
              v9 = v24;
              if ( v24 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x3F7u, v26);
            }
            if ( v9 < 0 )
            {
              v25 = 5556;
              v19 = v9;
              goto LABEL_22;
            }
            SyncedWindowData = CWindowList::ShowHide(this, v16, 1);
            v9 = SyncedWindowData;
            if ( SyncedWindowData >= 0 )
              goto LABEL_6;
            v25 = 5557;
          }
        }
      }
    }
    else
    {
      SyncedWindowData = CWindowList::ShowHide(this, v10, 1);
      v9 = SyncedWindowData;
      if ( SyncedWindowData >= 0 )
        goto LABEL_6;
      v25 = 5544;
    }
LABEL_20:
    v19 = SyncedWindowData;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v25, v26);
    goto LABEL_9;
  }
LABEL_6:
  if ( *((char *)v10 + 607) >= 0 )
  {
    v14 = *((_BYTE *)v10 + 608);
    if ( (v14 & 4) == 0 )
      *((_BYTE *)v10 + 608) = v14 & 0xF7;
  }
LABEL_9:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v9;
}
