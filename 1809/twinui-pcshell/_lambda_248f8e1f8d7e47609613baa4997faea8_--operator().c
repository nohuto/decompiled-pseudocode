/*
 * XREFs of _lambda_248f8e1f8d7e47609613baa4997faea8_::operator() @ 0x1800474D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_248f8e1f8d7e47609613baa4997faea8___::Run @ 0x1800473C0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_248f8e1f8d7e47609613baa4997faea8___--.c)
 * Callees:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800496D4 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_248f8e1f8d7e47609613baa4997faea8_::operator()(int **a1)
{
  int *v2; // rdx
  int *v3; // rcx
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+80h] [rbp+8h]

  v7 = 0uLL;
  v2 = *a1;
  *(float *)&v7 = (float)(*a1)[4];
  *((float *)&v7 + 1) = (float)v2[5];
  *((float *)&v7 + 2) = (float)*v2;
  *((float *)&v7 + 3) = (float)v2[1];
  v3 = a1[1];
  v8 = *(_OWORD *)(v3 + 126);
  v9 = *(_OWORD *)(v3 + 130);
  v10 = *((_QWORD *)v3 + 67);
  v11 = v3[136];
  DWORD2(v9) = v2[8];
  v4 = *((_QWORD *)v3 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
    WindowWrapperBase::SetDesiredPosition(a1[1], &v7, 3LL, &v8, -2LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x251,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
