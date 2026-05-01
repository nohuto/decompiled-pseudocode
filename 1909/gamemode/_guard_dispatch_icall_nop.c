/*
 * XREFs of _guard_dispatch_icall_nop @ 0x180006730
 * Callers:
 *     _TlgEnableCallback @ 0x1800010B0 (_TlgEnableCallback.c)
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x180001428 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x1800017D4 (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x180001990 (-WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x180001FF8 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z @ 0x18000215C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002404 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z @ 0x1800024A0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z.c)
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180003080 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x1800031D0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180003250 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180003588 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     MsixvcAddPackageAsync @ 0x180003D80 (MsixvcAddPackageAsync.c)
 *     ?MsixvcUpdatePolicyInternal@@YAJPEB_W0I0_K@Z @ 0x180003EA8 (-MsixvcUpdatePolicyInternal@@YAJPEB_W0I0_K@Z.c)
 *     ?MsixvcRemediateMutablePackagesForVolumeAsync@@YAJPEAUIPackageVolume@Deployment@Management@Windows@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z @ 0x180004530 (-MsixvcRemediateMutablePackagesForVolumeAsync@@YAJPEAUIPackageVolume@Deployment@Management@Windo.c)
 *     MsixvcAddGameToGCS @ 0x180004630 (MsixvcAddGameToGCS.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800049C4 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800049F0 (--$ActivateInstance@V-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180004ECC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000512C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18000518C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180005588 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     _CRT_INIT @ 0x18000596C (_CRT_INIT.c)
 *     __DllMainCRTStartup @ 0x180005BF4 (__DllMainCRTStartup.c)
 *     _onexit_0 @ 0x180006038 (_onexit_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
