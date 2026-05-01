/*
 * XREFs of ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180363600
 * Callers:
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180363084 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800FCAC8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x180362834 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1803636AC (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 */

__int64 __fastcall TabletModeCoverWindow::TabletModeChanged(TabletModeCoverWindow *this, char a2)
{
  int DesktopThumbnail; // eax
  HWND v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK *)this + 4, &v8);
  *((_BYTE *)this + 120) = a2;
  if ( a2 )
  {
    DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail((TabletModeCoverWindow *)((char *)this - 80));
    if ( DesktopThumbnail < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        122LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)DesktopThumbnail);
      v5 = (HWND)*((_QWORD *)this + 3);
      *((_BYTE *)this + 120) = 0;
      ShowWindow(v5, 0);
    }
    TabletModeCoverWindow::UpdateWindowOrder((TabletModeCoverWindow *)((char *)this - 80));
  }
  else
  {
    ShowWindow(*((HWND *)this + 3), 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return 0LL;
}
