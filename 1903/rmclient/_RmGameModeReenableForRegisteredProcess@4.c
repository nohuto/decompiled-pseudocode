/*
 * XREFs of _RmGameModeReenableForRegisteredProcess@4 @ 0x1000F920
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall RmGameModeReenableForRegisteredProcess(int a1)
{
  CLIENT_CALL_RETURN v1; // esi
  RPC_BINDING_HANDLE Binding; // [esp+1Ch] [ebp-20h] BYREF
  char v4; // [esp+23h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v4 = 0;
  if ( (((unsigned int)&_ImageBase | CempRpcBindToServer(L"D", &Binding)) & 0x80000000) == 0 )
  {
    v4 = 1;
    ms_exc.registration.TryLevel = 0;
    v1.Pointer = _NdrClientCall4(&stru_10001888, &byte_10003CF6, Binding, a1).Pointer;
    ms_exc.registration.TryLevel = -2;
    if ( v1.Simple >= 0 )
      v1.Simple = 0;
  }
  else
  {
    v1.Simple = -1073610725;
  }
  if ( v4 )
    RpcBindingFree(&Binding);
  return v1;
}
