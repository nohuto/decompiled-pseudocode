/*
 * XREFs of _RmQueryHostMemoryLimitValues@16 @ 0x10011370
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     _RmpQueryHostMemoryLimitValues@20 @ 0x10011BA8 (_RmpQueryHostMemoryLimitValues@20.c)
 */

int __stdcall RmQueryHostMemoryLimitValues(int a1, int a2, int a3, int a4)
{
  int HostMemoryLimitValues; // esi
  RPC_BINDING_HANDLE Binding; // [esp+4h] [ebp-4h] BYREF

  if ( !a3 )
    return -1073741584;
  if ( !a4 )
    return -1073741583;
  if ( (((unsigned int)&_ImageBase | CempRpcBindToServer(dword_10004CA0, &Binding)) & 0x80000000) != 0 )
    return -1073741823;
  HostMemoryLimitValues = RmpQueryHostMemoryLimitValues(a1, a2, a4);
  if ( HostMemoryLimitValues >= 0 )
    HostMemoryLimitValues = 0;
  RpcBindingFree(&Binding);
  return HostMemoryLimitValues;
}
