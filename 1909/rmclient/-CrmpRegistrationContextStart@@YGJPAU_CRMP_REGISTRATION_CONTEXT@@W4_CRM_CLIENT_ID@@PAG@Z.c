/*
 * XREFs of ?CrmpRegistrationContextStart@@YGJPAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PAG@Z @ 0x1000A2C0
 * Callers:
 *     _CrmRegister@12 @ 0x1000A260 (_CrmRegister@12.c)
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 */

CLIENT_CALL_RETURN __fastcall CrmpRegistrationContextStart(int *a1, int a2, int a3)
{
  int v4; // esi
  CLIENT_CALL_RETURN v5; // edi
  RPC_BINDING_HANDLE Binding; // [esp+20h] [ebp-24h] BYREF
  int v8; // [esp+24h] [ebp-20h]
  int v9; // [esp+28h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v8 = a2;
  v4 = 0;
  v9 = 0;
  v5.Simple = CempRpcBindToServer(dword_10003058);
  if ( v5.Simple >= 0 )
  {
    v4 = 1;
    ms_exc.registration.TryLevel = 0;
    v5.Pointer = _NdrClientCall4(&stru_10001638, &byte_10002E2A, Binding, &v9, v8, a3).Pointer;
    ms_exc.registration.TryLevel = -2;
    if ( v5.Simple >= 0 )
    {
      a1[1] = v9;
      *a1 = v8;
      v5.Simple = 0;
    }
  }
  if ( v4 )
    RpcBindingFree(&Binding);
  return v5;
}
