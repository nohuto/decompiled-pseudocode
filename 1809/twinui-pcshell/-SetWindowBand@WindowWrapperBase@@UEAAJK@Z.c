/*
 * XREFs of ?SetWindowBand@WindowWrapperBase@@UEAAJK@Z @ 0x1800681F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetWindowBand(WindowWrapperBase *this, unsigned int a2)
{
  __int64 v4; // rsi
  _QWORD *v6; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 184LL))(*((_QWORD *)this + 35), &SRWLock);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35));
  *((_DWORD *)this + 125) = a2;
  v4 = *((int *)this + 74);
  if ( *((_DWORD *)this + 74) )
  {
    if ( a2 )
    {
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                       *((_QWORD *)this + 35),
                       &v7);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v6 + 32LL))(*v6, v4, 0LL, a2);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
