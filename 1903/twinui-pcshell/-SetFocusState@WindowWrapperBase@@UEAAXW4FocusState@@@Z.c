/*
 * XREFs of ?SetFocusState@WindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1800669B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_896972b7315e759534395e3cb0475917___ @ 0x180066A18 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_896972b7315e759534395e3cb0475917.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
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
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 208LL))(*(_QWORD *)(a1 + 272));
  v6[0] = &v8;
  v6[1] = a1 - 16;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_896972b7315e759534395e3cb0475917___(
         v4,
         CurrentThreadId,
         v6);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x790,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      -2);
}
