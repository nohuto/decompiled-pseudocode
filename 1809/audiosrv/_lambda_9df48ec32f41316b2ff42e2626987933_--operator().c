/*
 * XREFs of _lambda_9df48ec32f41316b2ff42e2626987933_::operator() @ 0x18011D520
 * Callers:
 *     wil::details::lambda_call__lambda_9df48ec32f41316b2ff42e2626987933___::_lambda_call__lambda_9df48ec32f41316b2ff42e2626987933___ @ 0x18011D49C (wil--details--lambda_call__lambda_9df48ec32f41316b2ff42e2626987933___--_lambda_call__lambda_9df4.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D72C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9df48ec32f41316b2ff42e2626987933_::operator()(_QWORD **a1)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)**a1 + 80LL))(**a1, *a1[1], &v4, &v3);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
}
