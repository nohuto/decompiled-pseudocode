/*
 * XREFs of ?SetFocusState@WindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180064A10
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_175779e8aec8e508ceed20f7fb25cadd___ @ 0x180064A78 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_175779e8aec8e508ceed20f7fb25cadd.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetFocusState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 200LL))(*(_QWORD *)(a1 + 264));
  v6[0] = &v8;
  v6[1] = a1 - 16;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_175779e8aec8e508ceed20f7fb25cadd___(
         v4,
         CurrentThreadId,
         v6);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6EB,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      -2);
}
