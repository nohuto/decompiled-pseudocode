/*
 * XREFs of RmGameModeUnregisterProcess @ 0x18000CA30
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeUnregisterProcess(__int64 a1)
{
  char v2; // di
  unsigned int Pointer; // ebx
  CLIENT_CALL_RETURN v4; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v7; // [rsp+78h] [rbp+20h]

  v2 = 0;
  if ( (int)CempRpcBindToServer(&unk_180015E30, &Binding) >= 0 )
  {
    v2 = 1;
    v4.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013FE8, 1u, 0LL, Binding, a1).Pointer;
    Pointer = (unsigned int)v4.Pointer;
    v7.Pointer = v4.Pointer;
    if ( SLODWORD(v4.Simple) >= 0 )
      Pointer = 0;
  }
  else
  {
    Pointer = -1073610725;
  }
  if ( v2 )
    RpcBindingFree(&Binding);
  return Pointer;
}
