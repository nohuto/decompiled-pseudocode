/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x180041050
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180040C60 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 *     SystemStateTrackerCreate @ 0x180040E00 (SystemStateTrackerCreate.c)
 *     SystemStateTrackerStart @ 0x180040F20 (SystemStateTrackerStart.c)
 *     TraceLoggingRegisterEx @ 0x180041218 (TraceLoggingRegisterEx.c)
 *     ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z @ 0x1800412AC (-ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     RmpLaunchAllRpcServers @ 0x1800413C0 (RmpLaunchAllRpcServers.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180041594 (-InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerP.c)
 *     RmpCreateResourceManagerServer @ 0x180041F48 (RmpCreateResourceManagerServer.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     IsQueryUserTokenPresent @ 0x180048B68 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180048C48 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048E40 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180055538 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180055714 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006F8DC (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

void __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  int v2; // ebx
  int ResourceManagerServer; // ebx
  struct _RM_SERVICE_GLOBALS *v4; // rcx
  int v5; // ebx
  int v6; // eax
  struct _ACTIVITY_RESTARTER **v7; // rcx
  struct _RM_SERVICE_GLOBALS *v8; // rdi
  DWORD v9; // ebx
  struct _RM_SERVICE_GLOBALS *v10; // rdi
  _QWORD *v11; // rbx
  struct ModernResourceEnforcer *v12; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v13[5]; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v14[144]; // [rsp+50h] [rbp-A8h] BYREF

  v12 = 0LL;
  HampLockTrackerId = TlsAlloc();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  RmSvcGlobals = 0LL;
  if ( !(unsigned __int8)IsPsmQueryBackgroundActivationTypePresent() || !(unsigned __int8)IsQueryUserTokenPresent() )
  {
    v5 = -2147467263;
    goto LABEL_12;
  }
  v2 = CreateModernResourceEnforcer(a1, &v12);
  if ( v2 >= 0 )
  {
    ResourceManagerServer = SystemStateTrackerCreate();
    if ( ResourceManagerServer < 0 )
      goto LABEL_21;
    ResourceManagerServer = SystemStateTrackerStart();
    if ( ResourceManagerServer < 0 )
      goto LABEL_21;
    RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
    TraceLoggingRegisterEx(
      (TraceLoggingHProvider)&dword_18009B0B0,
      (TLG_PENABLECALLBACK)RmpTracingControlCallback,
      &RmpSvcGlobals);
    TraceLoggingRegisterEx(
      (TraceLoggingHProvider)&hProvider,
      (TLG_PENABLECALLBACK)HampManagerTracingControlCallback,
      (char *)RmSvcGlobals + 1608);
    ResourceManagerServer = RmpCreateResourceManagerServer(v12);
    if ( ResourceManagerServer < 0 )
      goto LABEL_21;
    g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 336);
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
    v5 = InitializeResourceManagerServerProxy(v4, &g_pProxy);
    if ( v5 >= 0 )
    {
      v6 = RmpLaunchAllRpcServers();
      if ( v6 >= 0 )
      {
        v6 = ArManagerCreate(v7, &stru_18009C918);
        if ( v6 >= 0 )
        {
          v8 = RmSvcGlobals;
          if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          {
            v13[0] = RmGameModeCpuSetManagerCreateClientContext;
            v13[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
            v13[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
            v13[3] = RmGameModeCpuSetManagerReleaseAllocation;
            v13[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
            InitializeGameModeExtension(v13, v8);
          }
LABEL_12:
          if ( v5 >= 0 )
            goto LABEL_13;
          goto LABEL_23;
        }
      }
      ResourceManagerServer = v6;
LABEL_21:
      v5 = ResourceManagerServer | 0x10000000;
      goto LABEL_12;
    }
  }
LABEL_23:
  v10 = RmSvcGlobals;
  if ( RmSvcGlobals )
  {
    RmpRundownAllModules(RmSvcGlobals);
    RmpCleanupAllModules(v10);
    RmSvcGlobals = 0LL;
  }
  v11 = ArGlobals;
  if ( ArGlobals )
  {
    ArManagerRundown((struct _ACTIVITY_RESTARTER *)ArGlobals);
    HamDisconnectFromServer(v11[9]);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    ArGlobals = 0LL;
  }
LABEL_13:
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  if ( v12 )
    (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v12 + 16LL))(v12);
}
