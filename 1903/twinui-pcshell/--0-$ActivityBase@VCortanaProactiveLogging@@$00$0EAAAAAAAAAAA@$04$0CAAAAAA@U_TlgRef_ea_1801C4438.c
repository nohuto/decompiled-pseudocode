/*
 * XREFs of ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801C4438
 * Callers:
 *     _lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator() @ 0x1801C5328 (_lambda_6beee81bb2061f57cf9eaca4a4fea397_--operator().c)
 *     ?ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C5E6C (-ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C61A8 (-ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801C634C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 *     ?CleanupUndocking@CortanaStoreAppHelper@@YAJXZ @ 0x1801C64F0 (-CleanupUndocking@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?IsLowCostDevice@CortanaStoreAppHelper@@YAJV?$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@PEAE@Z @ 0x1801C6DBC (-IsLowCostDevice@CortanaStoreAppHelper@@YAJV-$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@.c)
 *     ?IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z @ 0x1801C73CC (-IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z.c)
 *     ?RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7D58 (-RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7EAC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801CBF3C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180049904 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  return a1;
}
