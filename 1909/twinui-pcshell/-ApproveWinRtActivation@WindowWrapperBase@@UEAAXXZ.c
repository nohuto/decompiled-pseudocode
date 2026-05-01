/*
 * XREFs of ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x18001BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001BEB8 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::ApproveWinRtActivation(WindowWrapperBase *this)
{
  WindowWrapperBase *v1; // rbx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v1 = this;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 192LL))(*((_QWORD *)this + 34), &SRWLock);
  *((_BYTE *)v1 + 552) = 0;
  v1 = (WindowWrapperBase *)((char *)v1 - 16);
  (*(void (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)v1 + 192LL))(v1);
  WindowWrapperBase::CommitImportanceVector(v1);
  (*(void (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)v1 + 216LL))(v1);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
