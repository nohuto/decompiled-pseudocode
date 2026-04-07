/*
 * XREFs of ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001286C (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E460 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::ActivationChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  char v7; // al
  CVisual *v8; // rcx
  int v9; // eax
  CWindowIconic *v10; // rcx
  struct CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x12F3u);
  }
  else
  {
    v6 = v12;
    if ( v12 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
      *((_BYTE *)v6 + 596) &= ~2u;
      *((_BYTE *)v6 + 596) |= 2 * (v7 & 1);
      v8 = (CVisual *)*((_QWORD *)v6 + 49);
      if ( v8 )
      {
        v9 = *((_DWORD *)v8 + 20);
        if ( (v9 & 0x8000) == 0 )
        {
          *((_DWORD *)v8 + 20) = v9 | 0x8000;
          CVisual::PropagateDirtyChildren(v8);
        }
      }
      v10 = (CWindowIconic *)*((_QWORD *)v6 + 54);
      if ( v10 )
        CWindowIconic::OnWindowStyleUpdated(v10, 1);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
