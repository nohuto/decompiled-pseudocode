/*
 * XREFs of _lambda_be4a23874ab7a75b5a94905273a4a2ff_::operator() @ 0x18001EF94
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_be4a23874ab7a75b5a94905273a4a2ff___::Run @ 0x18001EF70 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_be4a23874ab7a75b5a94905273a4a2ff___--.c)
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18001F0B8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001F220 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_be4a23874ab7a75b5a94905273a4a2ff_::operator()(__int64 a1)
{
  int v2; // r14d
  int v3; // esi
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 v6; // rax
  HWND v7; // rdi
  int v8; // ecx
  __int64 v9; // rcx
  __int16 v10; // r8
  int v11; // edx
  __int16 v12; // r8
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]

  v2 = **(_DWORD **)a1;
  v3 = v2;
  if ( v2 == 5 )
    v3 = 4;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (HWND)*(int *)(v6 + 296);
    v8 = *(_DWORD *)(v6 + 472);
    if ( v3 == v8 )
    {
LABEL_12:
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( v2 == 5 && v7 )
        SetForegroundWindow(v7);
      return 0LL;
    }
    if ( v8 )
    {
      *(_DWORD *)(v6 + 472) = v3;
      v9 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v9 + 356) & 4) == 0 )
      {
        if ( (unsigned int)(*(_DWORD *)(v9 + 472) - 4) > 1 )
        {
          v10 = 0;
          v11 = 2;
        }
        else
        {
          v10 = 2;
          v11 = 4;
        }
        v12 = v10 + 2;
        if ( v11 != ((*(unsigned __int16 *)(v9 + 252) >> 1) & 7) )
        {
          *(_WORD *)(v9 + 252) = *(_WORD *)(v9 + 252) & 0xFFF1 | (2 * v12);
          WindowWrapperBase::CommitImportanceVector(*(WindowWrapperBase **)(a1 + 8));
          v9 = *(_QWORD *)(a1 + 8);
        }
      }
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)v9);
      goto LABEL_12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FE,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x8007139FLL,
      -2);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 2147947423LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31C,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
