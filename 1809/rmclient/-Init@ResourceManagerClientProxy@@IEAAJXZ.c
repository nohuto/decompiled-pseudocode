/*
 * XREFs of ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x1800088FC
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180008880 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 *     RmpClientWnfDestroySubscription @ 0x180005C6C (RmpClientWnfDestroySubscription.c)
 *     RmpClientWnfCreateSubscription @ 0x1800089F4 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall ResourceManagerClientProxy::Init(RPC_BINDING_HANDLE *this)
{
  RPC_BINDING_HANDLE *v1; // rdi
  char v3; // bp
  int v4; // eax
  int Pointer; // ebx
  int Subscription; // eax

  v1 = this + 2;
  v3 = 0;
  v4 = CempRpcBindToServer(&unk_180013CF0, this + 2);
  Pointer = v4 | 0x10000000;
  if ( v4 >= 0 )
  {
    Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013CC0, 0, 0LL, *v1, this + 3, this + 4).Pointer;
    if ( Pointer >= 0 )
    {
      Subscription = RmpClientWnfCreateSubscription(
                       this + 4,
                       ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk,
                       this,
                       this + 5);
      if ( Subscription < 0 )
      {
        Pointer = Subscription | 0x10000000;
      }
      else
      {
        v3 = 1;
        Pointer = 0;
        *((_BYTE *)this + 568) = 1;
      }
      if ( Pointer >= 0 )
        return (unsigned int)Pointer;
      if ( v3 )
        RmpClientWnfDestroySubscription(this[5]);
    }
  }
  if ( this[3] )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013CC0, 1u, 0LL);
  if ( *v1 )
  {
    RpcBindingFree(v1);
    *v1 = 0LL;
  }
  return (unsigned int)Pointer;
}
