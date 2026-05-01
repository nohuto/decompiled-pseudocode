/*
 * XREFs of _memset @ 0x1000D154
 * Callers:
 *     _HamHostIdInitializeKey@24 @ 0x10005930 (_HamHostIdInitializeKey@24.c)
 *     _HamPopulateActivityProperties@12 @ 0x10005B20 (_HamPopulateActivityProperties@12.c)
 *     _CempGetTokenHostInfo@8 @ 0x10005D60 (_CempGetTokenHostInfo@8.c)
 *     ?HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z @ 0x10006100 (-HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z.c)
 *     ?HampActivityPropertiesInitializeByClass@@YGXPBGW4_HAM_ACTIVITY_CLASS@@PAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x10006820 (-HampActivityPropertiesInitializeByClass@@YGXPBGW4_HAM_ACTIVITY_CLASS@@PAU_HAM_ACTIVITY_PROPERTI.c)
 *     _HamCompleteExtendedExecution@12 @ 0x10007C90 (_HamCompleteExtendedExecution@12.c)
 *     _HampConnectionInitialize@12 @ 0x1000B090 (_HampConnectionInitialize@12.c)
 *     _HamIpcChannelInitialize@16 @ 0x1000C1C3 (_HamIpcChannelInitialize@16.c)
 *     _RmpClientConnectionInitialize@4 @ 0x1001184F (_RmpClientConnectionInitialize@4.c)
 *     _RmpClientReleaseResourceSet@16 @ 0x10011A05 (_RmpClientReleaseResourceSet@16.c)
 *     _RmpClientUnregisterActivityHostCallbacks@12 @ 0x10011B0D (_RmpClientUnregisterActivityHostCallbacks@12.c)
 *     _RmpClientCallbackGenerateLastMessage@8 @ 0x10011CDF (_RmpClientCallbackGenerateLastMessage@8.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PBU_GUID@@PA_NPAUIResourceSet@3@PAPAU63@@Z @ 0x10013CC0 (-AcquireResourceSet@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionMod_ea_10013CC0.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UAGJW4Enum@ResourceSetType@ExecutionModel@@PAUIResourceSetCallback@4@PAXPBG2KK_KKPA_NPAUIResourceSet@4@PAPAU64@@Z @ 0x10013DB0 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UAGJW4Enum@ResourceSetType@Exe.c)
 *     ?Apply@ResourceSetClientProxy@@UAGJK@Z @ 0x10014180 (-Apply@ResourceSetClientProxy@@UAGJK@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManagerClientProxy@@UAGJK@Z @ 0x100142E0 (-ApplyTerminalResourceSet@ResourceManagerClientProxy@@UAGJK@Z.c)
 *     ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UAGJW4RmResourceSetType@@PAURmResourceSetInfo@@@Z @ 0x100143D0 (-RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UAGJW4RmResourceSetType@@PAURmResourceSe.c)
 *     ?IsKillable@ResourceManagerClientProxy@@UAGJKPA_N@Z @ 0x10014730 (-IsKillable@ResourceManagerClientProxy@@UAGJKPA_N@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UAGJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x100148F0 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UAGJW4Enum@ResourceSetType@Execution.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UAGJXZ @ 0x10014CE0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UAGJXZ.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YGXPBU_ResourceSetInfo@1@PAURmResourceSetInfo@@@Z @ 0x10015225 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YGXPBU_ResourceSetInfo@1@PAURmResourceSe.c)
 *     _RmpResourceSetPropertiesInitialize@4 @ 0x100154CC (_RmpResourceSetPropertiesInitialize@4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return _memset(a1, Val, Size);
}
