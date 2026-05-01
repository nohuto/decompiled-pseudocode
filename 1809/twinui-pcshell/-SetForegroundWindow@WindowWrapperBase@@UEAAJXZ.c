/*
 * XREFs of ?SetForegroundWindow@WindowWrapperBase@@UEAAJXZ @ 0x180075EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::SetForegroundWindow(WindowWrapperBase *this)
{
  HWND v2; // rbx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 192LL))(*((_QWORD *)this + 35), &SRWLock);
  v2 = (HWND)*((int *)this + 74);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return !SetForegroundWindow(v2) ? 0x80004005 : 0;
}
