/*
 * XREFs of ?BeginWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x18007C460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::BeginWinRtActivation(WindowWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 192LL))(*((_QWORD *)this + 34), &SRWLock);
  v2 = SRWLock;
  *((_BYTE *)this + 552) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
