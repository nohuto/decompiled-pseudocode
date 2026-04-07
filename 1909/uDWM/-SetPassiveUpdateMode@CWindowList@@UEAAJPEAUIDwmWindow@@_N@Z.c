/*
 * XREFs of ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180037B00
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001850C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::SetPassiveUpdateMode(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  int SyncedWindowData; // eax
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rax
  int v12; // eax
  void *v13; // [rsp+28h] [rbp-10h]
  struct CWindowData *v14; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xABEu, v13);
  }
  else if ( v14 )
  {
    v9 = *((_QWORD *)v14 + 50);
    if ( v9 )
    {
      v8 = 0;
      if ( a3 != ((*(_BYTE *)(v9 + 241) & 8) != 0) )
      {
        LOBYTE(v7) = a3;
        v11 = *(_QWORD *)(v9 + 16);
        *(_BYTE *)(v9 + 241) = (8 * a3) | *(_BYTE *)(v9 + 241) & 0xF7;
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v11 + 16) + 16LL) + 512LL))(
                *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL),
                *(unsigned int *)(*(_QWORD *)(v11 + 16) + 24LL),
                v7);
        v8 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x16Eu, v13);
      }
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xAC2u, v13);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v8;
}
