/*
 * XREFs of HamHostIdRetrieveDynamicId @ 0x18000F3B0
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 */

void *__fastcall HamHostIdRetrieveDynamicId(PSID Sid, int a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  ULONG v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+30h] [rbp-38h]
  RPC_BINDING_HANDLE v11; // [rsp+58h] [rbp-10h] BYREF

  v11 = 0LL;
  result = (void *)CempRpcBindToServer(&unk_180015CA0, &v11);
  if ( (int)result >= 0 )
  {
    v10 = a2;
    v9 = RtlLengthSid(Sid);
    result = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013FB8, 2u, 0LL, v11, Sid, v9, v10, a3, a4).Pointer;
    v11 = result;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
