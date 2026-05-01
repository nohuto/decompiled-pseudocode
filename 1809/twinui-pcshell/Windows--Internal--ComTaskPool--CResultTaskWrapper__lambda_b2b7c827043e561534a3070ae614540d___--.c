/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b2b7c827043e561534a3070ae614540d___::Run @ 0x180250C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b2b7c827043e561534a3070ae614540d___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(***(_QWORD ***)(a1 + 16) + 64LL))(**(_QWORD **)(a1 + 16), &v6);
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(**(_QWORD **)(a1 + 24) + 16LL) + 128LL))(
      **(_QWORD **)(a1 + 24) + 16LL,
      (unsigned int)_InterlockedExchange((volatile __int32 *)(**(_QWORD **)(a1 + 24) + 176LL), v6 != 0));
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2);
  }
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
