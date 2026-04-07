/*
 * XREFs of ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18008906C
 * Callers:
 *     ??1CWindowList@@UEAA@XZ @ 0x18008898C (--1CWindowList@@UEAA@XZ.c)
 *     ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x18008CCE0 (-SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CWindowList::CommitAndCloseResizeCompSyncObject(CWindowList *this)
{
  __int64 v1; // rdx
  int v3; // eax
  void *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 71);
  if ( v1 )
  {
    if ( *((_BYTE *)this + 602) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA73,
          (__int64)"windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v3);
      v1 = *((_QWORD *)this + 71);
      *((_BYTE *)this + 602) = 0;
    }
    NtDCompositionCommitSynchronizationObject(v1);
    ConfirmResizeCommit(*((_QWORD *)this + 72));
    v4 = (void *)*((_QWORD *)this + 71);
    *((_QWORD *)this + 72) = 0LL;
    CloseHandle(v4);
    *((_QWORD *)this + 71) = 0LL;
  }
}
