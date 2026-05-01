/*
 * XREFs of __SEH_prolog4 @ 0x1000CD8C
 * Callers:
 *     _HamHostIdRetrieveDynamicId@20 @ 0x10005500 (_HamHostIdRetrieveDynamicId@20.c)
 *     _HamServicingEnableServicing@12 @ 0x10005580 (_HamServicingEnableServicing@12.c)
 *     _HamServicingTerminatePackage@12 @ 0x100055D0 (_HamServicingTerminatePackage@12.c)
 *     _HamServicingClosePackageHandle@12 @ 0x10005630 (_HamServicingClosePackageHandle@12.c)
 *     _HamServicingQueryActiveAppsInPackage@24 @ 0x10005680 (_HamServicingQueryActiveAppsInPackage@24.c)
 *     _HamServicingOpenPackageHandle@20 @ 0x10005700 (_HamServicingOpenPackageHandle@20.c)
 *     _HamTryEstimateRemainingQuiesceTime@8 @ 0x10007640 (_HamTryEstimateRemainingQuiesceTime@8.c)
 *     ?RmAcquireResources@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK_KPAXHW4RmPend@@PAHPAK@Z @ 0x100076D5 (-RmAcquireResources@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK_KPAXHW4RmPend@@PAHPAK@Z.c)
 *     ?RmReleaseResources@ResourceManagerProxy@@QAEJK@Z @ 0x10007764 (-RmReleaseResources@ResourceManagerProxy@@QAEJK@Z.c)
 *     _HamStartExtendedExecutionAsync@12 @ 0x10007C40 (_HamStartExtendedExecutionAsync@12.c)
 *     _HamCompleteExtendedExecution@12 @ 0x10007C90 (_HamCompleteExtendedExecution@12.c)
 *     _HamCreateExtendedExecution@20 @ 0x10007D20 (_HamCreateExtendedExecution@20.c)
 *     ?RmRegisterResource@ResourceManagerProxy@@QAEJW4RmResourceType@@KH@Z @ 0x10007F6D (-RmRegisterResource@ResourceManagerProxy@@QAEJW4RmResourceType@@KH@Z.c)
 *     ?CrmpRegistrationContextCleanup@@YGXPAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x10008135 (-CrmpRegistrationContextCleanup@@YGXPAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 *     ?RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@K@Z @ 0x1000A07B (-RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@K@Z.c)
 *     _HamStopActivity@12 @ 0x1000A0D0 (_HamStopActivity@12.c)
 *     ?CrmpActivityQueryWindowClosedReasons@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAPAW4_CRM_WINDOW_CLOSED_REASON@@PAK@Z @ 0x1000A1C7 (-CrmpActivityQueryWindowClosedReasons@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAPAW4_CRM_WINDOW_CLOSED_RE.c)
 *     ?CrmpActivityStop@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A651 (-CrmpActivityStop@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     _HamUpdateActivityProperties@16 @ 0x1000A910 (_HamUpdateActivityProperties@16.c)
 *     _HamStartActivityAsync@20 @ 0x1000B040 (_HamStartActivityAsync@20.c)
 *     _HamCreateActivityForProcess@20 @ 0x1000B880 (_HamCreateActivityForProcess@20.c)
 *     _HamTerminateActivityHostEx@28 @ 0x1000B950 (_HamTerminateActivityHostEx@28.c)
 *     ?CrmpActivityWindowClosedReasonSubscribe@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@P6GXPAX11@Z1@Z @ 0x1000BCD7 (-CrmpActivityWindowClosedReasonSubscribe@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@P6GXPAX11@Z1@Z.c)
 *     _HamSessionStateLogoffSession@8 @ 0x1000BD90 (_HamSessionStateLogoffSession@8.c)
 *     _HamAddDependency@12 @ 0x1000BDE0 (_HamAddDependency@12.c)
 *     _HamAddHostDependency@24 @ 0x1000BE30 (_HamAddHostDependency@24.c)
 *     _HamTerminateHostOnProcessExit@32 @ 0x1000BE90 (_HamTerminateHostOnProcessExit@32.c)
 *     __DllMainCRTStartup @ 0x1000C6B6 (__DllMainCRTStartup.c)
 *     __onexit @ 0x1000CA90 (__onexit.c)
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
 *     _RmpClientAcquireResourceSet@36 @ 0x100114D8 (_RmpClientAcquireResourceSet@36.c)
 *     _RmpClientApplyResourceSet@12 @ 0x100116B1 (_RmpClientApplyResourceSet@12.c)
 *     _RmpClientDisconnectContextHandle@4 @ 0x100118B9 (_RmpClientDisconnectContextHandle@4.c)
 *     _RmpClientRegisterActivityHostCallbacks@24 @ 0x1001191D (_RmpClientRegisterActivityHostCallbacks@24.c)
 *     _RmpClientReleaseResourceSet@16 @ 0x10011A05 (_RmpClientReleaseResourceSet@16.c)
 *     _RmpClientSetHostLimits@16 @ 0x10011AA1 (_RmpClientSetHostLimits@16.c)
 *     _RmpClientUnregisterActivityHostCallbacks@12 @ 0x10011B0D (_RmpClientUnregisterActivityHostCallbacks@12.c)
 *     _RmpQueryHostMemoryLimitValues@20 @ 0x10011BA8 (_RmpQueryHostMemoryLimitValues@20.c)
 *     ?RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@@Z @ 0x10011E40 (-RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@@Z.c)
 *     ?RmAvailabilityCheck@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK@Z @ 0x10011EAB (-RmAvailabilityCheck@ResourceManagerProxy@@QAEJKPAURmResourceInfo@@KK@Z.c)
 *     ?RmGetNotification@ResourceManagerProxy@@QAEJKPAURmExternalResourceNotification@@@Z @ 0x10011F1F (-RmGetNotification@ResourceManagerProxy@@QAEJKPAURmExternalResourceNotification@@@Z.c)
 *     ?SetMemoryUsageLimit@ModernResourceManagerProxy@@QAEJ_KPAH@Z @ 0x100120C6 (-SetMemoryUsageLimit@ModernResourceManagerProxy@@QAEJ_KPAH@Z.c)
 *     _HamDebugClosePackageHandle@12 @ 0x100122C0 (_HamDebugClosePackageHandle@12.c)
 *     _HamDebugModeEnable@12 @ 0x10012330 (_HamDebugModeEnable@12.c)
 *     _HamDebugOpenPackageHandle@16 @ 0x100123A0 (_HamDebugOpenPackageHandle@16.c)
 *     _HamDebugQueryPackageState@16 @ 0x10012440 (_HamDebugQueryPackageState@16.c)
 *     _HamDebugSuspendPackage@16 @ 0x100124C0 (_HamDebugSuspendPackage@16.c)
 *     _HamDebugTerminatePackage@12 @ 0x10012540 (_HamDebugTerminatePackage@12.c)
 *     _HamFullTrustClosePackageHandle@12 @ 0x10012620 (_HamFullTrustClosePackageHandle@12.c)
 *     _HamFullTrustOpenPackageHandle@20 @ 0x10012690 (_HamFullTrustOpenPackageHandle@20.c)
 *     _HamFullTrustTerminatePackage@20 @ 0x10012730 (_HamFullTrustTerminatePackage@20.c)
 *     _HamGetInterruptiveUIStateForAumid@16 @ 0x100127B0 (_HamGetInterruptiveUIStateForAumid@16.c)
 *     _HamGetPackageInterruptiveUIState@16 @ 0x10012890 (_HamGetPackageInterruptiveUIState@16.c)
 *     _HamHostIdCreateSingleUse@4 @ 0x10012970 (_HamHostIdCreateSingleUse@4.c)
 *     _HamIsHostBeingDebugged@12 @ 0x10012A10 (_HamIsHostBeingDebugged@12.c)
 *     _HamQueryTaskCompletionsForTerminateGraph@12 @ 0x10012D60 (_HamQueryTaskCompletionsForTerminateGraph@12.c)
 *     _HamRemoveDependency@12 @ 0x10012DF0 (_HamRemoveDependency@12.c)
 *     _HamRemoveHostDependency@20 @ 0x10012E60 (_HamRemoveHostDependency@20.c)
 *     _HamResetExternalResourcePriority@16 @ 0x10012EE0 (_HamResetExternalResourcePriority@16.c)
 *     _HamSessionStateLogoffUser@12 @ 0x10012F60 (_HamSessionStateLogoffUser@12.c)
 *     _HamSetExternalResourcePriority@16 @ 0x10013120 (_HamSetExternalResourcePriority@16.c)
 *     _HamTerminateIfSuspendedByProcess@12 @ 0x100131A0 (_HamTerminateIfSuspendedByProcess@12.c)
 *     _HamTerminateSelf@4 @ 0x10013210 (_HamTerminateSelf@4.c)
 *     _HamTerminateSelfOnProcessExit@16 @ 0x10013280 (_HamTerminateSelfOnProcessExit@16.c)
 *     _HamCreateAutoRestartActivity@16 @ 0x10013530 (_HamCreateAutoRestartActivity@16.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z @ 0x10014480 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z.c)
 *     ?ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z @ 0x10014B4D (-ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z.c)
 *     ?SetAutoRelease@ResourceSetClientProxy@@UAGX_N@Z @ 0x10014D80 (-SetAutoRelease@ResourceSetClientProxy@@UAGX_N@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSetClientProxy@@UAGJKQAU_ResourceInfo@ExecutionModel@@@Z @ 0x10014DF0 (-SetExternalResourcePriorities@ResourceSetClientProxy@@UAGJKQAU_ResourceInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = _except_handler4;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}
