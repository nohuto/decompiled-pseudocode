/*
 * XREFs of ?AudioDGRpcIfCallback@@YAJPEAX0@Z @ 0x140014910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall AudioDGRpcIfCallback(void *a1, void *a2)
{
  RPC_STATUS result; // eax
  unsigned int Type; // [rsp+40h] [rbp+18h] BYREF

  result = I_RpcBindingInqTransportType(a2, &Type);
  if ( result || Type != 4 )
    return 5;
  return result;
}
