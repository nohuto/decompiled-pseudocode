/*
 * XREFs of _lambda_3e477fe56ddb224def88d90768e8b76f_::operator() @ 0x18012703C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3e477fe56ddb224def88d90768e8b76f___::Run @ 0x180127DF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3e477fe56ddb224def88d90768e8b76f___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_3e477fe56ddb224def88d90768e8b76f_::operator()(__int64 a1)
{
  int v2; // ebx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 120LL) + 208LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL),
           *(unsigned int *)(a1 + 24));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        910LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v3);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 212LL);
  ReleaseSRWLockExclusive(v4);
}
