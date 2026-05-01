/*
 * XREFs of _lambda_b19e27c48b295a3a48a5cf32f8a10a66_::operator() @ 0x180073564
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccb0cf548cc3fece8ee6b509d46c06e0___::Run @ 0x1800734F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccb0cf548cc3fece8ee6b509d46c06e0___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_b19e27c48b295a3a48a5cf32f8a10a66_::operator()(_QWORD *a1)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 120LL) + 80LL))(
         *(_QWORD *)(*a1 + 120LL),
         *a1 + 152LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x599,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2,
      v3);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 200LL))(*a1);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
