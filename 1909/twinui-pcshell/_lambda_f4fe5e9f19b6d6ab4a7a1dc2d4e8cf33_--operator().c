/*
 * XREFs of _lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33_::operator() @ 0x1802C5D40
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33___::Run @ 0x1802C6F50 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33___--.c)
 * Callees:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047274 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f4fe5e9f19b6d6ab4a7a1dc2d4e8cf33_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(*a1 + 288);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
    v5[0] = 0LL;
    v5[1] = *(_QWORD *)a1[1];
    WindowWrapperBase::SetDesiredPosition(*a1, (__int64)v5, 2, 0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x17F,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
