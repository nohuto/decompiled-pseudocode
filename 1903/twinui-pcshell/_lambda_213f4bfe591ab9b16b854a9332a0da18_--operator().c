/*
 * XREFs of _lambda_213f4bfe591ab9b16b854a9332a0da18_::operator() @ 0x1802A5C68
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_213f4bfe591ab9b16b854a9332a0da18___::Run @ 0x1802A7790 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_213f4bfe591ab9b16b854a9332a0da18___--.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_213f4bfe591ab9b16b854a9332a0da18_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)*a1 + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)*a1 + 160LL))(*a1, *a1[1]);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C2,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
