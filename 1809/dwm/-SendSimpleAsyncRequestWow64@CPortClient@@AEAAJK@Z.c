/*
 * XREFs of ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002970
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001570 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x140003C76 (memset_0.c)
 */

__int64 __fastcall CPortClient::SendSimpleAsyncRequestWow64(HANDLE *this, int a2)
{
  NTSTATUS v4; // eax
  int v5; // eax
  unsigned int v7; // ebx
  _PORT_MESSAGE LpcMessage; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+58h] [rbp-10h]

  memset_0((char *)&LpcMessage.u1.Length + 2, 0, 0x2EuLL);
  v9 = a2;
  LpcMessage.u1.Length = 3145736;
  v4 = NtRequestPort(this[6], &LpcMessage);
  v5 = CPortClient::CheckStatus((CPortClient *)this, v4);
  if ( v5 >= 0 )
    return 0LL;
  v7 = v5 | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v5 | 0x10000000, 0x31u);
  return v7;
}
