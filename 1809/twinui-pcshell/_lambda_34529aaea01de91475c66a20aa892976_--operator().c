/*
 * XREFs of _lambda_34529aaea01de91475c66a20aa892976_::operator() @ 0x180075114
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_34529aaea01de91475c66a20aa892976___::Run @ 0x1800750F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_34529aaea01de91475c66a20aa892976___--.c)
 * Callees:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800496D4 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_34529aaea01de91475c66a20aa892976_::operator()(__int64 a1)
{
  int *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]

  *(_OWORD *)v7 = 0uLL;
  v2 = **(int ***)a1;
  v7[0] = (float)*v2;
  v7[1] = (float)v2[1];
  v7[2] = (float)(v2[2] - *v2);
  v3 = v2[3] - v2[1];
  v7[3] = (float)v3;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
    WindowWrapperBase::SetDesiredPosition(*(_QWORD *)(a1 + 8), (__int64)v7, 3, 0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB6,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
