/*
 * XREFs of ?get_CanHandleCloseRequest@WindowWrapperBase@@UEAAJPEAE@Z @ 0x180251570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_CanHandleCloseRequest(WindowWrapperBase *this, unsigned __int8 *a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 192LL))(*((_QWORD *)this + 34), &SRWLock);
  *a2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 120LL))((char *)this - 8);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
