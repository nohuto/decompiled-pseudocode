/*
 * XREFs of _lambda_583260ce1dd6aa3aeb3daffdf12db906_::operator() @ 0x18001BC34
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_583260ce1dd6aa3aeb3daffdf12db906___::Run @ 0x18001BC10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_583260ce1dd6aa3aeb3daffdf12db906___--.c)
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18001BD58 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001BEB8 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_583260ce1dd6aa3aeb3daffdf12db906_::operator()(__int64 a1)
{
  int v2; // edi
  char v3; // r14
  const char *v4; // r9
  __int64 v5; // rax
  HWND v6; // rsi
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // edx
  __int16 v10; // r8
  __int16 v11; // r8
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v2 = **(_DWORD **)a1;
    if ( v2 == 5 )
    {
      v3 = 1;
      v2 = 4;
    }
    else
    {
      v3 = 0;
    }
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 288LL) + 192LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL),
      &SRWLock);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = (HWND)*(int *)(v5 + 304);
    v7 = *(_DWORD *)(v5 + 488);
    if ( v2 == v7 )
    {
LABEL_12:
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( v3 && v6 )
        SetForegroundWindow(v6);
      return 0LL;
    }
    if ( v7 )
    {
      *(_DWORD *)(v5 + 488) = v2;
      v8 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v8 + 364) & 4) == 0 )
      {
        if ( (unsigned int)(*(_DWORD *)(v8 + 488) - 4) > 1 )
        {
          v10 = 0;
          v9 = 2;
        }
        else
        {
          v9 = 4;
          v10 = 2;
        }
        v11 = v10 + 2;
        if ( v9 != ((*(unsigned __int16 *)(v8 + 260) >> 1) & 7) )
        {
          *(_WORD *)(v8 + 260) = *(_WORD *)(v8 + 260) & 0xFFF1 | (2 * v11);
          WindowWrapperBase::CommitImportanceVector(*(WindowWrapperBase **)(a1 + 8));
          v8 = *(_QWORD *)(a1 + 8);
        }
      }
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)v8);
      goto LABEL_12;
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 2147947423LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x35B,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
