/*
 * XREFs of _RmGameModeRegisterPairedAuxiliaryProcess@16 @ 0x1000FA80
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall RmGameModeRegisterPairedAuxiliaryProcess(int a1, int a2, int a3, int a4)
{
  CLIENT_CALL_RETURN v4; // esi
  RPC_BINDING_HANDLE Binding; // [esp+1Ch] [ebp-20h] BYREF
  char v7; // [esp+23h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v7 = 0;
  if ( (((unsigned int)&_ImageBase | CempRpcBindToServer(L"D", &Binding)) & 0x80000000) == 0 )
  {
    v7 = 1;
    ms_exc.registration.TryLevel = 0;
    v4.Pointer = _NdrClientCall4(&stru_10001888, &byte_10003D46, Binding, a1, a2, a3, a4).Pointer;
    ms_exc.registration.TryLevel = -2;
    if ( v4.Simple >= 0 )
      v4.Simple = 0;
  }
  else
  {
    v4.Simple = -1073610725;
  }
  if ( v7 )
    RpcBindingFree(&Binding);
  return v4;
}
