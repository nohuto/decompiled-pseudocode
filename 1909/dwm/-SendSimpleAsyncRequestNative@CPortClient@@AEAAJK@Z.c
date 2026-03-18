/*
 * XREFs of ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x1400067D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001660 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1400040EC (memset_0.c)
 */

__int64 __fastcall CPortClient::SendSimpleAsyncRequestNative(HANDLE *this, int a2)
{
  NTSTATUS v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  struct _PORT_MESSAGE LpcMessage; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+58h] [rbp-10h]

  memset_0((char *)&LpcMessage.u1.Length + 2, 0, 0x2EuLL);
  v9 = a2;
  LpcMessage.u1.Length = 3145736;
  v4 = NtRequestPort(this[6], &LpcMessage);
  v5 = CPortClient::CheckStatus((CPortClient *)this, v4);
  if ( v5 >= 0 )
    return 0LL;
  v6 = v5 | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v5 | 0x10000000, 0x31u);
  return v6;
}
