/*
 * XREFs of ?CanViewMoveDesktops@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180385B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CanViewMoveDesktops(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        int *a3)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &SRWLock);
  *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 11) + 48LL))(
          *((_QWORD *)this + 11),
          a2);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
