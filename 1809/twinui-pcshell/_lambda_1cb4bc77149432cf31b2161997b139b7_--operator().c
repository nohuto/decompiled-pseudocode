/*
 * XREFs of _lambda_1cb4bc77149432cf31b2161997b139b7_::operator() @ 0x18024F3E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1cb4bc77149432cf31b2161997b139b7___::Run @ 0x180250B40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1cb4bc77149432cf31b2161997b139b7___--.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1cb4bc77149432cf31b2161997b139b7_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)*a1 + 160LL))(*a1, *a1[1]);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x299,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
