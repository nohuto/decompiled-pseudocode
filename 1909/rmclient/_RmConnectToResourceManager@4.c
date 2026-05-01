/*
 * XREFs of _RmConnectToResourceManager@4 @ 0x100112F0
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     _RmpClientConnectToResourceManager@8 @ 0x10011719 (_RmpClientConnectToResourceManager@8.c)
 */

int __stdcall RmConnectToResourceManager(int a1)
{
  int v1; // esi
  RPC_BINDING_HANDLE Binding; // [esp+4h] [ebp-4h] BYREF

  if ( (((unsigned int)&_ImageBase | CempRpcBindToServer(dword_10004CA0, &Binding)) & 0x80000000) != 0 )
    return -1073741823;
  v1 = RmpClientConnectToResourceManager(Binding, a1);
  RpcBindingFree(&Binding);
  return v1;
}
