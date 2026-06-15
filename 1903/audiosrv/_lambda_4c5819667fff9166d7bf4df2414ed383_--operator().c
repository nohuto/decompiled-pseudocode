/*
 * XREFs of _lambda_4c5819667fff9166d7bf4df2414ed383_::operator() @ 0x180129F74
 * Callers:
 *     wil::details::lambda_call__lambda_4c5819667fff9166d7bf4df2414ed383___::_lambda_call__lambda_4c5819667fff9166d7bf4df2414ed383___ @ 0x180129EAC (wil--details--lambda_call__lambda_4c5819667fff9166d7bf4df2414ed383___--_lambda_call__lambda_4c58.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18012A1AC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4c5819667fff9166d7bf4df2414ed383_::operator()(_QWORD **a1)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)**a1 + 80LL))(**a1, *a1[1], &v4, &v3);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
}
