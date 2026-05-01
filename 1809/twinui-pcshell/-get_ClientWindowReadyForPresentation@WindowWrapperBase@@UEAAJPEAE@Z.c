/*
 * XREFs of ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x18006B0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_ClientWindowReadyForPresentation(WindowWrapperBase *this, bool *a2)
{
  bool v4; // al
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 30) + 192LL))(*((_QWORD *)this + 30), &SRWLock);
  v4 = *((_QWORD *)this + 40) && !*((_DWORD *)this + 82);
  *a2 = v4;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
