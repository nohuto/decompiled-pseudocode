/*
 * XREFs of _HamGetApplicationInterruptiveUIState@16 @ 0x1000A830
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 */

CLIENT_CALL_RETURN __stdcall HamGetApplicationInterruptiveUIState(int a1, PSID Sid, int a3, bool *a4)
{
  int v4; // esi
  CLIENT_CALL_RETURN v5; // edi
  ULONG v6; // eax
  RPC_BINDING_HANDLE Binding; // [esp+1Ch] [ebp-20h] BYREF
  char v9; // [esp+23h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v9 = 0;
  v4 = 0;
  if ( RtlValidSid(Sid) )
  {
    v5.Simple = CempRpcBindToServer(dword_100034E0);
    if ( v5.Simple >= 0 )
    {
      v4 = 1;
      ms_exc.registration.TryLevel = 0;
      v6 = RtlLengthSid(Sid);
      v5.Pointer = _NdrClientCall4(&stru_10001688, &byte_10003418, Binding, a1, Sid, v6, a3, &v9).Pointer;
      ms_exc.registration.TryLevel = -2;
      if ( v5.Simple >= 0 )
      {
        *a4 = v9 != 0;
        v5.Simple = 0;
      }
    }
  }
  else
  {
    v5.Simple = -1073741584;
  }
  if ( v4 )
    RpcBindingFree(&Binding);
  return v5;
}
