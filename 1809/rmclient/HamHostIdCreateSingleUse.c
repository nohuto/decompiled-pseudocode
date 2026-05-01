/*
 * XREFs of HamHostIdCreateSingleUse @ 0x18000F160
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 */

__int64 __fastcall HamHostIdCreateSingleUse(__int64 a1)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v3; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp+10h] BYREF
  CLIENT_CALL_RETURN v6; // [rsp+60h] [rbp+18h]

  Binding = 0LL;
  Pointer = CempRpcBindToServer(&unk_180015CA0, &Binding);
  if ( Pointer >= 0 )
  {
    v3.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013FB8, 1u, 0LL, Binding, a1).Pointer;
    Pointer = (int)v3.Pointer;
    v6.Pointer = v3.Pointer;
    if ( SLODWORD(v3.Simple) >= 0 )
      Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  return (unsigned int)Pointer;
}
