/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cf05138b44c761e86e84f9874009a599___::Run @ 0x1802C6E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cf05138b44c761e86e84f9874009a599___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rcx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(***(_QWORD ***)(a1 + 16) + 64LL))(**(_QWORD **)(a1 + 16), &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = **(_QWORD **)(a1 + 24);
    _InterlockedExchange((volatile __int32 *)(v4 + 168), v7 != 0);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 128LL))(v4 + 16);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2);
  }
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
