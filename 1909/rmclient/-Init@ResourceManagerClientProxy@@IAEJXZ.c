/*
 * XREFs of ?Init@ResourceManagerClientProxy@@IAEJXZ @ 0x1000C309
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z @ 0x1000C2B1 (-CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     _RmpClientWnfCreateSubscription@16 @ 0x1000C072 (_RmpClientWnfCreateSubscription@16.c)
 */

int __thiscall ResourceManagerClientProxy::Init(RPC_BINDING_HANDLE *this)
{
  RPC_BINDING_HANDLE *v2; // edi
  int Simple; // esi
  int Subscription; // esi
  char v5; // al
  _DWORD *v7; // ebx

  v2 = this + 2;
  Simple = (unsigned int)&_ImageBase | CempRpcBindToServer(dword_100038A0, this + 2);
  if ( Simple >= 0 )
  {
    Simple = _NdrClientCall4(&stru_100016E8, &byte_100036EA, *v2, this + 3, this + 4).Simple;
    if ( Simple >= 0 )
    {
      Subscription = RmpClientWnfCreateSubscription(
                       this + 4,
                       (int)ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk,
                       (int)this,
                       this + 6);
      if ( Subscription < 0 )
      {
        v5 = 0;
        Simple = (unsigned int)&_ImageBase | Subscription;
      }
      else
      {
        v5 = 1;
        Simple = 0;
        *((_BYTE *)this + 548) = 1;
      }
      if ( Simple >= 0 )
        return Simple;
      if ( v5 )
        RmpClientWnfDestroySubscription(this[6]);
    }
  }
  v7 = this + 3;
  if ( *v7 )
    _NdrClientCall4(&stru_100016E8, &byte_10003718, v7);
  if ( *v2 )
  {
    RpcBindingFree(v2);
    *v2 = 0;
  }
  return Simple;
}
