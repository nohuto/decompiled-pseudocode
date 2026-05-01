/*
 * XREFs of ?get_PointerActivationPolicy@WindowWrapperBase@@UEAAJPEAW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A8A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_PointerActivationPolicy(
        WindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::PointerActivationPolicy *a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &SRWLock);
  *(_DWORD *)a2 = *((_DWORD *)this + 58);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
