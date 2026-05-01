/*
 * XREFs of ?GetCurrentDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1800745E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCurrentDesktop(CVirtualDesktopManager *this, struct IVirtualDesktop **a2)
{
  struct IVirtualDesktop *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &SRWLock);
  v4 = (struct IVirtualDesktop *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IVirtualDesktop *)*((_QWORD *)this + 17);
  }
  *a2 = v4;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
