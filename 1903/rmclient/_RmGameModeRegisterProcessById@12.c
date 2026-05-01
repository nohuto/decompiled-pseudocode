/*
 * XREFs of _RmGameModeRegisterProcessById@12 @ 0x1000FC90
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall RmGameModeRegisterProcessById(int a1, int a2, int a3)
{
  CLIENT_CALL_RETURN v3; // esi
  RPC_BINDING_HANDLE Binding; // [esp+1Ch] [ebp-20h] BYREF
  char v6; // [esp+23h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v6 = 0;
  if ( (((unsigned int)&_ImageBase | CempRpcBindToServer(dword_10004B50, &Binding)) & 0x80000000) == 0 )
  {
    v6 = 1;
    ms_exc.registration.TryLevel = 0;
    v3.Pointer = _NdrClientCall4(&stru_100018D8, &byte_10003D8A, Binding, a1, a2, a3).Pointer;
    ms_exc.registration.TryLevel = -2;
    if ( v3.Simple >= 0 )
      v3.Simple = 0;
  }
  else
  {
    v3.Simple = -1073610725;
  }
  if ( v6 )
    RpcBindingFree(&Binding);
  return v3;
}
