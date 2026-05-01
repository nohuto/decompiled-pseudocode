/*
 * XREFs of _HamHostIdFindOrCreate@8 @ 0x10005780
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

int __stdcall HamHostIdFindOrCreate(int a1, int a2)
{
  RPC_STATUS v2; // eax
  int Simple; // edi
  RPC_STATUS v4; // eax
  _DWORD v6[9]; // [esp+10h] [ebp-A0h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [esp+34h] [ebp-7Ch] BYREF
  int v8; // [esp+4Ch] [ebp-64h]
  RPC_BINDING_HANDLE v9; // [esp+54h] [ebp-5Ch] BYREF
  RPC_BINDING_HANDLE Binding; // [esp+58h] [ebp-58h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [esp+5Ch] [ebp-54h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [esp+6Ch] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+98h] [ebp-18h]

  v9 = 0;
  Binding = 0;
  Template.Flags = 0;
  memset(&Template.NetworkAddress, 0, 28);
  Options.CallTimeout = 0;
  memset(&v6[4], 0, 20);
  Security.ServerPrincName = 0;
  Security.AuthIdentity = 0;
  Template.Version = 1;
  Template.ProtocolSequence = 3;
  Options.Version = 1;
  Options.Flags = 1;
  Options.ComTimeout = 5;
  v6[0] = 5;
  v6[1] = 0;
  v6[2] = 1;
  v6[3] = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v6;
  v2 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  Simple = v2;
  if ( v2 )
  {
    if ( v2 > 0 )
      Simple = (unsigned __int16)v2 | 0xC0070000;
  }
  else
  {
    v4 = RpcBindingBind(0, Binding, dword_10002410);
    Simple = v4;
    if ( v4 )
    {
      if ( v4 > 0 )
        Simple = (unsigned __int16)v4 | 0xC0070000;
    }
    else
    {
      v9 = Binding;
      Binding = 0;
    }
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( Simple >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    Simple = _NdrClientCall4(&pStubDescriptor, &byte_10002372, v9, a1, a2).Simple;
    v8 = Simple;
    ms_exc.registration.TryLevel = -2;
    if ( Simple >= 0 )
      Simple = 0;
  }
  if ( v9 )
    RpcBindingFree(&v9);
  return Simple;
}
