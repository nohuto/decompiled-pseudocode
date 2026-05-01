/*
 * XREFs of _HamGetInterruptiveUIStateForAumid@16 @ 0x100127B0
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

int __stdcall HamGetInterruptiveUIStateForAumid(int a1, PSID Sid, int a3, bool *a4)
{
  int Simple; // esi
  ULONG v5; // eax
  RPC_BINDING_HANDLE Binding; // [esp+18h] [ebp-24h] BYREF
  int v8; // [esp+1Ch] [ebp-20h]
  char v9; // [esp+23h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v9 = 0;
  v8 = 0;
  if ( RtlValidSid(Sid) )
  {
    Simple = CempRpcBindToServer(dword_100034E0, &Binding);
    if ( Simple >= 0 )
    {
      v8 = 1;
      ms_exc.registration.TryLevel = 0;
      v5 = RtlLengthSid(Sid);
      Simple = _NdrClientCall4(&stru_10001688, &byte_10003498, Binding, a1, Sid, v5, a3, &v9).Simple;
      ms_exc.registration.TryLevel = -2;
      if ( Simple >= 0 )
      {
        *a4 = v9 != 0;
        Simple = 0;
      }
    }
  }
  else
  {
    Simple = -1073741584;
  }
  if ( v8 )
    RpcBindingFree(&Binding);
  return Simple;
}
