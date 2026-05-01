/*
 * XREFs of @__security_check_cookie@4 @ 0x1000C990
 * Callers:
 *     _HamHostIdFindOrCreate@8 @ 0x10005780 (_HamHostIdFindOrCreate@8.c)
 *     _HamQueryCallerTerminateReason@4 @ 0x10005CB0 (_HamQueryCallerTerminateReason@4.c)
 *     _CempGetTokenHostInfo@8 @ 0x10005D60 (_CempGetTokenHostInfo@8.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z @ 0x10005F90 (-HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z @ 0x10006100 (-HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YGJPBGPAKPAG@Z @ 0x10006280 (-HampUtilGetAumidFromPsmKey@@YGJPBGPAKPAG@Z.c)
 *     _RmpClientInitializeCoreApi@0 @ 0x10006F10 (_RmpClientInitializeCoreApi@0.c)
 *     ?get_AppMemoryUsage@CMemoryManager@System@Windows@@UAGJPA_K@Z @ 0x10007360 (-get_AppMemoryUsage@CMemoryManager@System@Windows@@UAGJPA_K@Z.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x10008D40 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIActivationFactory@@@Z @ 0x100098E0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIA.c)
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     _HampConnectionAllocateState@16 @ 0x1000B340 (_HampConnectionAllocateState@16.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     __SEH_epilog4_GS @ 0x1000D0D0 (__SEH_epilog4_GS.c)
 *     _TraceLoggingRegisterEx@12 @ 0x1000F632 (_TraceLoggingRegisterEx@12.c)
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIProcessMemoryReport@23@@Z @ 0x100108C0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIProcessMemoryReport@23@@Z.c)
 *     _HamQueryApplicationUsageInfo@12 @ 0x10012AD0 (_HamQueryApplicationUsageInfo@12.c)
 *     _HamQueryPackageUsageInfo@12 @ 0x10012BE0 (_HamQueryPackageUsageInfo@12.c)
 *     _HampUsageInfoRegistryQuery@12 @ 0x100132F0 (_HampUsageInfoRegistryQuery@12.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PBU_GUID@@PA_NPAUIResourceSet@3@PAPAU63@@Z @ 0x10013CC0 (-AcquireResourceSet@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionMod_ea_10013CC0.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UAGJW4Enum@ResourceSetType@ExecutionModel@@PAUIResourceSetCallback@4@PAXPBG2KK_KKPA_NPAUIResourceSet@4@PAPAU64@@Z @ 0x10013DB0 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UAGJW4Enum@ResourceSetType@Exe.c)
 *     ?ApplyTerminalResourceSet@ResourceManagerClientProxy@@UAGJK@Z @ 0x100142E0 (-ApplyTerminalResourceSet@ResourceManagerClientProxy@@UAGJK@Z.c)
 *     ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UAGJW4RmResourceSetType@@PAURmResourceSetInfo@@@Z @ 0x100143D0 (-RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UAGJW4RmResourceSetType@@PAURmResourceSe.c)
 *     ?IsKillable@ResourceManagerClientProxy@@UAGJKPA_N@Z @ 0x10014730 (-IsKillable@ResourceManagerClientProxy@@UAGJKPA_N@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UAGJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x100148F0 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UAGJW4Enum@ResourceSetType@Execution.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UAGJXZ @ 0x10014CE0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UAGJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}
