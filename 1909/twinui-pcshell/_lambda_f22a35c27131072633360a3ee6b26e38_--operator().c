/*
 * XREFs of _lambda_f22a35c27131072633360a3ee6b26e38_::operator() @ 0x18001DB64
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f22a35c27131072633360a3ee6b26e38___::Run @ 0x18001DB40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f22a35c27131072633360a3ee6b26e38___--.c)
 * Callees:
 *     ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18001E550 (--$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f22a35c27131072633360a3ee6b26e38_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  int v4; // edx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h]

  v2 = *((_QWORD *)*a1 + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
    v4 = *a1[1];
    if ( v4 != (*a1)[68] )
    {
      (*a1)[68] = v4;
      v7 = (*(__int64 (__fastcall **)(_DWORD *))(*((_QWORD *)*a1 + 2) + 288LL))(*a1 + 4);
      ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        &v7,
        *a1 + 68);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x919,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
