/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_61da8f50b3a0b17ac1bbe26078a919c4___::Run @ 0x18006C6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_61da8f50b3a0b17ac1bbe26078a919c4___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 288LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL),
         **(_QWORD **)(a1 + 24));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
  else
    v3 = 0;
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
