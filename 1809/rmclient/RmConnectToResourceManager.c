/*
 * XREFs of RmConnectToResourceManager @ 0x180008600
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 *     RmpClientConnectToResourceManager @ 0x180008650 (RmpClientConnectToResourceManager.c)
 */

__int64 __fastcall RmConnectToResourceManager(__int64 a1)
{
  unsigned int v2; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)CempRpcBindToServer(&unk_180013C30, &Binding) < 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v2 = RmpClientConnectToResourceManager(Binding, a1);
    RpcBindingFree(&Binding);
  }
  return v2;
}
