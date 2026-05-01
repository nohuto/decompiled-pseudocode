/*
 * XREFs of ?get_ViewFrameworkViewType@WindowWrapperBase@@UEAAJPEAW4ViewFrameworkViewType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802C84D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_ViewFrameworkViewType(
        WindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::ViewFrameworkViewType *a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &SRWLock);
  *(_DWORD *)a2 = *((_DWORD *)this + 117);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
