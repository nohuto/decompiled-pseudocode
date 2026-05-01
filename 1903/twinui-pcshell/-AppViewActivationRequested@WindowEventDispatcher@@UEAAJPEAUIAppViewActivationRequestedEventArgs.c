/*
 * XREFs of ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180036E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18000BA20 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18000C110 (--1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000C2D4 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000C430 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB40 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18000CB60 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000DBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x18000DC3C (--$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Win.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@PEAUIPropertySet@Collections@Foundation@Windows@@H@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@$$QEAH@Z @ 0x18000E21C (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@PEAUIPropertySet@Collections@Foundati.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800349D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800349D0.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180034FDC (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180036604 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x1800368D8 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@P.c)
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x180036A9C (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shel.c)
 *     ?GetView@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@@Z @ 0x180036BE0 (-GetView@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisp.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180039014 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180039054 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationReq.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x18003A034 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18003C800 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180044D90 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059740 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005FB64 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?ReportStopActivity@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18005FC48 (-ReportStopActivity@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x180061194 (-InsertAtInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$IVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180071D10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$I.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x180073E54 (--$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@Ap_ea_180073E54.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180076924 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18007B5AC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??0AgileGitPtr@@QEAA@AEBV0@@Z @ 0x18007E1DC (--0AgileGitPtr@@QEAA@AEBV0@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008337C (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@25@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@@12@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@Internal@Windows@@$$QEAUpermission@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@7Collections@Foundation@8@@Z @ 0x18008D45C (--$Make@V-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisp.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x18009AC88 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800FF55C (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180115C14 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801180C4 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1801200DC (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$?0$0CA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CA@$$CBG@Z @ 0x18012C658 (--$-0$0CA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CA@$$CBG@Z.c)
 *     ??1Completer@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAA@XZ @ 0x18017D2C8 (--1Completer@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAA@XZ.c)
 *     ?SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@E@Z @ 0x18026E5B4 (-SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     ??$?4VLegacyWindowWrapper@@X@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@@Z @ 0x180276870 (--$-4VLegacyWindowWrapper@@X@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wi.c)
 *     ??$MakeOrThrow@VLegacyWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@wil@@YA?AV?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x180277F94 (--$MakeOrThrow@VLegacyWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@Window_ea_180277F94.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18027FD60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_18027FD60.c)
 */

// Hidden C++ exception states: #wind=44 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *a2)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v2; // rdi
  WindowEventDispatcher *v3; // r14
  int *v4; // rbx
  __int64 v5; // rbx
  int *v6; // r8
  const GUID *v7; // rcx
  int v8; // r13d
  __int64 v9; // rbx
  DWORD v10; // edi
  signed __int64 *v11; // rbx
  signed __int64 v12; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v14; // rax
  signed __int64 v15; // rax
  __int64 (__fastcall **v16)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *); // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v20; // rax
  int v21; // eax
  __int64 *v22; // rbx
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  int v28; // eax
  int (__fastcall ***v29)(_QWORD, GUID *, _QWORD *); // r15
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  __int64 (__fastcall **v32)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *); // rax
  int v33; // eax
  wil::details::in1diag3 *v34; // rcx
  unsigned int v35; // r8d
  unsigned __int64 v36; // rax
  int v37; // edx
  int v38; // edx
  HRESULT v39; // eax
  int v40; // edx
  unsigned int v41; // r8d
  bool v42; // al
  __int64 (__fastcall **v43)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *); // rax
  int v44; // eax
  wil::details::in1diag3 *v45; // rcx
  _QWORD *v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  wil::details::in1diag3 *v49; // rcx
  int v50; // eax
  wil::details::in1diag3 *v51; // rcx
  __int64 v52; // rax
  int v53; // eax
  __int64 (__fastcall **v54)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *); // rax
  int v55; // eax
  unsigned int v56; // r8d
  wil::details::in1diag3 *v57; // rcx
  struct IWindowWrapperInternal *v58; // rbx
  unsigned __int64 v59; // rax
  int v60; // edx
  int v61; // edx
  HRESULT v62; // eax
  int v63; // edx
  __int64 v64; // r8
  int v65; // eax
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v66; // rdx
  unsigned __int8 v67; // r8
  char v68; // cl
  RTL_SRWLOCK *v69; // r14
  int v70; // esi
  struct IWindowWrapperInternal *v71; // rdi
  struct IWindowWrapperInternal **v72; // r13
  AgileGitPtr *v73; // rax
  struct IWindowWrapperInternal *v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  wil::details::in1diag3 *v77; // rcx
  int v78; // eax
  wil::details::in1diag3 *v79; // rcx
  Microsoft::WRL::WeakRef *v80; // rbx
  int v81; // eax
  volatile signed __int64 *v82; // rdi
  int v83; // eax
  RTL_SRWLOCK *v84; // rsi
  RTL_SRWLOCK *v85; // rbx
  __int64 v86; // rdx
  char v87; // r14
  __int64 v88; // r8
  struct IWindowWrapperInternal *v89; // rsi
  __int64 v90; // rdi
  __int64 *CachedView; // rax
  bool v92; // zf
  struct IWindowWrapperInternal *v93; // rsi
  int v94; // eax
  int v95; // edi
  RTL_SRWLOCK *v96; // r14
  __int64 v97; // rbx
  __int64 v98; // r8
  HSTRING v99; // rsi
  bool v100; // bl
  __int64 v101; // rax
  int v102; // eax
  wil::details::in1diag3 *v103; // rcx
  int v104; // eax
  wil::details::in1diag3 *v105; // rcx
  __int64 v106; // rax
  _QWORD *v107; // rax
  const char *v108; // r9
  _QWORD *v109; // rdx
  wil::details::in1diag3 *v110; // rcx
  __int64 v111; // rax
  unsigned int v112; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v113; // rdi
  int v114; // eax
  wil::details::in1diag3 *v115; // rcx
  int v116; // eax
  wil::details::in1diag3 *v117; // rcx
  int v118; // eax
  wil::details::in1diag3 *v119; // rcx
  __int64 v120; // rax
  RTL_SRWLOCK *v121; // rdi
  const WCHAR *v122; // rsi
  const WCHAR *v123; // rax
  _QWORD *EventRegistration; // rax
  __int64 v125; // rax
  int v126; // eax
  wil::details::in1diag3 *v127; // rcx
  __int64 v128; // rax
  RTL_SRWLOCK *v129; // rdi
  std::_Ref_count_base *v130; // r14
  AgileGitPtr *v131; // r8
  AgileGitPtr *v132; // rdi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v133; // rsi
  __int64 v134; // rcx
  ConnectedStandbyHelper *Ptr; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v136; // rsi
  __int64 (__fastcall *v137)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, HSTRING); // rdi
  const WCHAR *v138; // rcx
  unsigned int v139; // r8d
  unsigned __int64 v140; // rax
  int v141; // edx
  int v142; // edx
  HRESULT v143; // eax
  int v144; // edx
  unsigned int v145; // r8d
  int v146; // eax
  wil::details::in1diag3 *v147; // rcx
  int v148; // eax
  wil::details::in1diag3 *v149; // rcx
  __int64 v150; // rcx
  __int64 v151; // r9
  int v152; // eax
  wil::details::in1diag3 *v153; // r10
  volatile signed __int64 *v154; // r14
  int v155; // eax
  wil::details::in1diag3 *v156; // rcx
  __int64 v157; // rcx
  int v158; // eax
  wil::details::in1diag3 *v159; // rcx
  unsigned int v160; // esi
  _DWORD *v161; // rdi
  __int64 v162; // r9
  _DWORD *v163; // rax
  wil::details::in1diag3 *v164; // rcx
  int v165; // eax
  wil::details::in1diag3 *v166; // rcx
  int View; // eax
  wil::details::in1diag3 *v168; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v169; // r13
  __int64 v170; // rsi
  int v171; // eax
  wil::details::in1diag3 *v172; // rcx
  int v173; // eax
  wil::details::in1diag3 *v174; // rcx
  int v175; // eax
  wil::details::in1diag3 *v176; // rcx
  int v177; // eax
  wil::details::in1diag3 *v178; // rcx
  HRESULT v179; // eax
  int v180; // edx
  __int64 v181; // r8
  int v182; // eax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // rdx
  int v186; // eax
  wil::details::in1diag3 *v187; // rcx
  __int64 v188; // rcx
  int v189; // eax
  volatile signed __int32 *v190; // rdx
  char v191; // bl
  int v192; // eax
  __int64 v193; // rdx
  void *v194; // rbx
  HANDLE v195; // rax
  HANDLE v196; // rax
  int UserDataCount; // [rsp+20h] [rbp-5C8h]
  char v198; // [rsp+50h] [rbp-598h] BYREF
  char v199; // [rsp+51h] [rbp-597h] BYREF
  unsigned __int8 v200; // [rsp+52h] [rbp-596h] BYREF
  char v201; // [rsp+53h] [rbp-595h] BYREF
  int v202; // [rsp+54h] [rbp-594h]
  RTL_SRWLOCK *v203; // [rsp+58h] [rbp-590h]
  struct IWindowWrapperInternal *v204; // [rsp+60h] [rbp-588h] BYREF
  int v205; // [rsp+68h] [rbp-580h] BYREF
  int v206; // [rsp+6Ch] [rbp-57Ch] BYREF
  __int64 *v207; // [rsp+70h] [rbp-578h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v208; // [rsp+78h] [rbp-570h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v209; // [rsp+80h] [rbp-568h]
  struct Windows::Foundation::Collections::IPropertySet *v210; // [rsp+88h] [rbp-560h] BYREF
  int v211; // [rsp+90h] [rbp-558h] BYREF
  volatile signed __int64 *v212; // [rsp+98h] [rbp-550h] BYREF
  HSTRING v213; // [rsp+A0h] [rbp-548h] BYREF
  __int64 v214; // [rsp+A8h] [rbp-540h] BYREF
  __int64 v215; // [rsp+B0h] [rbp-538h] BYREF
  volatile signed __int64 *v216; // [rsp+B8h] [rbp-530h]
  unsigned int v217; // [rsp+C0h] [rbp-528h] BYREF
  unsigned int v218; // [rsp+C4h] [rbp-524h] BYREF
  unsigned int v219; // [rsp+C8h] [rbp-520h]
  struct IInspectable *v220; // [rsp+D0h] [rbp-518h] BYREF
  __int64 v221; // [rsp+D8h] [rbp-510h] BYREF
  __int64 *v222; // [rsp+E0h] [rbp-508h] BYREF
  AgileGitPtr *v223; // [rsp+E8h] [rbp-500h]
  std::_Ref_count_base *v224[2]; // [rsp+F0h] [rbp-4F8h] BYREF
  __int64 v225; // [rsp+100h] [rbp-4E8h] BYREF
  __int64 v226; // [rsp+108h] [rbp-4E0h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v227; // [rsp+110h] [rbp-4D8h] BYREF
  DWORD CurrentThreadId; // [rsp+118h] [rbp-4D0h] BYREF
  int v229; // [rsp+11Ch] [rbp-4CCh] BYREF
  int v230; // [rsp+120h] [rbp-4C8h] BYREF
  int v231; // [rsp+124h] [rbp-4C4h] BYREF
  int v232; // [rsp+128h] [rbp-4C0h] BYREF
  unsigned int v233; // [rsp+12Ch] [rbp-4BCh] BYREF
  int v234; // [rsp+130h] [rbp-4B8h] BYREF
  int v235; // [rsp+138h] [rbp-4B0h] BYREF
  WINBOOL v236; // [rsp+13Ch] [rbp-4ACh] BYREF
  int v237; // [rsp+140h] [rbp-4A8h]
  LPVOID Context; // [rsp+148h] [rbp-4A0h] BYREF
  LPVOID v239; // [rsp+150h] [rbp-498h] BYREF
  __int64 v240; // [rsp+158h] [rbp-490h] BYREF
  int (__fastcall ***v241)(_QWORD, GUID *, __int64 *); // [rsp+160h] [rbp-488h] BYREF
  _QWORD *v242; // [rsp+168h] [rbp-480h] BYREF
  struct IWindowWrapperInternal *v243; // [rsp+170h] [rbp-478h] BYREF
  __int64 v244; // [rsp+178h] [rbp-470h] BYREF
  __int64 v245; // [rsp+180h] [rbp-468h] BYREF
  volatile signed __int64 *v246; // [rsp+188h] [rbp-460h] BYREF
  int (__fastcall ***v247)(_QWORD, GUID *, _QWORD *); // [rsp+190h] [rbp-458h]
  volatile signed __int64 *v248; // [rsp+198h] [rbp-450h] BYREF
  __int64 v249; // [rsp+1A0h] [rbp-448h] BYREF
  __int64 v250; // [rsp+1A8h] [rbp-440h] BYREF
  LPVOID v251; // [rsp+1B0h] [rbp-438h] BYREF
  WINBOOL fPending; // [rsp+1B8h] [rbp-430h] BYREF
  WINBOOL v253; // [rsp+1BCh] [rbp-42Ch] BYREF
  __int64 v254; // [rsp+1C0h] [rbp-428h] BYREF
  struct IWindowWrapperInternal *v255; // [rsp+1C8h] [rbp-420h] BYREF
  _DWORD *v256; // [rsp+1D0h] [rbp-418h] BYREF
  __int64 v257; // [rsp+1D8h] [rbp-410h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v258; // [rsp+1E0h] [rbp-408h]
  struct Windows::Foundation::Collections::IPropertySet *v259; // [rsp+1E8h] [rbp-400h] BYREF
  __int64 v260; // [rsp+1F0h] [rbp-3F8h] BYREF
  __int64 v261; // [rsp+1F8h] [rbp-3F0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v262; // [rsp+200h] [rbp-3E8h] BYREF
  __int64 v263[2]; // [rsp+208h] [rbp-3E0h] BYREF
  HSTRING v264; // [rsp+218h] [rbp-3D0h]
  PCWSTR StringRawBuffer; // [rsp+220h] [rbp-3C8h] BYREF
  __int64 v266; // [rsp+228h] [rbp-3C0h] BYREF
  int (__fastcall ***v267)(_QWORD, GUID *, _QWORD *); // [rsp+230h] [rbp-3B8h] BYREF
  __int64 *v268; // [rsp+238h] [rbp-3B0h] BYREF
  RTL_SRWLOCK *v269; // [rsp+240h] [rbp-3A8h] BYREF
  PCWSTR v270; // [rsp+248h] [rbp-3A0h] BYREF
  __int64 v271; // [rsp+250h] [rbp-398h] BYREF
  int (__fastcall ***v272)(_QWORD, GUID *, _QWORD *); // [rsp+258h] [rbp-390h] BYREF
  __int64 *v273; // [rsp+260h] [rbp-388h] BYREF
  RTL_SRWLOCK *v274; // [rsp+268h] [rbp-380h] BYREF
  char v275[8]; // [rsp+270h] [rbp-378h] BYREF
  char v276[8]; // [rsp+278h] [rbp-370h] BYREF
  __int64 v277[2]; // [rsp+280h] [rbp-368h] BYREF
  _DWORD *v278; // [rsp+290h] [rbp-358h]
  PSRWLOCK SRWLock; // [rsp+298h] [rbp-350h] BYREF
  struct IWindowWrapperInternal *v280; // [rsp+2A0h] [rbp-348h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+2A8h] [rbp-340h] BYREF
  __int128 v282; // [rsp+2C0h] [rbp-328h] BYREF
  std::_Ref_count_base *v283[2]; // [rsp+2D0h] [rbp-318h] BYREF
  union _RTL_RUN_ONCE *v284; // [rsp+2E0h] [rbp-308h] BYREF
  int v285; // [rsp+2E8h] [rbp-300h]
  RTL_SRWLOCK *v286; // [rsp+2F0h] [rbp-2F8h]
  RTL_SRWLOCK *v287; // [rsp+2F8h] [rbp-2F0h]
  RTL_SRWLOCK *v288; // [rsp+300h] [rbp-2E8h]
  __int64 v289; // [rsp+308h] [rbp-2E0h]
  __int64 v290; // [rsp+310h] [rbp-2D8h]
  char *v291; // [rsp+318h] [rbp-2D0h]
  char v292[8]; // [rsp+320h] [rbp-2C8h] BYREF
  std::_Ref_count_base *v293; // [rsp+328h] [rbp-2C0h]
  __int64 v294; // [rsp+330h] [rbp-2B8h] BYREF
  std::_Ref_count_base *v295; // [rsp+338h] [rbp-2B0h]
  char v296[8]; // [rsp+340h] [rbp-2A8h] BYREF
  std::_Ref_count_base *v297; // [rsp+348h] [rbp-2A0h]
  void **v298; // [rsp+350h] [rbp-298h] BYREF
  _QWORD v299[2]; // [rsp+358h] [rbp-290h] BYREF
  __int64 v300; // [rsp+368h] [rbp-280h]
  DWORD v301; // [rsp+370h] [rbp-278h]
  int *v302; // [rsp+378h] [rbp-270h]
  int *v303; // [rsp+380h] [rbp-268h]
  int v304; // [rsp+388h] [rbp-260h] BYREF
  char v305; // [rsp+38Ch] [rbp-25Ch]
  char v306[32]; // [rsp+390h] [rbp-258h] BYREF
  int v307; // [rsp+3B0h] [rbp-238h] BYREF
  const char *v308; // [rsp+3B8h] [rbp-230h]
  LPVOID v309; // [rsp+3C0h] [rbp-228h]
  char v310; // [rsp+3C8h] [rbp-220h]
  __int64 v311; // [rsp+3D0h] [rbp-218h]
  __int64 v312; // [rsp+3D8h] [rbp-210h] BYREF
  LPVOID lpMem; // [rsp+468h] [rbp-180h]
  __int64 v314; // [rsp+470h] [rbp-178h]
  __int64 v315; // [rsp+478h] [rbp-170h]
  void *v316; // [rsp+480h] [rbp-168h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+490h] [rbp-158h] BYREF
  HSTRING string; // [rsp+4A8h] [rbp-140h] BYREF
  HSTRING_HEADER v319; // [rsp+4B0h] [rbp-138h] BYREF
  HSTRING v320; // [rsp+4C8h] [rbp-120h] BYREF
  HSTRING_HEADER v321; // [rsp+4D0h] [rbp-118h] BYREF
  HSTRING v322; // [rsp+4E8h] [rbp-100h] BYREF
  HSTRING_HEADER v323; // [rsp+4F0h] [rbp-F8h] BYREF
  HSTRING v324; // [rsp+508h] [rbp-E0h] BYREF
  char v325[32]; // [rsp+510h] [rbp-D8h] BYREF
  char v326[32]; // [rsp+530h] [rbp-B8h] BYREF
  char v327[32]; // [rsp+550h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+570h] [rbp-78h] BYREF
  void *v329; // [rsp+580h] [rbp-68h]
  int v330; // [rsp+588h] [rbp-60h]
  int v331; // [rsp+58Ch] [rbp-5Ch]
  void *v332; // [rsp+590h] [rbp-58h]
  __int64 v333; // [rsp+598h] [rbp-50h]
  DWORD *p_CurrentThreadId; // [rsp+5A0h] [rbp-48h]
  __int64 v335; // [rsp+5A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+0h]

  v289 = -2LL;
  v2 = a2;
  v209 = a2;
  v3 = this;
  v203 = (RTL_SRWLOCK *)this;
  v277[1] = (__int64)this;
  v258 = a2;
  v299[0] = 0LL;
  v299[1] = &v298;
  v300 = 0LL;
  v301 = 0;
  v302 = &v307;
  v303 = &v304;
  v304 = 0;
  v305 = 0;
  v310 = 0;
  v307 = 0;
  v308 = "WindowEventDispatcher_AppViewActivationRequested";
  v309 = 0LL;
  v311 = 1LL;
  lpMem = 0LL;
  memset_0(&v312, 0, 0x90uLL);
  v314 = 0LL;
  v315 = 0LL;
  v316 = 0LL;
  v298 = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  v290 = 0LL;
  v202 = 0;
  v4 = v303;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 2));
  }
  *v4 = 1;
  v239 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v253, &v239) && v253 )
  {
    v239 = qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
  }
  v5 = *((_QWORD *)v239 + 1);
  if ( *(_DWORD *)v5 <= 5u )
  {
    v8 = 1;
  }
  else
  {
    v332 = &`CFramePresentationTelemetry::SetSystemVisual::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v333 = 8LL;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v335 = 4LL;
    v6 = v303;
    if ( !*((_BYTE *)v303 + 4) || _TlgGuidIsZero((const struct _GUID *)(v303 + 6)) )
      v7 = 0LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v329 = &unk_1804D12BE;
    v330 = 92;
    v8 = 1;
    v331 = 1;
    v219 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, (LPCGUID)(v6 + 2), v7, 4u, &UserData);
  }
  if ( !v301 )
  {
    v9 = wil::details::g_pThreadFailureCallbacks;
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      v10 = GetCurrentThreadId();
      v11 = (signed __int64 *)(v9 + 8 * (v10 % 0xAuLL));
      v12 = *v11;
      if ( *v11 )
      {
        while ( *(_DWORD *)(v12 + 8) != v10 )
        {
          v12 = *(_QWORD *)(v12 + 16);
          if ( !v12 )
            goto LABEL_21;
        }
        goto LABEL_24;
      }
LABEL_21:
      ProcessHeap = GetProcessHeap();
      v14 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
      v12 = (signed __int64)v14;
      if ( v14 )
      {
        *(_QWORD *)v14 = 0LL;
        v14[2] = v10;
        *((_QWORD *)v14 + 2) = 0LL;
        _m_prefetchw(v11);
        do
        {
          v15 = *v11;
          *(_QWORD *)(v12 + 16) = *v11;
        }
        while ( v15 != _InterlockedCompareExchange64(v11, v12, v15) );
LABEL_24:
        v2 = v209;
        goto LABEL_27;
      }
      v2 = v209;
    }
    v12 = 0LL;
LABEL_27:
    v299[0] = v12;
    if ( v12 )
    {
      v300 = *(_QWORD *)v12;
      *(_QWORD *)v12 = v299;
      v301 = GetCurrentThreadId();
    }
  }
  if ( !*((_BYTE *)v3 + 464) )
  {
    v189 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, __int64))(*(_QWORD *)v2 + 112LL))(
             v2,
             2150039860LL);
    if ( v189 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x39A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v189,
        UserDataCount);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      &v298,
      2150039860LL);
    goto LABEL_232;
  }
  v16 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *))v2;
  v222 = 0LL;
  v17 = (*v16)(v2, &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b, (__int64 *)&v222);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x278,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v17,
      UserDataCount);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v222);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::~WindowEventDispatcher_AppViewActivationRequested((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)&v298);
    return v18;
  }
  try
  {
    v207 = 0LL;
    v20 = *v222;
    v207 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v20 + 48))(v222, &v207);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27D,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v21,
        UserDataCount);
    }
    else
    {
      v22 = v207;
      v247 = 0LL;
      v23 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v207 + 56))(v207, &v206);
      v24 = retaddr;
      if ( v23 >= 0 )
      {
        v237 = v206;
        v198 = 0;
        v25 = *v22;
        v241 = 0LL;
        v26 = (*(__int64 (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v25 + 64))(
                v22,
                &v241);
        v27 = retaddr;
        if ( v26 >= 0 )
        {
          if ( v237 == 1 )
          {
            v240 = 0LL;
            if ( (**v241)(v241, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, &v240) >= 0 )
            {
              v28 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v240 + 240LL))(v240, &v198);
              if ( v28 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x195,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
                  (const char *)(unsigned int)v28,
                  UserDataCount);
            }
            if ( v240 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v240 + 16LL))(v240);
          }
          v29 = v241;
          v247 = v241;
          if ( v198 )
            goto LABEL_222;
          v30 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v207 + 48))(v207, &v205);
          v31 = retaddr;
          if ( v30 >= 0 )
          {
            v32 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *))v2;
            v210 = 0LL;
            v33 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, struct Windows::Foundation::Collections::IPropertySet **))v32[8])(
                    v2,
                    &v210);
            v34 = retaddr;
            if ( v33 >= 0 )
            {
              v208 = v210;
              if ( v210 )
                (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v210 + 8LL))(v210);
              v217 = 0;
              wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::ReportUsageToService();
              string = 0LL;
              v36 = -1LL;
              do
                ++v36;
              while ( aViewsizeprefer_1[v36] );
              v37 = -1;
              if ( v36 > 0xFFFFFFFF )
              {
LABEL_303:
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v37, v35);
                __debugbreak();
                JUMPOUT(0x18003900ELL);
              }
              v38 = v36 + 1;
              if ( (int)v36 + 1 < (unsigned int)v36 )
              {
LABEL_302:
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v38, v35);
                goto LABEL_303;
              }
              v39 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v36, &hstringHeader, &string);
              if ( v39 >= 0 )
              {
                v202 = 1;
                v42 = (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v208,
                             string,
                             &v217) < 0
                   || !v217;
                v8 = 0;
                v202 = 0;
                if ( !v42 )
                  goto LABEL_68;
                v43 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *))v2;
                v242 = 0LL;
                v44 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, _QWORD **))v43[7])(
                        v2,
                        &v242);
                v45 = retaddr;
                if ( v44 >= 0 )
                {
                  v46 = v242;
                  if ( !v242 )
                  {
LABEL_66:
                    if ( v46 )
                      (*(void (__fastcall **)(_QWORD *))(*v46 + 16LL))(v46);
LABEL_68:
                    v219 = v8;
                    v54 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *))v2;
                    v250 = 0LL;
                    v55 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, __int64 *))v54[10])(
                            v2,
                            &v250);
                    v57 = retaddr;
                    if ( v55 >= 0 )
                    {
                      v201 = 0;
                      v58 = 0LL;
                      v204 = 0LL;
                      *(_OWORD *)v224 = 0LL;
                      v216 = 0LL;
                      v212 = 0LL;
                      v320 = 0LL;
                      v59 = -1LL;
                      do
                        ++v59;
                      while ( aAllowwindowreu[v59] );
                      v60 = -1;
                      if ( v59 > 0xFFFFFFFF )
                        goto LABEL_301;
                      v61 = v59 + 1;
                      if ( (int)v59 + 1 < (unsigned int)v59 )
                      {
LABEL_300:
                        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v61, v56);
LABEL_301:
                        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v60, v56);
                        goto LABEL_302;
                      }
                      v62 = WindowsCreateStringReference(L"AllowWindowReuse", v59, &v319, &v320);
                      if ( v62 >= 0 )
                      {
                        v65 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                                &v208,
                                v320,
                                v64,
                                &v199);
                        v68 = v199;
                        if ( v65 < 0 )
                          v68 = 1;
                        v199 = v68;
                        if ( !v68 )
                        {
                          if ( v210 )
                          {
                            v94 = Windows::Internal::Shell::Desktop::ViewManagerInterop::SetAppActivationPolicy(
                                    (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v208,
                                    v66,
                                    v67);
                            if ( v94 < 0 )
                              wil::details::in1diag3::_Log_Hr(
                                retaddr,
                                (void *)0x2F3,
                                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                (const char *)(unsigned int)v94,
                                UserDataCount);
                          }
LABEL_119:
                          v95 = v8;
                          v96 = (RTL_SRWLOCK *)((char *)v3 + 440);
                          AcquireSRWLockExclusive(v96);
                          v288 = v96;
                          if ( v58 )
                          {
                            LOBYTE(v8) = 0;
                            goto LABEL_139;
                          }
                          v264 = 0LL;
                          v97 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                              v326,
                                              off_180431538)
                                          + 24);
                          v263[1] = (__int64)L"Windows.Internal.ShellExperience.TopLevelApplication";
                          v213 = 0LL;
                          v8 |= 0x100u;
                          v202 = v8;
                          WindowsDeleteString(0LL);
                          v213 = 0LL;
                          if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
                                      &v208,
                                      v97,
                                      v98,
                                      &v213) < 0 )
                            Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&v213);
                          v99 = v213;
                          v213 = 0LL;
                          WindowsDeleteString(0LL);
                          v264 = v99;
                          v202 = v95;
                          WindowsDeleteString(v213);
                          v100 = v206 == 0;
                          v214 = 0LL;
                          v101 = *v207;
                          v214 = 0LL;
                          v102 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v101 + 72))(v207, &v214);
                          v103 = retaddr;
                          if ( v102 >= 0 )
                          {
                            v211 = 0;
                            if ( !v214
                              || (v104 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v214 + 48LL))(
                                           v214,
                                           &v211),
                                  v105 = retaddr,
                                  v104 >= 0) )
                            {
                              if ( v100 )
                              {
                                v231 = 0;
                                StringRawBuffer = WindowsGetStringRawBuffer(v99, 0LL);
                                v266 = v214;
                                v267 = v29;
                                v268 = v207;
                                v269 = v203 - 2;
                                v106 = wil::MakeOrThrow<LegacyWindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType>(
                                         (unsigned int)&v254,
                                         (unsigned int)&v269,
                                         (unsigned int)&v268,
                                         (unsigned int)&v267,
                                         (__int64)&v206,
                                         (__int64)&v205,
                                         (__int64)&v266,
                                         (__int64)&v211,
                                         (__int64)&StringRawBuffer,
                                         (__int64)&v231);
                                wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=<LegacyWindowWrapper,void>(
                                  &v204,
                                  v106);
                                if ( v254 )
                                {
                                  v254 = 0LL;
                                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::Release();
                                }
                                v58 = v204;
LABEL_134:
                                LOBYTE(v8) = 1;
                                if ( v214 )
                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v214 + 16LL))(v214);
                                if ( v99 )
                                  WindowsDeleteString(v99);
LABEL_139:
                                v112 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v58
                                                                                                  + 288LL))(v58);
                                v113 = v209;
                                v114 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, _QWORD))(*(_QWORD *)v209 + 88LL))(
                                         v209,
                                         v112);
                                v115 = retaddr;
                                if ( v114 >= 0 )
                                {
                                  v116 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *, __int64))(*(_QWORD *)v58 + 144LL))(
                                           v58,
                                           v250);
                                  v117 = retaddr;
                                  if ( v116 >= 0 )
                                  {
                                    v118 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *))(*(_QWORD *)v58 + 160LL))(
                                             v58,
                                             v113);
                                    v119 = retaddr;
                                    if ( v118 >= 0 )
                                    {
                                      v120 = *(_QWORD *)v58;
                                      if ( (_BYTE)v8 )
                                      {
                                        v121 = v203;
                                        v122 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(v120 + 280))(v58);
                                        v123 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v58 + 272LL))(v58);
                                        EventRegistration = WindowEventDispatcher::GetEventRegistration(
                                                              (__int64)&v121[-2],
                                                              &v294,
                                                              v123,
                                                              v122);
                                        std::shared_ptr<ViewEventRegistration>::operator=(v224, EventRegistration);
                                        if ( v295 )
                                          std::_Ref_count_base::_Decref(v295);
                                        v282 = 0LL;
                                        if ( v224[1] )
                                        {
                                          _InterlockedIncrement((volatile signed __int32 *)v224[1] + 2);
                                          v29 = v247;
                                          v58 = v204;
                                          v216 = v212;
                                        }
                                        v282 = *(_OWORD *)v224;
                                        v255 = v58;
                                        (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v58 + 8LL))(v58);
                                        WindowEventDispatcher::CacheWindowWrapper(
                                          (__int64 **)&v121[-2],
                                          (__int64 *)&v255,
                                          &v282,
                                          0LL);
                                      }
                                      else
                                      {
                                        v125 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *, char *))(v120 + 264))(
                                                 v58,
                                                 v296);
                                        std::shared_ptr<ViewEventRegistration>::operator=(v224, v125);
                                        if ( v297 )
                                          std::_Ref_count_base::_Decref(v297);
                                      }
                                      if ( v96 )
                                        ReleaseSRWLockExclusive(v96);
                                      v126 = (**(__int64 (__fastcall ***)(struct IWindowWrapperInternal *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))v58)(
                                               v58,
                                               &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
                                               &v227);
                                      v127 = retaddr;
                                      if ( v126 >= 0 )
                                      {
                                        v128 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                 (Microsoft::WRL::Wrappers::HStringReference *)v327,
                                                 (const unsigned __int16 (*)[32])L"AAMShim.ActivateOptionsInternal");
                                        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                                                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v208,
                                                    *(HSTRING *)(v128 + 24),
                                                    &v233) >= 0
                                          && (v233 & 0x200000) != 0 )
                                        {
                                          v129 = v203;
                                          v130 = v224[0];
                                          v131 = AgileGitPtr::AgileGitPtr(
                                                   (AgileGitPtr *)v275,
                                                   (std::_Ref_count_base *)((char *)v224[0] + 24));
                                          WindowEventDispatcher::EnsureDuplicateViewDestroyed(&v129[-2], v227, v131);
                                        }
                                        else
                                        {
                                          v130 = v224[0];
                                        }
                                        (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v58 + 360LL))(v58);
                                        if ( (_BYTE)v8 )
                                        {
                                          v132 = AgileGitPtr::AgileGitPtr(
                                                   (AgileGitPtr *)v276,
                                                   (std::_Ref_count_base *)((char *)v130 + 24));
                                          v223 = v132;
                                          v133 = v227;
                                          v259 = v210;
                                          v234 = 0;
                                          v246 = 0LL;
                                          if ( (int)Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgs,ViewEventArgs,enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &,Windows::Foundation::Collections::IPropertySet * &>(
                                                      &v246,
                                                      &v234,
                                                      (__int64 *)&v259) >= 0 )
                                          {
                                            v134 = *(_QWORD *)v132;
                                            v226 = 0LL;
                                            if ( v134 )
                                            {
                                              if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v134 + 24LL))(
                                                     v134,
                                                     &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
                                                     &v226) >= 0
                                                && (*(int (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, volatile signed __int64 *))(*(_QWORD *)v226 + 24LL))(
                                                     v226,
                                                     v133,
                                                     v246) >= 0 )
                                              {
                                                Ptr = (ConnectedStandbyHelper *)v203[40].Ptr;
                                                if ( Ptr )
                                                  ConnectedStandbyHelper::HandleViewCreated(Ptr, v133);
                                              }
                                            }
                                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v226);
                                          }
                                          if ( v246 )
                                            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v246);
                                          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v132);
                                        }
                                        v136 = v209;
                                        v137 = *(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, HSTRING))(*(_QWORD *)v209 + 104LL);
                                        v138 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v58 + 280LL))(v58);
                                        v324 = 0LL;
                                        v140 = -1LL;
                                        do
                                          ++v140;
                                        while ( v138[v140] );
                                        v141 = -1;
                                        if ( v140 > 0xFFFFFFFF )
                                          goto LABEL_299;
                                        v142 = v140 + 1;
                                        if ( (int)v140 + 1 < (unsigned int)v140 )
                                        {
LABEL_298:
                                          Microsoft::WRL::Details::RaiseException(
                                            (Microsoft::WRL::Details *)0x80070216LL,
                                            v142,
                                            v139);
LABEL_299:
                                          Microsoft::WRL::Details::RaiseException(
                                            (Microsoft::WRL::Details *)0x80070216LL,
                                            v141,
                                            v139);
                                          goto LABEL_300;
                                        }
                                        v143 = WindowsCreateStringReference(v138, v140, &v323, &v324);
                                        if ( v143 >= 0 )
                                        {
                                          v146 = v137(v136, v324);
                                          v147 = retaddr;
                                          if ( v146 >= 0 )
                                          {
                                            v277[0] = (__int64)v210;
                                            v248 = 0LL;
                                            v148 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForNavigationRequest,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Foundation::Collections::IPropertySet *>(
                                                     &v248,
                                                     v277);
                                            v149 = retaddr;
                                            if ( v148 >= 0 )
                                            {
                                              v215 = 0LL;
                                              v150 = 0LL;
                                              v92 = *((_QWORD *)v130 + 3) == 0LL;
                                              v215 = 0LL;
                                              if ( v92 )
                                              {
                                                v152 = -2147024809;
                                              }
                                              else
                                              {
                                                v151 = *((_QWORD *)v130 + 3);
                                                if ( v151 )
                                                {
                                                  v152 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v151 + 24LL))(
                                                           *((_QWORD *)v130 + 3),
                                                           &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
                                                           &v215);
                                                  v150 = v215;
                                                }
                                                else
                                                {
                                                  v152 = 0;
                                                }
                                              }
                                              v153 = retaddr;
                                              if ( v152 >= 0 )
                                              {
                                                v154 = v248;
                                                v155 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, volatile signed __int64 *))(*(_QWORD *)v150 + 24LL))(
                                                         v150,
                                                         v227,
                                                         v248);
                                                v156 = retaddr;
                                                if ( v155 >= 0 )
                                                {
                                                  v157 = v215;
                                                  if ( v215 )
                                                  {
                                                    v215 = 0LL;
                                                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v157 + 16LL))(v157);
                                                  }
                                                  v221 = 0LL;
                                                  if ( (**(int (__fastcall ***)(volatile signed __int64 *, GUID *, __int64 *))v154)(
                                                         v154,
                                                         &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
                                                         &v221) < 0 )
                                                  {
LABEL_202:
                                                    v322 = 0LL;
                                                    v179 = WindowsCreateStringReference(
                                                             L"ApplicationMultiviewActivationPolicy",
                                                             0x24u,
                                                             &v321,
                                                             &v322);
                                                    if ( v179 >= 0 )
                                                    {
                                                      v182 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                                                               &v208,
                                                               v322,
                                                               v181,
                                                               &v201);
                                                      if ( v182 < 0 )
                                                        wil::details::in1diag3::Return_Hr(
                                                          retaddr,
                                                          (void *)0x19,
                                                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewma"
                                                                        "nagerinteroppropertysethelpers.h",
                                                          (const char *)(unsigned int)v182,
                                                          UserDataCount);
                                                      LOBYTE(v183) = 3;
                                                      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(
                                                        v184,
                                                        v183);
                                                      if ( v201 )
                                                        WindowEventDispatcher::QueuePendingActivation(
                                                          (WindowEventDispatcher *)&v203[-2],
                                                          v58,
                                                          v210,
                                                          1);
                                                      (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v58 + 368LL))(v58);
                                                      LOBYTE(v185) = 1;
                                                      v186 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v222 + 72))(
                                                               v222,
                                                               v185);
                                                      v187 = retaddr;
                                                      if ( v186 >= 0 )
                                                      {
                                                        v188 = v221;
                                                        if ( v221 )
                                                        {
                                                          v221 = 0LL;
                                                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v188 + 16LL))(v188);
                                                        }
                                                        (*(void (__fastcall **)(volatile signed __int64 *))(*v154 + 16))(v154);
                                                        if ( v227 )
                                                          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v227 + 16LL))(v227);
                                                        if ( v216 )
                                                          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v216);
                                                        if ( v224[1] )
                                                          std::_Ref_count_base::_Decref(v224[1]);
                                                        (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v58 + 16LL))(v58);
                                                        if ( v250 )
                                                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v250 + 16LL))(v250);
                                                        if ( v208 )
                                                          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v208 + 16LL))(v208);
                                                        if ( v210 )
                                                          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v210 + 16LL))(v210);
LABEL_222:
                                                        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
                                                          &v298,
                                                          0LL);
                                                        if ( v29 )
                                                          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
                                                        if ( v207 )
                                                          (*(void (__fastcall **)(__int64 *))(*v207 + 16))(v207);
                                                        goto LABEL_307;
                                                      }
                                                      goto LABEL_297;
                                                    }
LABEL_296:
                                                    Microsoft::WRL::Details::RaiseException(
                                                      (Microsoft::WRL::Details *)(unsigned int)v179,
                                                      v180,
                                                      v181);
LABEL_297:
                                                    wil::details::in1diag3::Throw_Hr(
                                                      v187,
                                                      (void *)0x38C,
                                                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                                      (const char *)(unsigned int)v186,
                                                      UserDataCount);
                                                    goto LABEL_298;
                                                  }
                                                  v218 = 0;
                                                  v158 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v221 + 48LL))(
                                                           v221,
                                                           &v218);
                                                  v159 = retaddr;
                                                  if ( v158 >= 0 )
                                                  {
                                                    v160 = v218;
                                                    v161 = 0LL;
                                                    v278 = 0LL;
                                                    v8 = 0;
                                                    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate const &,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::permission>(&v256);
                                                    v163 = v256;
                                                    if ( v256 )
                                                    {
                                                      v161 = v256;
                                                      v256 = 0LL;
                                                      v278 = v163;
                                                    }
                                                    else
                                                    {
                                                      v8 = -2147024882;
                                                    }
                                                    v164 = retaddr;
                                                    if ( v8 >= 0 )
                                                    {
                                                      LOBYTE(v162) = 1;
                                                      v165 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
                                                               v161,
                                                               0LL,
                                                               v160,
                                                               v162);
                                                      v166 = retaddr;
                                                      if ( v165 >= 0 )
                                                      {
                                                        v257 = 0LL;
                                                        View = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetView(
                                                                 v161,
                                                                 &v257);
                                                        v168 = retaddr;
                                                        if ( View >= 0 )
                                                        {
                                                          v169 = v209;
                                                          v170 = v257;
                                                          v171 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, __int64))(*(_QWORD *)v209 + 72LL))(
                                                                   v209,
                                                                   v257);
                                                          v172 = retaddr;
                                                          if ( v171 >= 0 )
                                                          {
                                                            v200 = 0;
                                                            v173 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v221 + 64LL))(
                                                                     v221,
                                                                     &v200);
                                                            v174 = retaddr;
                                                            if ( v173 >= 0 )
                                                            {
                                                              v249 = 0LL;
                                                              v175 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *))v169)(
                                                                       v169,
                                                                       &GUID_266d6f6f_822f_4304_b3b6_9dc7fec054a5,
                                                                       &v249);
                                                              v176 = retaddr;
                                                              if ( v175 >= 0 )
                                                              {
                                                                v177 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v249 + 48LL))(
                                                                         v249,
                                                                         v200);
                                                                v178 = retaddr;
                                                                if ( v177 >= 0 )
                                                                {
                                                                  if ( v249 )
                                                                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v249 + 16LL))(v249);
                                                                  if ( v170 )
                                                                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v170 + 16LL))(v170);
                                                                  if ( v161 )
                                                                    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::Release(v161);
                                                                  goto LABEL_202;
                                                                }
LABEL_295:
                                                                wil::details::in1diag3::Throw_Hr(
                                                                  v178,
                                                                  (void *)0x37D,
                                                                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib"
                                                                                "\\windoweventdispatcher.cpp",
                                                                  (const char *)(unsigned int)v177,
                                                                  UserDataCount);
                                                                goto LABEL_296;
                                                              }
LABEL_294:
                                                              wil::details::in1diag3::Throw_Hr(
                                                                v176,
                                                                (void *)0x37C,
                                                                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\"
                                                                              "windoweventdispatcher.cpp",
                                                                (const char *)(unsigned int)v175,
                                                                UserDataCount);
                                                              goto LABEL_295;
                                                            }
LABEL_293:
                                                            wil::details::in1diag3::Throw_Hr(
                                                              v174,
                                                              (void *)0x379,
                                                              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\wi"
                                                                            "ndoweventdispatcher.cpp",
                                                              (const char *)(unsigned int)v173,
                                                              UserDataCount);
                                                            goto LABEL_294;
                                                          }
LABEL_292:
                                                          wil::details::in1diag3::Throw_Hr(
                                                            v172,
                                                            (void *)0x376,
                                                            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\wind"
                                                                          "oweventdispatcher.cpp",
                                                            (const char *)(unsigned int)v171,
                                                            UserDataCount);
                                                          goto LABEL_293;
                                                        }
LABEL_291:
                                                        wil::details::in1diag3::Throw_Hr(
                                                          v168,
                                                          (void *)0x375,
                                                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\window"
                                                                        "eventdispatcher.cpp",
                                                          (const char *)(unsigned int)View,
                                                          UserDataCount);
                                                        goto LABEL_292;
                                                      }
LABEL_290:
                                                      wil::details::in1diag3::Throw_Hr(
                                                        v166,
                                                        (void *)0x372,
                                                        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowev"
                                                                      "entdispatcher.cpp",
                                                        (const char *)(unsigned int)v165,
                                                        UserDataCount);
                                                      goto LABEL_291;
                                                    }
LABEL_289:
                                                    wil::details::in1diag3::Throw_Hr(
                                                      v164,
                                                      (void *)0x371,
                                                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                                      (const char *)(unsigned int)v8,
                                                      UserDataCount);
                                                    goto LABEL_290;
                                                  }
LABEL_288:
                                                  wil::details::in1diag3::Throw_Hr(
                                                    v159,
                                                    (void *)0x36D,
                                                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                                    (const char *)(unsigned int)v158,
                                                    UserDataCount);
                                                  goto LABEL_289;
                                                }
LABEL_287:
                                                wil::details::in1diag3::Throw_Hr(
                                                  v156,
                                                  (void *)0x364,
                                                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                                  (const char *)(unsigned int)v155,
                                                  UserDataCount);
                                                goto LABEL_288;
                                              }
LABEL_286:
                                              wil::details::in1diag3::Throw_Hr(
                                                v153,
                                                (void *)0x362,
                                                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                                (const char *)(unsigned int)v152,
                                                UserDataCount);
                                              goto LABEL_287;
                                            }
LABEL_285:
                                            wil::details::in1diag3::Throw_Hr(
                                              v149,
                                              (void *)0x35D,
                                              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                              (const char *)(unsigned int)v148,
                                              UserDataCount);
                                            goto LABEL_286;
                                          }
LABEL_284:
                                          wil::details::in1diag3::Throw_Hr(
                                            v147,
                                            (void *)0x359,
                                            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                            (const char *)(unsigned int)v146,
                                            UserDataCount);
                                          goto LABEL_285;
                                        }
LABEL_283:
                                        Microsoft::WRL::Details::RaiseException(
                                          (Microsoft::WRL::Details *)(unsigned int)v143,
                                          v144,
                                          v145);
                                        goto LABEL_284;
                                      }
LABEL_282:
                                      wil::details::in1diag3::Throw_Hr(
                                        v127,
                                        (void *)0x152D,
                                        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
                                        (const char *)(unsigned int)v126,
                                        UserDataCount);
                                      goto LABEL_283;
                                    }
LABEL_281:
                                    wil::details::in1diag3::Throw_Hr(
                                      v119,
                                      (void *)0x32D,
                                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                      (const char *)(unsigned int)v118,
                                      UserDataCount);
                                    goto LABEL_282;
                                  }
LABEL_280:
                                  wil::details::in1diag3::Throw_Hr(
                                    v117,
                                    (void *)0x32C,
                                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                    (const char *)(unsigned int)v116,
                                    UserDataCount);
                                  goto LABEL_281;
                                }
LABEL_279:
                                wil::details::in1diag3::Throw_Hr(
                                  v115,
                                  (void *)0x32A,
                                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                  (const char *)(unsigned int)v114,
                                  UserDataCount);
                                goto LABEL_280;
                              }
                              v232 = 0;
                              v270 = WindowsGetStringRawBuffer(v99, 0LL);
                              v271 = v214;
                              v272 = v29;
                              v273 = v207;
                              v274 = v203 - 2;
                              v107 = (_QWORD *)Microsoft::WRL::Details::Make<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType>(
                                                 (unsigned int)&v245,
                                                 (unsigned int)&v274,
                                                 (unsigned int)&v273,
                                                 (unsigned int)&v272,
                                                 (__int64)&v206,
                                                 (__int64)&v205,
                                                 (__int64)&v271,
                                                 (__int64)&v211,
                                                 (__int64)&v270,
                                                 (__int64)&v232);
                              v109 = v107;
                              v202 = v95 | 0x200;
                              v110 = retaddr;
                              if ( v245 )
                              {
                                v111 = *v107;
                                *v109 = 0LL;
                                v58 = (struct IWindowWrapperInternal *)(v111 + 24);
                                if ( !v111 )
                                  v58 = 0LL;
                                v204 = v58;
                                if ( v245 )
                                {
                                  v245 = 0LL;
                                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release();
                                }
                                goto LABEL_134;
                              }
LABEL_278:
                              wil::details::in1diag3::_Throw_NullAlloc(
                                v110,
                                (void *)0x2F,
                                (unsigned int)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
                                v108);
                              goto LABEL_279;
                            }
LABEL_277:
                            wil::details::in1diag3::Throw_Hr(
                              v105,
                              (void *)0x307,
                              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                              (const char *)(unsigned int)v104,
                              UserDataCount);
                            goto LABEL_278;
                          }
LABEL_276:
                          wil::details::in1diag3::Throw_Hr(
                            v103,
                            (void *)0x303,
                            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                            (const char *)(unsigned int)v102,
                            UserDataCount);
                          goto LABEL_277;
                        }
                        v69 = (RTL_SRWLOCK *)((char *)v3 + 440);
                        AcquireSRWLockShared(v69);
                        v286 = v69;
                        v70 = v205;
                        v71 = 0LL;
                        v280 = 0LL;
                        v202 = v8 | 0x20;
                        v72 = (struct IWindowWrapperInternal **)v203[42].Ptr;
                        v73 = (AgileGitPtr *)v203[43].Ptr;
                        v223 = v73;
                        while ( v72 != (struct IWindowWrapperInternal **)v73 )
                        {
                          if ( (*(unsigned int (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)*v72 + 288LL))(*v72) == v70 )
                          {
                            v74 = *v72;
                            v71 = v74;
                            v280 = *v72;
                            if ( v74 )
                              (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v74 + 8LL))(v74);
                            break;
                          }
                          ++v72;
                          v73 = v223;
                        }
                        v8 = v219 | 0x10;
                        v202 = v219 | 0x10;
                        v58 = v71;
                        v204 = v71;
                        if ( v71 )
                        {
                          v75 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *, char *))(*(_QWORD *)v71 + 264LL))(
                                  v71,
                                  v292);
                          std::shared_ptr<ViewEventRegistration>::operator=(v224, v75);
                          if ( v293 )
                            std::_Ref_count_base::_Decref(v293);
                        }
                        if ( v69 )
                          ReleaseSRWLockShared(v69);
                        if ( !v71 )
                        {
                          v3 = (WindowEventDispatcher *)v203;
                          goto LABEL_119;
                        }
                        v230 = 0;
                        v262 = v210;
                        v212 = 0LL;
                        v76 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSelectTargetView,ViewEventArgsForSelectTargetView,Windows::Foundation::Collections::IPropertySet *,int>(
                                &v212,
                                (__int64 *)&v262,
                                &v230);
                        v77 = retaddr;
                        if ( v76 >= 0 )
                        {
                          v78 = (**(__int64 (__fastcall ***)(struct IWindowWrapperInternal *, GUID *, __int64 *))v71)(
                                  v71,
                                  &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
                                  &v261);
                          v79 = retaddr;
                          if ( v78 >= 0 )
                          {
                            v8 |= 0x40u;
                            v202 = v8;
                            v220 = 0LL;
                            v80 = (std::_Ref_count_base *)((char *)v224[0] + 24);
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v220);
                            if ( *(_QWORD *)v80 )
                            {
                              v81 = Microsoft::WRL::WeakRef::InternalResolve(
                                      v80,
                                      &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
                                      &v220);
                              v82 = v212;
                              v216 = v212;
                              if ( v81 >= 0 )
                              {
                                v83 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, volatile signed __int64 *))v220->lpVtbl->GetIids)(
                                        v220,
                                        v261,
                                        v212);
                                if ( v83 < 0 )
                                  wil::details::in1diag3::_Log_Hr(
                                    retaddr,
                                    (void *)0x2C5,
                                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                                    (const char *)(unsigned int)v83,
                                    UserDataCount);
                              }
                            }
                            else
                            {
                              v220 = 0LL;
                              v82 = v212;
                              v216 = v212;
                            }
                            v84 = v203;
                            v85 = v203 + 55;
                            AcquireSRWLockShared(v203 + 55);
                            v287 = v85;
                            wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v204);
                            *(_OWORD *)v283 = 0LL;
                            std::shared_ptr<ViewEventRegistration>::operator=(v224, v283);
                            if ( v283[1] )
                              std::_Ref_count_base::_Decref(v283[1]);
                            v87 = 1;
                            v58 = 0LL;
                            v244 = 0LL;
                            v88 = *((unsigned int *)v82 + 25);
                            if ( *((_BYTE *)v82 + 96) )
                            {
                              if ( (_DWORD)v88 )
                              {
                                CachedView = WindowEventDispatcher::GetCachedView((__int64)&v84[-2], v263, v88);
                                v58 = (struct IWindowWrapperInternal *)*CachedView;
                                *CachedView = 0LL;
                                v244 = (__int64)v58;
                                wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v263);
                                v89 = v58;
                                v90 = (__int64)v58;
                              }
                              else
                              {
                                v87 = 0;
                                v89 = 0LL;
                                v90 = 0LL;
                              }
                            }
                            else
                            {
                              v89 = 0LL;
                              v90 = 0LL;
                            }
                            if ( v89 )
                            {
                              v3 = (WindowEventDispatcher *)v203;
                            }
                            else
                            {
                              v92 = v87 == 0;
                              v3 = (WindowEventDispatcher *)v203;
                              if ( !v92 )
                              {
                                WindowEventDispatcher::GetCachedView((__int64)&v203[-2], (__int64 *)&v243, v205);
                                v8 |= 0x80u;
                                v202 = v8;
                                v58 = v243;
                                v90 = (__int64)v243;
                                v243 = 0LL;
                                v244 = v90;
                                wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v243);
                              }
                            }
                            v93 = v204;
                            v204 = v58;
                            if ( v90 )
                              (*(void (__fastcall **)(struct IWindowWrapperInternal *, __int64, __int64))(*(_QWORD *)v58 + 8LL))(
                                v58,
                                v86,
                                v88);
                            if ( v93 )
                              (*(void (__fastcall **)(struct IWindowWrapperInternal *, __int64, __int64))(*(_QWORD *)v93 + 16LL))(
                                v93,
                                v86,
                                v88);
                            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v244);
                            if ( v3 != (WindowEventDispatcher *)-440LL )
                              ReleaseSRWLockShared((PSRWLOCK)v3 + 55);
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v220);
                            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v261);
                            goto LABEL_119;
                          }
LABEL_275:
                          wil::details::in1diag3::Throw_Hr(
                            v79,
                            (void *)0x152D,
                            (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
                            (const char *)(unsigned int)v78,
                            UserDataCount);
                          goto LABEL_276;
                        }
LABEL_274:
                        wil::details::in1diag3::Throw_Hr(
                          v77,
                          (void *)0x2BF,
                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                          (const char *)(unsigned int)v76,
                          UserDataCount);
                        goto LABEL_275;
                      }
LABEL_273:
                      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v62, v63, v64);
                      goto LABEL_274;
                    }
LABEL_272:
                    wil::details::in1diag3::Throw_Hr(
                      v57,
                      (void *)0x2A9,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                      (const char *)(unsigned int)v55,
                      UserDataCount);
                    goto LABEL_273;
                  }
                  v225 = 0LL;
                  v47 = *v242;
                  v225 = 0LL;
                  v48 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v47 + 112))(v242, &v225);
                  v49 = retaddr;
                  if ( v48 >= 0 )
                  {
                    v50 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v225 + 48LL))(v225, &v229);
                    v51 = retaddr;
                    if ( v50 >= 0 )
                    {
                      AcquireSRWLockShared((PSRWLOCK)v3 + 55);
                      v291 = (char *)v3 + 440;
                      WindowEventDispatcher::GetCachedView((__int64)v3 - 16, &v260, v229);
                      v8 = 8;
                      v202 = 8;
                      if ( v260 )
                      {
                        (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v260 + 256LL))(v260);
                        v52 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v325, &sourceString);
                        v53 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v208,
                                *(HSTRING *)(v52 + 24));
                        if ( v53 < 0 )
                          wil::details::in1diag3::_Log_Hr(
                            retaddr,
                            (void *)0x2A3,
                            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                            (const char *)(unsigned int)v53,
                            UserDataCount);
                      }
                      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v260);
                      if ( v3 != (WindowEventDispatcher *)-440LL )
                        ReleaseSRWLockShared((PSRWLOCK)v3 + 55);
                      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v225);
                      v46 = v242;
                      v2 = v209;
                      goto LABEL_66;
                    }
LABEL_271:
                    wil::details::in1diag3::Throw_Hr(
                      v51,
                      (void *)0x29A,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                      (const char *)(unsigned int)v50,
                      UserDataCount);
                    goto LABEL_272;
                  }
LABEL_270:
                  wil::details::in1diag3::Throw_Hr(
                    v49,
                    (void *)0x297,
                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                    (const char *)(unsigned int)v48,
                    UserDataCount);
                  goto LABEL_271;
                }
LABEL_269:
                wil::details::in1diag3::Throw_Hr(
                  v45,
                  (void *)0x293,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v44,
                  UserDataCount);
                goto LABEL_270;
              }
LABEL_268:
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39, v40, v41);
              goto LABEL_269;
            }
LABEL_267:
            wil::details::in1diag3::Throw_Hr(
              v34,
              (void *)0x287,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v33,
              UserDataCount);
            goto LABEL_268;
          }
LABEL_266:
          wil::details::in1diag3::Throw_Hr(
            v31,
            (void *)0x284,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v30,
            UserDataCount);
          goto LABEL_267;
        }
LABEL_265:
        wil::details::in1diag3::Throw_Hr(
          v27,
          (void *)0x18B,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
          (const char *)(unsigned int)v26,
          UserDataCount);
        goto LABEL_266;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x17E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v23,
      UserDataCount);
    goto LABEL_265;
  }
  catch ( ... )
  {
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, __int64))(*(_QWORD *)v258 + 112LL))(
      v258,
      2150039857LL);
  }
LABEL_307:
  if ( v222 )
    (*(void (__fastcall **)(__int64 *))(*v222 + 16))(v222);
LABEL_232:
  v298 = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  v190 = (volatile signed __int32 *)v316;
  if ( !v316 )
    goto LABEL_240;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v298,
    &SRWLock);
  v190 = (volatile signed __int32 *)v316;
  if ( v316 && *(_DWORD *)v316 == 1 )
  {
    v191 = 1;
  }
  else
  {
    v191 = 0;
    wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v316);
    v190 = (volatile signed __int32 *)v316;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v190 = (volatile signed __int32 *)v316;
  }
  if ( v191 )
  {
LABEL_240:
    if ( *v303 == 1 )
    {
      v192 = v303[21];
      v235 = v192;
      v193 = 2147942974LL;
      if ( v192 < 0 )
        v193 = (unsigned int)v192;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v303,
        v193,
        &v235);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(&v298);
      v190 = (volatile signed __int32 *)v316;
    }
  }
  if ( v190 )
  {
    if ( _InterlockedExchangeAdd(v190, 0xFFFFFFFF) == 1 )
    {
      v194 = v316;
      if ( v316 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v316 + 2);
        operator delete(v194, (const struct std::nothrow_t *)0x100);
      }
    }
    v316 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v195 = GetProcessHeap();
      HeapFree(v195, 0, lpMem);
    }
    lpMem = 0LL;
    v314 = 0LL;
  }
  if ( v310 )
  {
    v196 = GetProcessHeap();
    HeapFree(v196, 0, v309);
    v310 = 0;
  }
  v309 = 0LL;
  if ( v304 == 1 )
  {
    v304 = 2;
    v251 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v236, &v251) && v236 )
    {
      v284 = &`ViewManagerInteropLogging::Instance'::`2'::wrapper;
      v251 = qword_180599EB0;
      qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      v285 = 0;
      wil::details::static_lazy<ViewManagerInteropLogging>::Completer::~Completer(&v284);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v251 + 1), v306);
  }
  v304 = 3;
  if ( v301 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v299);
  return 0LL;
}
