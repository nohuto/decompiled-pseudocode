/*
 * XREFs of _HamHostIdCreateSingleUse@4 @ 0x10012970
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

int __stdcall HamHostIdCreateSingleUse(int a1)
{
  int Simple; // esi
  RPC_BINDING_HANDLE Binding; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  Binding = 0;
  Simple = CempRpcBindToServer(dword_10002410, &Binding);
  if ( Simple >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    Simple = _NdrClientCall4(&pStubDescriptor, &byte_100023A0, Binding, a1).Simple;
    ms_exc.registration.TryLevel = -2;
    if ( Simple >= 0 )
      Simple = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  return Simple;
}
