/*
 * XREFs of ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180013B04 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18001A034 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Z @ 0x18001C8AC (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Found.c)
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18001E254 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x18001EB04 (--$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationMode.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180020654 (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800219DC (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x180021C44 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@P.c)
 *     ??$Make@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@25@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@@12@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@Internal@Windows@@$$QEAUpermission@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@7Collections@Foundation@8@@Z @ 0x180021E20 (--$Make@V-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisp.c)
 *     ?GetView@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@@Z @ 0x1800220E0 (-GetView@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisp.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022B7C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationReq.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180025ED4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x180025F14 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180027DE0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800282B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x180028338 (--$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18003DD54 (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shel.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052250 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?ReportStopActivity@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18005B424 (-ReportStopActivity@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Para.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800615D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800615D0.c)
 *     ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x1800641D0 (-InsertAtInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$IVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006E920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$I.c)
 *     ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18006FB14 (--1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FDA8 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180070208 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180071724 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??0AgileGitPtr@@QEAA@AEBV0@@Z @ 0x18007CEDC (--0AgileGitPtr@@QEAA@AEBV0@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180080FC0 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x180090E98 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800DD45C (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800F12D4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800FA5BC (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ??$?0$0CA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CA@$$CBG@Z @ 0x180106AF4 (--$-0$0CA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CA@$$CBG@Z.c)
 *     ??1Completer@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAA@XZ @ 0x1801511CC (--1Completer@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAA@XZ.c)
 *     ?SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@E@Z @ 0x180218218 (-SetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     ??$?4VLegacyWindowWrapper@@X@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@@Z @ 0x180221424 (--$-4VLegacyWindowWrapper@@X@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wi.c)
 *     ??$MakeOrThrow@VLegacyWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@wil@@YA?AV?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x180222834 (--$MakeOrThrow@VLegacyWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@Window_ea_180222834.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022AEE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_18022AEE0.c)
 */

// Hidden C++ exception states: #wind=44 #try_helpers=2
__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *a2)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v2; // rdi
  WindowEventDispatcher *v3; // r14
  int *v4; // rbx
  __int64 v5; // rbx
  int *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // rbx
  DWORD v9; // edi
  signed __int64 *v10; // rbx
  signed __int64 v11; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v13; // rax
  signed __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  int v25; // eax
  int (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // r15
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  wil::details::in1diag3 *v32; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v33; // rcx
  __int64 v34; // rax
  bool v35; // al
  unsigned int v36; // r13d
  int v37; // eax
  wil::details::in1diag3 *v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  wil::details::in1diag3 *v47; // rcx
  struct IWindowWrapperInternal *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r8
  int v51; // eax
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v52; // rdx
  unsigned __int8 v53; // r8
  char v54; // cl
  RTL_SRWLOCK *v55; // r14
  int v56; // esi
  struct IWindowWrapperInternal *v57; // rdi
  struct IWindowWrapperInternal **Ptr; // r13
  AgileGitPtr *v59; // rax
  struct IWindowWrapperInternal *v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  wil::details::in1diag3 *v63; // rcx
  int v64; // eax
  wil::details::in1diag3 *v65; // rcx
  int v66; // eax
  __int64 v67; // rdi
  int v68; // eax
  RTL_SRWLOCK *v69; // rbx
  __int64 v70; // rdx
  char v71; // r14
  __int64 v72; // r8
  struct IWindowWrapperInternal *v73; // rsi
  __int64 v74; // rdi
  __int64 *CachedView; // rax
  bool v76; // zf
  struct IWindowWrapperInternal *v77; // rsi
  int v78; // eax
  RTL_SRWLOCK *v79; // r14
  __int64 v80; // rbx
  __int64 v81; // r8
  HSTRING v82; // rsi
  bool v83; // r14
  int v84; // eax
  wil::details::in1diag3 *v85; // rcx
  int v86; // eax
  wil::details::in1diag3 *v87; // rcx
  RTL_SRWLOCK *v88; // rbx
  __int64 v89; // rax
  __int64 *v90; // rax
  const char *v91; // r9
  __int64 *v92; // rdx
  wil::details::in1diag3 *v93; // rcx
  __int64 v94; // rax
  char v95; // di
  unsigned int v96; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v97; // r13
  int v98; // eax
  wil::details::in1diag3 *v99; // rcx
  int v100; // eax
  wil::details::in1diag3 *v101; // rcx
  int v102; // eax
  wil::details::in1diag3 *v103; // rcx
  __int64 v104; // rax
  const WCHAR *v105; // rsi
  const WCHAR *v106; // rax
  __int64 v107; // rdi
  _QWORD *EventRegistration; // rax
  __int64 v109; // rax
  int v110; // eax
  wil::details::in1diag3 *v111; // rcx
  __int64 v112; // rax
  std::_Ref_count_base *v113; // r14
  AgileGitPtr *v114; // rax
  AgileGitPtr *v115; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v116; // r13
  int v117; // eax
  __int64 v118; // rdi
  ConnectedStandbyHelper *v119; // rcx
  __int64 v120; // rdx
  int v121; // eax
  wil::details::in1diag3 *v122; // rcx
  int v123; // eax
  wil::details::in1diag3 *v124; // rcx
  int v125; // eax
  wil::details::in1diag3 *v126; // rcx
  void *v127; // r14
  int v128; // eax
  wil::details::in1diag3 *v129; // rcx
  int v130; // eax
  wil::details::in1diag3 *v131; // rcx
  unsigned int v132; // esi
  __int64 v133; // rdi
  __int64 v134; // r9
  __int64 v135; // rcx
  int v136; // r13d
  unsigned int v137; // eax
  wil::details::in1diag3 *v138; // rcx
  int v139; // eax
  wil::details::in1diag3 *v140; // rcx
  int View; // eax
  wil::details::in1diag3 *v142; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v143; // r13
  __int64 v144; // rsi
  int v145; // eax
  wil::details::in1diag3 *v146; // rcx
  int v147; // eax
  wil::details::in1diag3 *v148; // rcx
  int v149; // eax
  wil::details::in1diag3 *v150; // rcx
  int v151; // eax
  wil::details::in1diag3 *v152; // rcx
  HRESULT v153; // eax
  int v154; // edx
  __int64 v155; // r8
  int v156; // eax
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // rdx
  int v160; // eax
  wil::details::in1diag3 *v161; // rcx
  int v162; // eax
  volatile signed __int32 *v163; // rdx
  char v164; // bl
  int v165; // eax
  __int64 v166; // rdx
  void *v167; // rdi
  HANDLE v168; // rax
  HANDLE v169; // rax
  int UserDataCount; // [rsp+20h] [rbp-5C8h]
  char v171; // [rsp+50h] [rbp-598h] BYREF
  char v172; // [rsp+51h] [rbp-597h] BYREF
  char v173; // [rsp+52h] [rbp-596h]
  unsigned __int8 v174; // [rsp+53h] [rbp-595h] BYREF
  char v175[4]; // [rsp+54h] [rbp-594h] BYREF
  int v176; // [rsp+58h] [rbp-590h]
  RTL_SRWLOCK *v177; // [rsp+60h] [rbp-588h]
  struct IWindowWrapperInternal *v178; // [rsp+68h] [rbp-580h] BYREF
  int v179; // [rsp+70h] [rbp-578h] BYREF
  int v180; // [rsp+74h] [rbp-574h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v181; // [rsp+78h] [rbp-570h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v182; // [rsp+80h] [rbp-568h]
  struct Windows::Foundation::Collections::IPropertySet *v183; // [rsp+88h] [rbp-560h] BYREF
  int v184; // [rsp+90h] [rbp-558h] BYREF
  __int64 v185; // [rsp+98h] [rbp-550h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-548h] BYREF
  __int64 v187; // [rsp+A8h] [rbp-540h] BYREF
  PSRWLOCK SRWLock; // [rsp+B0h] [rbp-538h]
  __int64 v189; // [rsp+B8h] [rbp-530h]
  unsigned int v190; // [rsp+C0h] [rbp-528h] BYREF
  unsigned int v191; // [rsp+C4h] [rbp-524h] BYREF
  __int64 v192; // [rsp+C8h] [rbp-520h] BYREF
  __int64 v193; // [rsp+D0h] [rbp-518h] BYREF
  AgileGitPtr *v194; // [rsp+D8h] [rbp-510h]
  std::_Ref_count_base *v195[2]; // [rsp+E0h] [rbp-508h] BYREF
  void *v196; // [rsp+F0h] [rbp-4F8h] BYREF
  void *v197; // [rsp+F8h] [rbp-4F0h] BYREF
  __int64 v198; // [rsp+100h] [rbp-4E8h] BYREF
  __int64 v199; // [rsp+108h] [rbp-4E0h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v200; // [rsp+110h] [rbp-4D8h] BYREF
  int v201; // [rsp+118h] [rbp-4D0h]
  int v202; // [rsp+11Ch] [rbp-4CCh] BYREF
  int v203; // [rsp+120h] [rbp-4C8h] BYREF
  int v204; // [rsp+124h] [rbp-4C4h] BYREF
  int v205; // [rsp+128h] [rbp-4C0h] BYREF
  unsigned int v206; // [rsp+12Ch] [rbp-4BCh] BYREF
  int v207; // [rsp+130h] [rbp-4B8h] BYREF
  int v208; // [rsp+138h] [rbp-4B0h] BYREF
  WINBOOL v209; // [rsp+13Ch] [rbp-4ACh] BYREF
  DWORD CurrentThreadId; // [rsp+140h] [rbp-4A8h] BYREF
  LPVOID Context; // [rsp+148h] [rbp-4A0h] BYREF
  LPVOID v212; // [rsp+150h] [rbp-498h] BYREF
  __int64 v213; // [rsp+158h] [rbp-490h] BYREF
  int (__fastcall ***v214)(_QWORD, GUID *, __int64 *); // [rsp+160h] [rbp-488h] BYREF
  __int64 v215; // [rsp+168h] [rbp-480h] BYREF
  __int64 v216; // [rsp+170h] [rbp-478h] BYREF
  struct IWindowWrapperInternal *v217; // [rsp+178h] [rbp-470h] BYREF
  __int64 v218; // [rsp+180h] [rbp-468h] BYREF
  __int64 v219; // [rsp+188h] [rbp-460h] BYREF
  void *v220; // [rsp+190h] [rbp-458h] BYREF
  int (__fastcall ***v221)(_QWORD, GUID *, _QWORD *); // [rsp+198h] [rbp-450h]
  void *v222; // [rsp+1A0h] [rbp-448h] BYREF
  __int64 v223; // [rsp+1A8h] [rbp-440h] BYREF
  __int64 v224; // [rsp+1B0h] [rbp-438h] BYREF
  __int64 v225; // [rsp+1B8h] [rbp-430h] BYREF
  LPVOID v226; // [rsp+1C0h] [rbp-428h] BYREF
  WINBOOL fPending; // [rsp+1C8h] [rbp-420h] BYREF
  WINBOOL v228; // [rsp+1CCh] [rbp-41Ch] BYREF
  __int64 v229; // [rsp+1D0h] [rbp-418h] BYREF
  struct IWindowWrapperInternal *v230; // [rsp+1D8h] [rbp-410h] BYREF
  _QWORD v231[2]; // [rsp+1E0h] [rbp-408h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v232; // [rsp+1F0h] [rbp-3F8h] BYREF
  __int64 v233; // [rsp+1F8h] [rbp-3F0h] BYREF
  __int64 v234; // [rsp+200h] [rbp-3E8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v235; // [rsp+208h] [rbp-3E0h] BYREF
  __int64 v236[2]; // [rsp+210h] [rbp-3D8h] BYREF
  HSTRING v237; // [rsp+220h] [rbp-3C8h]
  PCWSTR v238; // [rsp+228h] [rbp-3C0h] BYREF
  __int64 v239; // [rsp+230h] [rbp-3B8h] BYREF
  int (__fastcall ***v240)(_QWORD, GUID *, _QWORD *); // [rsp+238h] [rbp-3B0h] BYREF
  __int64 v241; // [rsp+240h] [rbp-3A8h] BYREF
  RTL_SRWLOCK *v242; // [rsp+248h] [rbp-3A0h] BYREF
  PCWSTR StringRawBuffer; // [rsp+250h] [rbp-398h] BYREF
  __int64 v244; // [rsp+258h] [rbp-390h] BYREF
  int (__fastcall ***v245)(_QWORD, GUID *, _QWORD *); // [rsp+260h] [rbp-388h] BYREF
  __int64 v246; // [rsp+268h] [rbp-380h] BYREF
  RTL_SRWLOCK *v247; // [rsp+270h] [rbp-378h] BYREF
  char v248[8]; // [rsp+278h] [rbp-370h] BYREF
  char v249[8]; // [rsp+280h] [rbp-368h] BYREF
  _QWORD v250[3]; // [rsp+288h] [rbp-360h] BYREF
  __int64 v251; // [rsp+2A0h] [rbp-348h]
  PSRWLOCK v252; // [rsp+2A8h] [rbp-340h] BYREF
  struct IWindowWrapperInternal *v253; // [rsp+2B0h] [rbp-338h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+2B8h] [rbp-330h] BYREF
  __int128 v255; // [rsp+2D0h] [rbp-318h] BYREF
  std::_Ref_count_base *v256[2]; // [rsp+2E0h] [rbp-308h] BYREF
  union _RTL_RUN_ONCE *v257; // [rsp+2F0h] [rbp-2F8h] BYREF
  int v258; // [rsp+2F8h] [rbp-2F0h]
  RTL_SRWLOCK *v259; // [rsp+300h] [rbp-2E8h]
  RTL_SRWLOCK *v260; // [rsp+308h] [rbp-2E0h]
  __int64 v261; // [rsp+310h] [rbp-2D8h]
  char *v262; // [rsp+318h] [rbp-2D0h]
  RTL_SRWLOCK *v263; // [rsp+320h] [rbp-2C8h]
  char v264[8]; // [rsp+328h] [rbp-2C0h] BYREF
  std::_Ref_count_base *v265; // [rsp+330h] [rbp-2B8h]
  __int64 v266; // [rsp+338h] [rbp-2B0h] BYREF
  std::_Ref_count_base *v267; // [rsp+340h] [rbp-2A8h]
  char v268[8]; // [rsp+348h] [rbp-2A0h] BYREF
  std::_Ref_count_base *v269; // [rsp+350h] [rbp-298h]
  void **v270; // [rsp+360h] [rbp-288h] BYREF
  _QWORD v271[2]; // [rsp+368h] [rbp-280h] BYREF
  __int64 v272; // [rsp+378h] [rbp-270h]
  DWORD v273; // [rsp+380h] [rbp-268h]
  int *v274; // [rsp+388h] [rbp-260h]
  int *v275; // [rsp+390h] [rbp-258h]
  int v276; // [rsp+398h] [rbp-250h] BYREF
  char v277; // [rsp+39Ch] [rbp-24Ch]
  char v278[32]; // [rsp+3A0h] [rbp-248h] BYREF
  int v279; // [rsp+3C0h] [rbp-228h] BYREF
  const char *v280; // [rsp+3C8h] [rbp-220h]
  LPVOID v281; // [rsp+3D0h] [rbp-218h]
  char v282; // [rsp+3D8h] [rbp-210h]
  __int64 v283; // [rsp+3E0h] [rbp-208h]
  __int64 v284; // [rsp+3E8h] [rbp-200h] BYREF
  LPVOID lpMem; // [rsp+478h] [rbp-170h]
  __int64 v286; // [rsp+480h] [rbp-168h]
  __int64 v287; // [rsp+488h] [rbp-160h]
  void *v288; // [rsp+490h] [rbp-158h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+4A0h] [rbp-148h] BYREF
  HSTRING v290; // [rsp+4B8h] [rbp-130h] BYREF
  char v291[32]; // [rsp+4C0h] [rbp-128h] BYREF
  char v292[32]; // [rsp+4E0h] [rbp-108h] BYREF
  char v293[32]; // [rsp+500h] [rbp-E8h] BYREF
  char v294[32]; // [rsp+520h] [rbp-C8h] BYREF
  char v295[32]; // [rsp+540h] [rbp-A8h] BYREF
  char v296[32]; // [rsp+560h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+580h] [rbp-68h] BYREF
  void *v298; // [rsp+590h] [rbp-58h]
  int v299; // [rsp+598h] [rbp-50h]
  int v300; // [rsp+59Ch] [rbp-4Ch]
  DWORD *p_CurrentThreadId; // [rsp+5A0h] [rbp-48h]
  __int64 v302; // [rsp+5A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+0h]

  v261 = -2LL;
  v2 = a2;
  v182 = a2;
  v3 = this;
  v177 = (RTL_SRWLOCK *)this;
  v250[2] = this;
  v231[1] = a2;
  v176 = 0;
  v271[0] = 0LL;
  v271[1] = &v270;
  v272 = 0LL;
  v273 = 0;
  v274 = &v279;
  v275 = &v276;
  v276 = 0;
  v277 = 0;
  v282 = 0;
  v279 = 0;
  v280 = "WindowEventDispatcher_AppViewActivationRequested";
  v281 = 0LL;
  v283 = 1LL;
  lpMem = 0LL;
  memset_0(&v284, 0, 0x90uLL);
  v286 = 0LL;
  v287 = 0LL;
  v288 = 0LL;
  v270 = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  v4 = v275;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v4 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 2));
  *v4 = 1;
  v212 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v228, &v212) && v228 )
  {
    v212 = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  v5 = *((_QWORD *)v212 + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v302 = 4LL;
    v6 = v275;
    if ( !*((_BYTE *)v275 + 4) || _TlgGuidIsZero((const struct _GUID *)(v275 + 6)) )
      v7 = 0LL;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045C377 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v298 = &unk_18045C382;
    v299 = 76;
    v300 = 1;
    EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, (LPCGUID)(v6 + 2), v7, 3u, &UserData);
  }
  if ( !v273 )
  {
    v8 = wil::details::g_pThreadFailureCallbacks;
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      v9 = GetCurrentThreadId();
      v10 = (signed __int64 *)(v8 + 8 * (v9 % 0xAuLL));
      v11 = *v10;
      if ( *v10 )
      {
        while ( *(_DWORD *)(v11 + 8) != v9 )
        {
          v11 = *(_QWORD *)(v11 + 16);
          if ( !v11 )
            goto LABEL_20;
        }
        goto LABEL_23;
      }
LABEL_20:
      ProcessHeap = GetProcessHeap();
      v13 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
      v11 = (signed __int64)v13;
      if ( v13 )
      {
        *(_QWORD *)v13 = 0LL;
        v13[2] = v9;
        *((_QWORD *)v13 + 2) = 0LL;
        _m_prefetchw(v10);
        do
        {
          v14 = *v10;
          *(_QWORD *)(v11 + 16) = *v10;
        }
        while ( v14 != _InterlockedCompareExchange64(v10, v11, v14) );
LABEL_23:
        v2 = v182;
        goto LABEL_26;
      }
      v2 = v182;
    }
    v11 = 0LL;
LABEL_26:
    v271[0] = v11;
    if ( v11 )
    {
      v272 = *(_QWORD *)v11;
      *(_QWORD *)v11 = v271;
      v273 = GetCurrentThreadId();
    }
  }
  v15 = *(_QWORD *)v2;
  if ( !*((_BYTE *)v3 + 472) )
  {
    v162 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, __int64))(v15 + 112))(
             v2,
             2150039860LL);
    if ( v162 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x375,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v162,
        UserDataCount);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v270, 2150039860LL);
    goto LABEL_206;
  }
  v193 = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *))v15)(
          v2,
          &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
          &v193);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      UserDataCount);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v193);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::~WindowEventDispatcher_AppViewActivationRequested((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)&v270);
    return v17;
  }
  v185 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v193 + 48LL))(v193, &v185);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x258,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v19,
      UserDataCount);
    goto LABEL_238;
  }
  v20 = v185;
  v221 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v185 + 56LL))(v185, &v180);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_238:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x17E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v21,
      UserDataCount);
    goto LABEL_239;
  }
  v201 = v180;
  v171 = 0;
  v214 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v20 + 64LL))(
          v20,
          &v214);
  v24 = retaddr;
  if ( v23 < 0 )
  {
LABEL_239:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x18B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v23,
      UserDataCount);
LABEL_240:
    wil::details::in1diag3::Throw_Hr(
      v28,
      (void *)0x25F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v27,
      UserDataCount);
    goto LABEL_241;
  }
  if ( v201 == 3 )
  {
    v213 = 0LL;
    if ( (**v214)(v214, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, &v213) >= 0 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v213 + 232LL))(v213, &v171);
      if ( v25 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x195,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
          (const char *)(unsigned int)v25,
          UserDataCount);
    }
    if ( v213 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v213 + 16LL))(v213);
  }
  v26 = v214;
  v221 = v214;
  if ( v171 )
    goto LABEL_197;
  v27 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v185 + 48LL))(v185, &v179);
  v28 = retaddr;
  if ( v27 < 0 )
    goto LABEL_240;
  v181 = 0LL;
  v29 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v2 + 64LL))(
          v2,
          &v181);
  v32 = retaddr;
  if ( v29 < 0 )
  {
LABEL_241:
    wil::details::in1diag3::Throw_Hr(
      v32,
      (void *)0x262,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v29,
      UserDataCount);
    goto LABEL_242;
  }
  v33 = v181;
  v183 = v181;
  if ( v181 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v181 + 8LL))(v181);
  v190 = 0;
  wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::ReportUsageToService(
    (__int64)v33,
    v30,
    v31);
  v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v291, off_1803CCEA8);
  v176 = 1;
  v35 = (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v183,
               *(HSTRING *)(v34 + 24),
               &v190) < 0
     || !v190;
  v36 = 0;
  v176 = 0;
  if ( v35 )
  {
    v216 = 0LL;
    v37 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, __int64 *))(*(_QWORD *)v2 + 56LL))(
            v2,
            &v216);
    v38 = retaddr;
    if ( v37 >= 0 )
    {
      v39 = v216;
      if ( !v216 )
      {
LABEL_60:
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        goto LABEL_62;
      }
      v215 = 0LL;
      v40 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v216 + 112LL))(v216, &v215);
      v41 = retaddr;
      if ( v40 >= 0 )
      {
        v42 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v215 + 48LL))(v215, &v202);
        v43 = retaddr;
        if ( v42 >= 0 )
        {
          AcquireSRWLockShared((PSRWLOCK)v3 + 56);
          v262 = (char *)v3 + 448;
          WindowEventDispatcher::GetCachedView((__int64)v3 - 16, &v233, v202);
          v36 = 8;
          v176 = 8;
          if ( v233 )
          {
            (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v233 + 240LL))(v233);
            v44 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v296, off_1803CCEA8);
            v45 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v183,
                    *(HSTRING *)(v44 + 24));
            if ( v45 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x27E,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                (const char *)(unsigned int)v45,
                UserDataCount);
          }
          wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v233);
          if ( v3 != (WindowEventDispatcher *)-448LL )
            ReleaseSRWLockShared((PSRWLOCK)v3 + 56);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v215);
          v39 = v216;
          v2 = v182;
          goto LABEL_60;
        }
LABEL_244:
        wil::details::in1diag3::Throw_Hr(
          v43,
          (void *)0x275,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v42,
          UserDataCount);
        goto LABEL_245;
      }
LABEL_243:
      wil::details::in1diag3::Throw_Hr(
        v41,
        (void *)0x272,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v40,
        UserDataCount);
      goto LABEL_244;
    }
LABEL_242:
    wil::details::in1diag3::Throw_Hr(
      v38,
      (void *)0x26E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v37,
      UserDataCount);
    goto LABEL_243;
  }
LABEL_62:
  LODWORD(SRWLock) = v36;
  v225 = 0LL;
  v46 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, __int64 *))(*(_QWORD *)v2 + 80LL))(
          v2,
          &v225);
  v47 = retaddr;
  if ( v46 < 0 )
  {
LABEL_245:
    wil::details::in1diag3::Throw_Hr(
      v47,
      (void *)0x284,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v46,
      UserDataCount);
    goto LABEL_246;
  }
  v173 = 0;
  v175[0] = 0;
  v48 = 0LL;
  v178 = 0LL;
  *(_OWORD *)v195 = 0LL;
  v189 = 0LL;
  v187 = 0LL;
  v49 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v292, &off_1803CCEB0);
  v51 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
          &v183,
          *(_QWORD *)(v49 + 24),
          v50,
          &v172);
  v54 = v172;
  if ( v51 < 0 )
    v54 = 1;
  v172 = v54;
  if ( v54 )
  {
    v55 = (RTL_SRWLOCK *)((char *)v3 + 448);
    AcquireSRWLockShared(v55);
    v263 = v55;
    v56 = v179;
    v57 = 0LL;
    v253 = 0LL;
    v176 = v36 | 0x20;
    Ptr = (struct IWindowWrapperInternal **)v177[43].Ptr;
    v59 = (AgileGitPtr *)v177[44].Ptr;
    v194 = v59;
    while ( Ptr != (struct IWindowWrapperInternal **)v59 )
    {
      if ( (*(unsigned int (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)*Ptr + 272LL))(*Ptr) == v56 )
      {
        v60 = *Ptr;
        v57 = v60;
        v253 = *Ptr;
        if ( v60 )
          (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v60 + 8LL))(v60);
        break;
      }
      ++Ptr;
      v59 = v194;
    }
    v36 = (unsigned int)SRWLock | 0x10;
    v176 = (unsigned int)SRWLock | 0x10;
    v48 = v57;
    v178 = v57;
    if ( v57 )
    {
      v61 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *, char *))(*(_QWORD *)v57 + 248LL))(v57, v264);
      std::shared_ptr<ViewEventRegistration>::operator=(v195, v61);
      if ( v265 )
        std::_Ref_count_base::_Decref(v265);
    }
    if ( v55 )
      ReleaseSRWLockShared(v55);
    if ( !v57 )
    {
      v3 = (WindowEventDispatcher *)v177;
      goto LABEL_105;
    }
    v203 = 0;
    v235 = v181;
    v187 = 0LL;
    v62 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSelectTargetView,ViewEventArgsForSelectTargetView,Windows::Foundation::Collections::IPropertySet * &,unsigned int &>(
            &v187,
            (__int64 *)&v235,
            &v203);
    v63 = retaddr;
    if ( v62 >= 0 )
    {
      v64 = (**(__int64 (__fastcall ***)(struct IWindowWrapperInternal *, GUID *, __int64 *))v57)(
              v57,
              &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
              &v234);
      v65 = retaddr;
      if ( v64 >= 0 )
      {
        v36 |= 0x40u;
        v176 = v36;
        v196 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v196);
        v66 = AgileGitPtr::CopyLocal(
                (std::_Ref_count_base *)((char *)v195[0] + 24),
                &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e,
                &v196);
        v67 = v187;
        v189 = v187;
        if ( v66 >= 0 )
        {
          v68 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v196 + 24LL))(v196, v234, v187);
          if ( v68 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2A0,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v68,
              UserDataCount);
        }
        v69 = v177 + 56;
        AcquireSRWLockShared(v177 + 56);
        v259 = v69;
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v178);
        *(_OWORD *)v256 = 0LL;
        std::shared_ptr<ViewEventRegistration>::operator=(v195, v256);
        if ( v256[1] )
          std::_Ref_count_base::_Decref(v256[1]);
        v71 = 1;
        v48 = 0LL;
        v218 = 0LL;
        v72 = *(unsigned int *)(v67 + 100);
        v73 = 0LL;
        v74 = 0LL;
        if ( *(_BYTE *)(v189 + 96) )
        {
          if ( (_DWORD)v72 )
          {
            CachedView = WindowEventDispatcher::GetCachedView((__int64)&v177[-2], v236, v72);
            v48 = (struct IWindowWrapperInternal *)*CachedView;
            *CachedView = 0LL;
            v218 = (__int64)v48;
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v236);
            v73 = v48;
            v74 = (__int64)v48;
          }
          else
          {
            v71 = 0;
          }
        }
        if ( v73 )
        {
          v3 = (WindowEventDispatcher *)v177;
        }
        else
        {
          v76 = v71 == 0;
          v3 = (WindowEventDispatcher *)v177;
          if ( !v76 )
          {
            WindowEventDispatcher::GetCachedView((__int64)&v177[-2], (__int64 *)&v217, v179);
            v36 |= 0x80u;
            v176 = v36;
            v48 = v217;
            v74 = (__int64)v217;
            v217 = 0LL;
            v218 = v74;
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v217);
          }
        }
        v77 = v178;
        v178 = v48;
        if ( v74 )
          (*(void (__fastcall **)(struct IWindowWrapperInternal *, __int64, __int64))(*(_QWORD *)v48 + 8LL))(
            v48,
            v70,
            v72);
        if ( v77 )
          (*(void (__fastcall **)(struct IWindowWrapperInternal *, __int64, __int64))(*(_QWORD *)v77 + 16LL))(
            v77,
            v70,
            v72);
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v218);
        if ( v3 != (WindowEventDispatcher *)-448LL )
          ReleaseSRWLockShared((PSRWLOCK)v3 + 56);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v196);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v234);
        goto LABEL_105;
      }
LABEL_247:
      wil::details::in1diag3::Throw_Hr(
        v65,
        (void *)0x16A8,
        (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v64,
        UserDataCount);
LABEL_248:
      wil::details::in1diag3::Throw_Hr(
        v85,
        (void *)0x2DE,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v84,
        UserDataCount);
LABEL_249:
      wil::details::in1diag3::Throw_Hr(
        v87,
        (void *)0x2E2,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v86,
        UserDataCount);
      goto LABEL_250;
    }
LABEL_246:
    wil::details::in1diag3::Throw_Hr(
      v63,
      (void *)0x29A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v62,
      UserDataCount);
    goto LABEL_247;
  }
  if ( v181 )
  {
    v78 = Windows::Internal::Shell::Desktop::ViewManagerInterop::SetAppActivationPolicy(
            (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v183,
            v52,
            v53);
    if ( v78 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2CE,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v78,
        UserDataCount);
  }
LABEL_105:
  v79 = (RTL_SRWLOCK *)((char *)v3 + 448);
  SRWLock = v79;
  AcquireSRWLockExclusive(v79);
  v260 = v79;
  if ( v48 )
  {
    v95 = 0;
    goto LABEL_125;
  }
  v237 = 0LL;
  v80 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v293, off_1803CCEA0) + 24);
  v236[1] = (__int64)L"Windows.Internal.ShellExperience.TopLevelApplication";
  string = 0LL;
  v176 = v36 | 0x100;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(&v183, v80, v81, &string) < 0 )
    Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string);
  v82 = string;
  string = 0LL;
  WindowsDeleteString(0LL);
  v237 = v82;
  v176 = v36;
  WindowsDeleteString(string);
  v83 = v180 == 2;
  v192 = 0LL;
  v84 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v185 + 72LL))(v185, &v192);
  v85 = retaddr;
  if ( v84 < 0 )
    goto LABEL_248;
  v184 = 0;
  if ( v192 )
  {
    v86 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v192 + 48LL))(v192, &v184);
    v87 = retaddr;
    if ( v86 < 0 )
      goto LABEL_249;
  }
  v88 = v177 - 2;
  if ( !v83 )
  {
    v205 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(v82, 0LL);
    v244 = v192;
    v245 = v26;
    v246 = v185;
    v247 = v88;
    v90 = Microsoft::WRL::Details::Make<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType>(
            &v219,
            &v247,
            &v246,
            &v245,
            &v180,
            &v179,
            &v244,
            &v184,
            &StringRawBuffer,
            &v205);
    v92 = v90;
    v176 = v36 | 0x200;
    v93 = retaddr;
    if ( v219 )
    {
      v94 = *v90;
      *v92 = 0LL;
      v48 = (struct IWindowWrapperInternal *)(v94 + 24);
      if ( !v94 )
        v48 = 0LL;
      v178 = v48;
      if ( v219 )
      {
        v219 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release();
      }
      goto LABEL_120;
    }
LABEL_250:
    wil::details::in1diag3::_Throw_NullAlloc(v93, (void *)0x38, (unsigned int)"internal\\sdk\\inc\\wil\\wrl.h", v91);
    goto LABEL_251;
  }
  v204 = 0;
  v238 = WindowsGetStringRawBuffer(v82, 0LL);
  v239 = v192;
  v240 = v26;
  v241 = v185;
  v242 = v88;
  v89 = wil::MakeOrThrow<LegacyWindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType>(
          (unsigned int)&v229,
          (unsigned int)&v242,
          (unsigned int)&v241,
          (unsigned int)&v240,
          (__int64)&v180,
          (__int64)&v179,
          (__int64)&v239,
          (__int64)&v184,
          (__int64)&v238,
          (__int64)&v204);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=<LegacyWindowWrapper,void>(&v178, v89);
  if ( v229 )
  {
    v229 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::Release();
  }
  v48 = v178;
LABEL_120:
  v95 = 1;
  v173 = 1;
  if ( v192 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v192 + 16LL))(v192);
  if ( v82 )
    WindowsDeleteString(v82);
  v79 = SRWLock;
LABEL_125:
  v96 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v48 + 272LL))(v48);
  v97 = v182;
  v98 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, _QWORD))(*(_QWORD *)v182 + 88LL))(
          v182,
          v96);
  v99 = retaddr;
  if ( v98 < 0 )
  {
LABEL_251:
    wil::details::in1diag3::Throw_Hr(
      v99,
      (void *)0x305,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v98,
      UserDataCount);
LABEL_252:
    wil::details::in1diag3::Throw_Hr(
      v101,
      (void *)0x307,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v100,
      UserDataCount);
    goto LABEL_253;
  }
  v100 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *, __int64))(*(_QWORD *)v48 + 136LL))(v48, v225);
  v101 = retaddr;
  if ( v100 < 0 )
    goto LABEL_252;
  v102 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *))(*(_QWORD *)v48 + 152LL))(
           v48,
           v97);
  v103 = retaddr;
  if ( v102 < 0 )
  {
LABEL_253:
    wil::details::in1diag3::Throw_Hr(
      v103,
      (void *)0x308,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v102,
      UserDataCount);
LABEL_254:
    wil::details::in1diag3::Throw_Hr(
      v111,
      (void *)0x16A8,
      (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v110,
      UserDataCount);
LABEL_255:
    wil::details::in1diag3::Throw_Hr(
      v122,
      (void *)0x334,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v121,
      UserDataCount);
    goto LABEL_256;
  }
  v104 = *(_QWORD *)v48;
  if ( v95 )
  {
    v105 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(v104 + 264))(v48);
    v106 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v48 + 256LL))(v48);
    v107 = (__int64)&v177[-2];
    EventRegistration = WindowEventDispatcher::GetEventRegistration((__int64)&v177[-2], &v266, v106, v105);
    std::shared_ptr<ViewEventRegistration>::operator=(v195, EventRegistration);
    if ( v267 )
      std::_Ref_count_base::_Decref(v267);
    v255 = 0LL;
    if ( v195[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v195[1] + 2);
      v26 = v221;
      v48 = v178;
      v189 = v187;
    }
    v255 = *(_OWORD *)v195;
    v230 = v48;
    (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v48 + 8LL))(v48);
    WindowEventDispatcher::CacheWindowWrapper(v107, &v230, &v255, 0LL);
    v95 = v173;
  }
  else
  {
    v109 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *, char *))(v104 + 248))(v48, v268);
    std::shared_ptr<ViewEventRegistration>::operator=(v195, v109);
    if ( v269 )
      std::_Ref_count_base::_Decref(v269);
  }
  if ( v79 )
    ReleaseSRWLockExclusive(v79);
  v110 = (**(__int64 (__fastcall ***)(struct IWindowWrapperInternal *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))v48)(
           v48,
           &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
           &v200);
  v111 = retaddr;
  if ( v110 < 0 )
    goto LABEL_254;
  v112 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (Microsoft::WRL::Wrappers::HStringReference *)v294,
           (const unsigned __int16 (*)[32])L"AAMShim.ActivateOptionsInternal");
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v183,
              *(HSTRING *)(v112 + 24),
              &v206) >= 0
    && (v206 & 0x200000) != 0 )
  {
    v113 = v195[0];
    v114 = AgileGitPtr::AgileGitPtr((AgileGitPtr *)v248, (std::_Ref_count_base *)((char *)v195[0] + 24));
    WindowEventDispatcher::EnsureDuplicateViewDestroyed(&v177[-2], v200, v114);
  }
  else
  {
    v113 = v195[0];
  }
  (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v48 + 344LL))(v48);
  if ( v95 )
  {
    v115 = AgileGitPtr::AgileGitPtr((AgileGitPtr *)v249, (std::_Ref_count_base *)((char *)v113 + 24));
    v194 = v115;
    v116 = v200;
    v232 = v181;
    v207 = 0;
    v198 = 0LL;
    if ( (int)Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgs,ViewEventArgs,enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &,Windows::Foundation::Collections::IPropertySet * &>(
                &v198,
                &v207,
                &v232) < 0 )
    {
      v118 = v198;
    }
    else
    {
      v197 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v197);
      v117 = AgileGitPtr::CopyLocal(v115, &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e, &v197);
      v118 = v198;
      if ( v117 >= 0
        && (*(int (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)v197 + 24LL))(
             v197,
             v116,
             v198) >= 0 )
      {
        v119 = (ConnectedStandbyHelper *)v177[41].Ptr;
        if ( v119 )
          ConnectedStandbyHelper::HandleViewCreated(v119, v116);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v197);
    }
    if ( v118 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v118);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v115);
    v97 = v182;
  }
  v250[0] = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v48 + 264LL))(v48);
  v120 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v295, v250) + 24);
  v121 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, __int64))(*(_QWORD *)v97 + 104LL))(
           v97,
           v120);
  v122 = retaddr;
  if ( v121 < 0 )
    goto LABEL_255;
  v250[1] = v181;
  v222 = 0LL;
  v123 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForNavigationRequest,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Foundation::Collections::IPropertySet *>(&v222);
  v124 = retaddr;
  if ( v123 < 0 )
  {
LABEL_256:
    wil::details::in1diag3::Throw_Hr(
      v124,
      (void *)0x338,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v123,
      UserDataCount);
    goto LABEL_257;
  }
  v220 = 0LL;
  v125 = AgileGitPtr::CopyLocal(
           (std::_Ref_count_base *)((char *)v113 + 24),
           &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e,
           &v220);
  v126 = retaddr;
  if ( v125 < 0 )
  {
LABEL_257:
    wil::details::in1diag3::Throw_Hr(
      v126,
      (void *)0x33D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v125,
      UserDataCount);
    goto LABEL_258;
  }
  v127 = v222;
  v128 = (*(__int64 (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, void *))(*(_QWORD *)v220 + 24LL))(
           v220,
           v200,
           v222);
  v129 = retaddr;
  if ( v128 < 0 )
  {
LABEL_258:
    wil::details::in1diag3::Throw_Hr(
      v129,
      (void *)0x33F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v128,
      UserDataCount);
LABEL_259:
    wil::details::in1diag3::Throw_Hr(
      v131,
      (void *)0x348,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v130,
      UserDataCount);
LABEL_260:
    wil::details::in1diag3::Throw_Hr(
      v138,
      (void *)0x34C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v137,
      UserDataCount);
    goto LABEL_261;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v220);
  v199 = 0LL;
  if ( (**(int (__fastcall ***)(void *, GUID *, __int64 *))v127)(
         v127,
         &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
         &v199) < 0 )
    goto LABEL_181;
  v191 = 0;
  v130 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v199 + 48LL))(v199, &v191);
  v131 = retaddr;
  if ( v130 < 0 )
    goto LABEL_259;
  v132 = v191;
  v133 = 0LL;
  v251 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate const &,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::permission>(&v223);
  v135 = v223;
  v136 = (v223 != 0) - 1;
  v137 = -2147024882;
  if ( v223 )
    v137 = 0;
  LODWORD(SRWLock) = v137;
  if ( v223 )
  {
    v133 = v223;
    v135 = 0LL;
    v223 = 0LL;
    v251 = v133;
  }
  if ( v135 )
  {
    v223 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v135 + 16LL))(v135);
    v137 = (unsigned int)SRWLock;
  }
  v138 = retaddr;
  if ( v136 == -1 )
    goto LABEL_260;
  LOBYTE(v134) = 1;
  v139 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
           v133,
           0LL,
           v132,
           v134);
  v140 = retaddr;
  if ( v139 < 0 )
  {
LABEL_261:
    wil::details::in1diag3::Throw_Hr(
      v140,
      (void *)0x34D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v139,
      UserDataCount);
    goto LABEL_262;
  }
  v231[0] = 0LL;
  View = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetView(
           v133,
           v231);
  v142 = retaddr;
  if ( View < 0 )
  {
LABEL_262:
    wil::details::in1diag3::Throw_Hr(
      v142,
      (void *)0x350,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)View,
      UserDataCount);
    goto LABEL_263;
  }
  v143 = v182;
  v144 = v231[0];
  v145 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, _QWORD))(*(_QWORD *)v182 + 72LL))(
           v182,
           v231[0]);
  v146 = retaddr;
  if ( v145 < 0 )
  {
LABEL_263:
    wil::details::in1diag3::Throw_Hr(
      v146,
      (void *)0x351,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v145,
      UserDataCount);
    goto LABEL_264;
  }
  v174 = 0;
  v147 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v199 + 64LL))(v199, &v174);
  v148 = retaddr;
  if ( v147 < 0 )
  {
LABEL_264:
    wil::details::in1diag3::Throw_Hr(
      v148,
      (void *)0x354,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v147,
      UserDataCount);
    goto LABEL_265;
  }
  v224 = 0LL;
  v149 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *, GUID *, __int64 *))v143)(
           v143,
           &GUID_266d6f6f_822f_4304_b3b6_9dc7fec054a5,
           &v224);
  v150 = retaddr;
  if ( v149 < 0 )
  {
LABEL_265:
    wil::details::in1diag3::Throw_Hr(
      v150,
      (void *)0x357,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v149,
      UserDataCount);
    goto LABEL_266;
  }
  v151 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v224 + 48LL))(v224, v174);
  v152 = retaddr;
  if ( v151 < 0 )
  {
LABEL_266:
    wil::details::in1diag3::Throw_Hr(
      v152,
      (void *)0x358,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v151,
      UserDataCount);
    goto LABEL_267;
  }
  if ( v224 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v224 + 16LL))(v224);
  if ( v144 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v144 + 16LL))(v144);
  if ( v133 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::Release(v133);
LABEL_181:
  v290 = 0LL;
  v153 = WindowsCreateStringReference(L"ApplicationMultiviewActivationPolicy", 0x24u, &hstringHeader, &v290);
  if ( v153 < 0 )
  {
LABEL_267:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v153, v154, v155);
    goto LABEL_268;
  }
  v156 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v183, v290, v155, v175);
  if ( v156 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
      (const char *)(unsigned int)v156,
      UserDataCount);
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v157, 3u, v158);
  if ( v175[0] )
    WindowEventDispatcher::QueuePendingActivation(v177 - 2, v48, v181, 1);
  (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v48 + 352LL))(v48);
  LOBYTE(v159) = 1;
  v160 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v193 + 72LL))(v193, v159);
  v161 = retaddr;
  if ( v160 < 0 )
  {
LABEL_268:
    wil::details::in1diag3::Throw_Hr(
      v161,
      (void *)0x367,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v160,
      UserDataCount);
    __debugbreak();
    JUMPOUT(0x1800259F4LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v199);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v127 + 16LL))(v127);
  if ( v200 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v200 + 16LL))(v200);
  if ( v189 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v189);
  if ( v195[1] )
    std::_Ref_count_base::_Decref(v195[1]);
  (*(void (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v225 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v225 + 16LL))(v225);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v183);
  if ( v181 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v181 + 16LL))(v181);
LABEL_197:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v270, 0LL);
  if ( v26 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v26)[2])(v26);
  if ( v185 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v185 + 16LL))(v185);
  if ( v193 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v193 + 16LL))(v193);
LABEL_206:
  v270 = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  v163 = (volatile signed __int32 *)v288;
  if ( !v288 )
    goto LABEL_214;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v270,
    &v252);
  v163 = (volatile signed __int32 *)v288;
  if ( v288 && *(_DWORD *)v288 == 1 )
  {
    v164 = 1;
  }
  else
  {
    v164 = 0;
    wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v288);
    v163 = (volatile signed __int32 *)v288;
  }
  if ( v252 )
  {
    ReleaseSRWLockExclusive(v252);
    v163 = (volatile signed __int32 *)v288;
  }
  if ( v164 )
  {
LABEL_214:
    if ( *v275 == 1 )
    {
      v165 = v275[21];
      v208 = v165;
      v166 = 2147942974LL;
      if ( v165 < 0 )
        v166 = (unsigned int)v165;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v275,
        v166,
        &v208);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(&v270);
      v163 = (volatile signed __int32 *)v288;
    }
  }
  if ( v163 )
  {
    if ( _InterlockedExchangeAdd(v163, 0xFFFFFFFF) == 1 )
    {
      v167 = v288;
      if ( v288 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v288 + 8);
        operator delete(v167, (const struct std::nothrow_t *)0x100);
      }
    }
    v288 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v168 = GetProcessHeap();
      HeapFree(v168, 0, lpMem);
    }
    lpMem = 0LL;
    v286 = 0LL;
  }
  if ( v282 )
  {
    v169 = GetProcessHeap();
    HeapFree(v169, 0, v281);
    v282 = 0;
  }
  v281 = 0LL;
  if ( v276 == 1 )
  {
    v276 = 2;
    v226 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v209, &v226) && v209 )
    {
      v257 = &`ViewManagerInteropLogging::Instance'::`2'::wrapper;
      v226 = &qword_18050FB08;
      qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
      qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      v258 = 0;
      wil::details::static_lazy<ViewManagerInteropLogging>::Completer::~Completer(&v257);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v226 + 1), v278);
  }
  v276 = 3;
  if ( v273 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v271);
  return 0LL;
}
