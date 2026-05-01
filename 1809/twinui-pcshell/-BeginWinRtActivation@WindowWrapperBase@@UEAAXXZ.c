/*
 * XREFs of ?BeginWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x1800764E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::BeginWinRtActivation(WindowWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 184LL))(*((_QWORD *)this + 33), &SRWLock);
  v2 = SRWLock;
  *((_BYTE *)this + 536) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
