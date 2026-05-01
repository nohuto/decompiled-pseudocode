/*
 * XREFs of ?FindDesktop@CVirtualDesktopManager@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x1803EB920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::FindDesktop(
        CVirtualDesktopManager *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &SRWLock);
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 9)
                                                                                          + 88LL))(
         *((_QWORD *)this + 9),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}
