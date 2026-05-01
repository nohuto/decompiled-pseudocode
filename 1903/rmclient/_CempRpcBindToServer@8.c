/*
 * XREFs of _CempRpcBindToServer@8 @ 0x1000B1B0
 * Callers:
 *     _HamHostIdRetrieveDynamicId@20 @ 0x10005500 (_HamHostIdRetrieveDynamicId@20.c)
 *     CreateResourceManagerProxy @ 0x100077AD (CreateResourceManagerProxy.c)
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 *     ?CrmpRegistrationContextStart@@YGJPAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PAG@Z @ 0x1000A2C0 (-CrmpRegistrationContextStart@@YGJPAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PAG@Z.c)
 *     _HamGetApplicationInterruptiveUIState@16 @ 0x1000A830 (_HamGetApplicationInterruptiveUIState@16.c)
 *     ?Init@ResourceManagerClientProxy@@IAEJXZ @ 0x1000C309 (-Init@ResourceManagerClientProxy@@IAEJXZ.c)
 *     _RmGameModeDisableForRegisteredProcess@4 @ 0x1000F6D0 (_RmGameModeDisableForRegisteredProcess@4.c)
 *     _RmGameModeDisableForRegisteredProcessById@4 @ 0x1000F780 (_RmGameModeDisableForRegisteredProcessById@4.c)
 *     _RmGameModeGetLargestValidResourceRequest@4 @ 0x1000F830 (_RmGameModeGetLargestValidResourceRequest@4.c)
 *     _RmGameModeReenableForRegisteredProcess@4 @ 0x1000F920 (_RmGameModeReenableForRegisteredProcess@4.c)
 *     _RmGameModeReenableForRegisteredProcessById@4 @ 0x1000F9D0 (_RmGameModeReenableForRegisteredProcessById@4.c)
 *     _RmGameModeRegisterPairedAuxiliaryProcess@16 @ 0x1000FA80 (_RmGameModeRegisterPairedAuxiliaryProcess@16.c)
 *     _RmGameModeRegisterPairedAuxiliaryProcessById@16 @ 0x1000FB30 (_RmGameModeRegisterPairedAuxiliaryProcessById@16.c)
 *     _RmGameModeRegisterProcess@12 @ 0x1000FBE0 (_RmGameModeRegisterProcess@12.c)
 *     _RmGameModeRegisterProcessById@12 @ 0x1000FC90 (_RmGameModeRegisterProcessById@12.c)
 *     _RmGameModeUnregisterProcess@4 @ 0x1000FD40 (_RmGameModeUnregisterProcess@4.c)
 *     _RmGameModeUnregisterProcessById@4 @ 0x1000FDF0 (_RmGameModeUnregisterProcessById@4.c)
 *     _RmConnectToResourceManager@4 @ 0x100112F0 (_RmConnectToResourceManager@4.c)
 *     _RmQueryHostMemoryLimitValues@16 @ 0x10011370 (_RmQueryHostMemoryLimitValues@16.c)
 *     _HamGetInterruptiveUIStateForAumid@16 @ 0x100127B0 (_HamGetInterruptiveUIStateForAumid@16.c)
 *     _HamGetPackageInterruptiveUIState@16 @ 0x10012890 (_HamGetPackageInterruptiveUIState@16.c)
 *     _HamHostIdCreateSingleUse@4 @ 0x10012970 (_HamHostIdCreateSingleUse@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

unsigned int __fastcall CempRpcBindToServer(RPC_IF_HANDLE IfSpec, RPC_BINDING_HANDLE *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // esi
  RPC_STATUS v6; // eax
  _DWORD v8[9]; // [esp+Ch] [ebp-7Ch] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [esp+30h] [ebp-58h] BYREF
  RPC_BINDING_HANDLE Binding; // [esp+48h] [ebp-40h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [esp+4Ch] [ebp-3Ch] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [esp+5Ch] [ebp-2Ch] BYREF

  Binding = 0;
  Template.Flags = 0;
  memset(&Template.NetworkAddress, 0, 28);
  Options.CallTimeout = 0;
  memset(&v8[4], 0, 20);
  Security.ServerPrincName = 0;
  Security.AuthIdentity = 0;
  v8[1] = 0;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v8;
  Template.Version = 1;
  Template.ProtocolSequence = 3;
  Options.Version = 1;
  Options.Flags = 1;
  Options.ComTimeout = 5;
  v8[0] = 5;
  v8[2] = 1;
  v8[3] = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  v4 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 <= 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v6 = RpcBindingBind(0, Binding, IfSpec);
  v5 = v6;
  if ( !v6 )
  {
    *a2 = Binding;
    return 0;
  }
  if ( v6 > 0 )
LABEL_7:
    v5 = (unsigned __int16)v5 | 0xC0070000;
LABEL_8:
  if ( Binding )
    RpcBindingFree(&Binding);
  return v5;
}
