/*
 * XREFs of HamHostIdFindOrCreate @ 0x18000F220
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 */

__int64 __fastcall HamHostIdFindOrCreate(__int64 a1, __int64 a2)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v5; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v8; // [rsp+78h] [rbp+20h]

  Binding = 0LL;
  Pointer = CempRpcBindToServer(&unk_180015CA0, &Binding);
  if ( Pointer >= 0 )
  {
    v5.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013FB8, 0, 0LL, Binding, a1, a2).Pointer;
    Pointer = (int)v5.Pointer;
    v8.Pointer = v5.Pointer;
    if ( SLODWORD(v5.Simple) >= 0 )
      Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  return (unsigned int)Pointer;
}
