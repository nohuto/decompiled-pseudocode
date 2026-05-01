/*
 * XREFs of _lambda_7464ecf0133c584dcba4bc781e3eeb3c_::operator() @ 0x18007A634
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7118b362d38d6b4d32ad205a277424b1___::Run @ 0x18007A5C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7118b362d38d6b4d32ad205a277424b1___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_7464ecf0133c584dcba4bc781e3eeb3c_::operator()(_QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 120LL) + 80LL))(
         *(_QWORD *)(*a1 + 120LL),
         *a1 + 152LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x64F,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 224LL))(*a1);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
