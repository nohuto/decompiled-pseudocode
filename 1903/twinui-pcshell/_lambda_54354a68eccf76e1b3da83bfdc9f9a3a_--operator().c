/*
 * XREFs of _lambda_54354a68eccf76e1b3da83bfdc9f9a3a_::operator() @ 0x1802A5E6C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_54354a68eccf76e1b3da83bfdc9f9a3a___::Run @ 0x1802A77C0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_54354a68eccf76e1b3da83bfdc9f9a3a___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_54354a68eccf76e1b3da83bfdc9f9a3a_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  ***(_DWORD ***)a1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, **(_QWORD **)a1);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1048LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v5);
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x41B,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
