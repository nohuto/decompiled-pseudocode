/*
 * XREFs of ?get_VisibilityRevoked@WindowWrapperBase@@UEAAJPEAE@Z @ 0x180252180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_VisibilityRevoked(WindowWrapperBase *this, bool *a2)
{
  int v4; // eax
  bool v5; // al
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 32) + 192LL))(*((_QWORD *)this + 32), &SRWLock);
  v4 = *((_DWORD *)this + 39);
  v5 = (v4 & 0x18) != 0 && (v4 & 0x20) == 0;
  *a2 = v5;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
