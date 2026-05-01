/*
 * XREFs of _lambda_cb9480a65b67d34783b381c09999efdd_::operator() @ 0x180020B14
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cb9480a65b67d34783b381c09999efdd___::Run @ 0x180020AF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_cb9480a65b67d34783b381c09999efdd___--.c)
 * Callees:
 *     ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020BB0 (--$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_cb9480a65b67d34783b381c09999efdd_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  int v4; // edx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h]

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
    v4 = *a1[1];
    if ( v4 != (*a1)[66] )
    {
      (*a1)[66] = v4;
      v7 = (*(__int64 (__fastcall **)(_DWORD *))(*((_QWORD *)*a1 + 2) + 272LL))(*a1 + 4);
      ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        &v7,
        *a1 + 66);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x862,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
