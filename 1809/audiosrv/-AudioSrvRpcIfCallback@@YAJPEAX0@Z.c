/*
 * XREFs of ?AudioSrvRpcIfCallback@@YAJPEAX0@Z @ 0x180014B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall AudioSrvRpcIfCallback(void *a1, void *a2)
{
  RPC_STATUS result; // eax
  unsigned int Type; // [rsp+40h] [rbp+18h] BYREF

  result = I_RpcBindingInqTransportType(a2, &Type);
  if ( result || Type != 4 )
    return 5;
  return result;
}
