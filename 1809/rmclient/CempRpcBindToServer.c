/*
 * XREFs of CempRpcBindToServer @ 0x1800038D0
 * Callers:
 *     CreateResourceManagerProxy @ 0x180001BBC (CreateResourceManagerProxy.c)
 *     HamGetApplicationInterruptiveUIState @ 0x180002060 (HamGetApplicationInterruptiveUIState.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003810 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003B00 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180008344 (-CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z.c)
 *     RmConnectToResourceManager @ 0x180008600 (RmConnectToResourceManager.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x1800088FC (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     RmGameModeDisableForRegisteredProcess @ 0x18000C250 (RmGameModeDisableForRegisteredProcess.c)
 *     RmGameModeDisableForRegisteredProcessById @ 0x18000C310 (RmGameModeDisableForRegisteredProcessById.c)
 *     RmGameModeGetLargestValidResourceRequest @ 0x18000C3D0 (RmGameModeGetLargestValidResourceRequest.c)
 *     RmGameModeReenableForRegisteredProcess @ 0x18000C4D0 (RmGameModeReenableForRegisteredProcess.c)
 *     RmGameModeReenableForRegisteredProcessById @ 0x18000C590 (RmGameModeReenableForRegisteredProcessById.c)
 *     RmGameModeRegisterPairedAuxiliaryProcess @ 0x18000C650 (RmGameModeRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRegisterPairedAuxiliaryProcessById @ 0x18000C750 (RmGameModeRegisterPairedAuxiliaryProcessById.c)
 *     RmGameModeRegisterProcess @ 0x18000C850 (RmGameModeRegisterProcess.c)
 *     RmGameModeRegisterProcessById @ 0x18000C940 (RmGameModeRegisterProcessById.c)
 *     RmGameModeUnregisterProcess @ 0x18000CA30 (RmGameModeUnregisterProcess.c)
 *     RmGameModeUnregisterProcessById @ 0x18000CAF0 (RmGameModeUnregisterProcessById.c)
 *     RmQueryHostMemoryLimitValues @ 0x18000E320 (RmQueryHostMemoryLimitValues.c)
 *     HamGetInterruptiveUIStateForAumid @ 0x18000EF00 (HamGetInterruptiveUIStateForAumid.c)
 *     HamGetPackageInterruptiveUIState @ 0x18000F030 (HamGetPackageInterruptiveUIState.c)
 *     HamHostIdCreateSingleUse @ 0x18000F160 (HamHostIdCreateSingleUse.c)
 *     HamHostIdFindOrCreate @ 0x18000F220 (HamHostIdFindOrCreate.c)
 *     HamHostIdRetrieveDynamicId @ 0x18000F3B0 (HamHostIdRetrieveDynamicId.c)
 * Callees:
 *     __security_check_cookie @ 0x1800092F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

__int64 __fastcall CempRpcBindToServer(RPC_IF_HANDLE IfSpec, RPC_BINDING_HANDLE *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-79h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+28h] [rbp-71h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h] BYREF
  int v10; // [rsp+58h] [rbp-41h]
  int v11; // [rsp+5Ch] [rbp-3Dh]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+88h] [rbp-11h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1h] BYREF

  Binding = 0LL;
  memset_0(&Template, 0, sizeof(Template));
  *(_QWORD *)&Options.Version = 0LL;
  *(_QWORD *)&Options.ComTimeout = 0LL;
  memset_0(&v9, 0, 0x38uLL);
  memset_0(&Security, 0, sizeof(Security));
  Template.Version = 1;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v9;
  Template.ProtocolSequence = 3;
  Options.Version = 1;
  Options.Flags = 1;
  Options.ComTimeout = 5;
  v9 = 5LL;
  v10 = 1;
  v11 = 3;
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
  v4 = RpcBindingBind(0LL, Binding, IfSpec);
  v5 = v4;
  if ( !v4 )
  {
    result = 0LL;
    *a2 = Binding;
    return result;
  }
  if ( v4 > 0 )
LABEL_7:
    v5 = (unsigned __int16)v4 | 0xC0070000;
LABEL_8:
  if ( Binding )
    RpcBindingFree(&Binding);
  return v5;
}
