/*
 * XREFs of _lambda_63a03028b23601c3eeae25fd2827bd0e_::operator() @ 0x18007FD84
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_63a03028b23601c3eeae25fd2827bd0e___::Run @ 0x18007FD60 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_63a03028b23601c3eeae25fd2827bd0e___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_63a03028b23601c3eeae25fd2827bd0e_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  int v4; // edx
  _QWORD *v5; // r8
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // eax
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v11 = -2;
  v2 = *((_QWORD *)*a1 + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
    v4 = *a1[1];
    if ( (*a1)[67] == v4 )
    {
LABEL_8:
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      return 0LL;
    }
    (*a1)[67] = v4;
    v5 = *a1;
    v6 = (*a1)[67];
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v8 = 2LL;
          goto LABEL_7;
        }
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x8EB,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)0x8000FFFFLL,
          -2);
      }
      v8 = 1LL;
    }
    else
    {
      v8 = 0LL;
    }
LABEL_7:
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5[13] + 104LL))(v5[13], v8);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8EE,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9,
        v11);
      JUMPOUT(0x18011955CLL);
    }
    goto LABEL_8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8F1,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
