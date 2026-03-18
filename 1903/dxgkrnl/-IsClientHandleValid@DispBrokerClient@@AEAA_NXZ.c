/*
 * XREFs of ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1C00C7E14
 * Callers:
 *     _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C00C7D1C (_lambda_d7c4861ef0734605370a98f05df27570_--operator().c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C02343C0 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DispBrokerClient::IsClientHandleValid(DispBrokerClient *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v11 = 0;
    v10[0] = 0LL;
    v10[1] = 0LL;
    v3 = ZwAlpcQueryInformation(*(_QWORD *)(v2 + 8), 0LL, v10, 16LL, &v11);
    v7 = v3;
    if ( v3 >= 0 && v11 == 16 )
      return 1;
    v9 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v9 + 24) = **(unsigned int **)this;
    *(_QWORD *)(v9 + 32) = v7;
    WdLogEvent5_WdError(v9);
  }
  return 0;
}
