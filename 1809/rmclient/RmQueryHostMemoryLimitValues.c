/*
 * XREFs of RmQueryHostMemoryLimitValues @ 0x18000E320
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 *     RmpQueryHostMemoryLimitValues @ 0x18000E558 (RmpQueryHostMemoryLimitValues.c)
 */

__int64 __fastcall RmQueryHostMemoryLimitValues(__int64 a1, __int64 a2, __int64 a3)
{
  int HostMemoryLimitValues; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a3 )
    {
      if ( (int)CempRpcBindToServer(&unk_180013C30, &Binding) >= 0 )
      {
        HostMemoryLimitValues = RmpQueryHostMemoryLimitValues(Binding, a1, a2, a3);
        if ( HostMemoryLimitValues >= 0 )
          HostMemoryLimitValues = 0;
        RpcBindingFree(&Binding);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      return (unsigned int)-1073741583;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)HostMemoryLimitValues;
}
