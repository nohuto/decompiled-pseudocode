/*
 * XREFs of _lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6_::operator() @ 0x18024F864
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6___::Run @ 0x180250C90 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6___--.c)
 * Callees:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800496D4 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
    v5 = 0uLL;
    *((_QWORD *)&v5 + 1) = *(_QWORD *)a1[1];
    WindowWrapperBase::SetDesiredPosition(*a1, (__int64)&v5, 2, 0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x15D,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
