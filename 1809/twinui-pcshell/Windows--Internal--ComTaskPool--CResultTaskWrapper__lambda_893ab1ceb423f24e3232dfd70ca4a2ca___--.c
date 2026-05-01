/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_893ab1ceb423f24e3232dfd70ca4a2ca___::Run @ 0x180205350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunSync__lambda_8c612fe075c3787ec3c70b8a7efe579c__&___ptr64_ @ 0x180203C34 (CreationThreadDispatcher--RunSync__lambda_8c612fe075c3787ec3c70b8a7efe579c__-___ptr64_.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_893ab1ceb423f24e3232dfd70ca4a2ca___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CreationThreadDispatcher::RunSync__lambda_8c612fe075c3787ec3c70b8a7efe579c______ptr64_(
         *(_QWORD *)(a1 + 16),
         *(__int64 **)(a1 + 24));
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v2);
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
