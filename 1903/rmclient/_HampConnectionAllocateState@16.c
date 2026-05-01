/*
 * XREFs of _HampConnectionAllocateState@16 @ 0x1000B340
 * Callers:
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 *     _HamConnectForExtendedExecution@8 @ 0x1000B2B0 (_HamConnectForExtendedExecution@8.c)
 * Callees:
 *     _RmpClientWnfCreateSubscription@16 @ 0x1000C072 (_RmpClientWnfCreateSubscription@16.c)
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

int __fastcall HampConnectionAllocateState(int a1, void *a2, int a3, int a4)
{
  int Simple; // ebx
  bool v7; // cc
  RPC_BINDING_HANDLE v8; // ecx
  int v9; // eax
  CLIENT_CALL_RETURN v10; // eax
  int Subscription; // eax
  _DWORD v13[9]; // [esp+10h] [ebp-B0h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [esp+34h] [ebp-8Ch] BYREF
  int v15; // [esp+4Ch] [ebp-74h]
  int v16; // [esp+54h] [ebp-6Ch]
  RPC_BINDING_HANDLE v17; // [esp+58h] [ebp-68h] BYREF
  RPC_BINDING_HANDLE Binding; // [esp+5Ch] [ebp-64h] BYREF
  char v19; // [esp+63h] [ebp-5Dh]
  int v20; // [esp+64h] [ebp-5Ch]
  char v21; // [esp+6Bh] [ebp-55h]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [esp+6Ch] [ebp-54h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [esp+7Ch] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+A8h] [ebp-18h]

  v15 = a1;
  v16 = a4;
  v21 = 0;
  Binding = 0;
  Template.Flags = 0;
  memset(&Template.NetworkAddress, 0, 28);
  Options.CallTimeout = 0;
  memset(&v13[4], 0, 20);
  Security.ServerPrincName = 0;
  Security.AuthIdentity = 0;
  Template.Version = 1;
  Template.ProtocolSequence = 3;
  Options.Version = 1;
  Options.Flags = 1;
  Options.ComTimeout = 5;
  v13[0] = 5;
  v13[1] = 0;
  v13[2] = 1;
  v13[3] = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v13;
  Simple = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  v7 = Simple <= 0;
  if ( Simple || (Simple = RpcBindingBind(0, Binding, a2), v7 = Simple <= 0, Simple) )
  {
    v8 = v17;
    if ( !v7 )
      Simple = (unsigned __int16)Simple | 0xC0070000;
  }
  else
  {
    v8 = Binding;
    v17 = Binding;
    Binding = 0;
  }
  if ( Binding )
  {
    RpcBindingFree(&Binding);
    v8 = v17;
  }
  if ( Simple >= 0 )
  {
    v21 = 1;
    v19 = 1;
    ms_exc.registration.TryLevel = 0;
    v9 = *(_DWORD *)(a1 + 64);
    if ( v9 == 2 )
    {
      v10.Pointer = _NdrClientCall4(&stru_10001178, &byte_10002852, v8, a1, a1 + 4).Pointer;
LABEL_20:
      Simple = v10.Simple;
      v20 = v10.Simple;
      ms_exc.registration.TryLevel = -2;
    }
    else if ( v9 )
    {
      switch ( v9 )
      {
        case 1:
          v10.Pointer = _NdrClientCall4(&stru_10001838, (PFORMAT_STRING)&word_10003ACA, v8, a1, a1 + 4).Pointer;
          goto LABEL_20;
        case 3:
          v10.Pointer = _NdrClientCall4(&stru_100017E8, (PFORMAT_STRING)&word_100039BA, v8, a1, a1 + 4).Pointer;
          goto LABEL_20;
        case 4:
          Simple = _NdrClientCall4(&stru_10001050, &byte_1000245A, v8, a1).Simple;
          v20 = Simple;
          ms_exc.registration.TryLevel = -2;
          break;
        case 5:
          Simple = _NdrClientCall4(&stru_10001120, &byte_1000275A, v8, a1).Simple;
          v20 = Simple;
          ms_exc.registration.TryLevel = -2;
          break;
        case 6:
          Simple = _NdrClientCall4(&stru_100010A0, &byte_1000267A, v8, v16, a1, a1 + 4).Simple;
          v20 = Simple;
          ms_exc.registration.TryLevel = -2;
          break;
        default:
          Simple = -1073741127;
          v20 = -1073741127;
          ms_exc.registration.TryLevel = -2;
          break;
      }
    }
    else
    {
      Simple = _NdrClientCall4(&stru_10001688, &byte_100030A2, v8, a1, a3, a1 + 4).Simple;
      v20 = Simple;
      ms_exc.registration.TryLevel = -2;
    }
    if ( Simple >= 0 )
    {
      if ( *(_DWORD *)(a1 + 64) >= 4u
        || (Subscription = RmpClientWnfCreateSubscription(a1 + 12, a1 + 12),
            Simple = Subscription >= 0 ? 0 : Subscription,
            Simple >= 0) )
      {
        Simple = 0;
      }
    }
  }
  if ( v21 )
    RpcBindingFree(&v17);
  return Simple;
}
