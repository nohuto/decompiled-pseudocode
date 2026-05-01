/*
 * XREFs of ?ShellTargetChanged@TabletModeCoverWindow@@UEAAJPEAUIApplicationView@@@Z @ 0x1803E8B40
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18004FD6C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1803E8C4C (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 */

__int64 __fastcall TabletModeCoverWindow::ShellTargetChanged(TabletModeCoverWindow *this, struct IApplicationView *a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)this + 32, (__int64)&v7);
  updated = TabletModeCoverWindow::UpdateWindowOrder((TabletModeCoverWindow *)((char *)this - 80));
  v4 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)updated);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  return v4;
}
