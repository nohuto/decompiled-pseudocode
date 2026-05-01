/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6ff02ad46e3db5cfcb8cb681148c280b___::Run @ 0x180060600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6ff02ad46e3db5cfcb8cb681148c280b___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 280LL) + 96LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL),
         **(_QWORD **)(a1 + 24));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v2,
      v5);
  else
    v3 = 0;
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
