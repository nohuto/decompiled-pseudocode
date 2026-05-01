/*
 * XREFs of ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1802164C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD68 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800EB0F8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     _lambda_2042965200248d0a427160a096d62bcd_::operator() @ 0x180212210 (_lambda_2042965200248d0a427160a096d62bcd_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180214608 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart@.c)
 *     ?StartActivity@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180218490 (-StartActivity@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180218B00 (-StartActivity@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::PerformDelayedInitialization(RTL_SRWLOCK *this)
{
  char *i; // rdi
  __int64 v3; // rcx
  char *v4; // rcx
  __int64 v5; // rcx
  int v7; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v8; // [rsp+3Ch] [rbp-CCh]
  char *j; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v10[6]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v11[40]; // [rsp+78h] [rbp-90h] BYREF

  v10[3] = -2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"CloseUnRecoveredViews");
  v11[0] = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  ViewManagerInteropTraceLogging::CloseUnRecoveredViews::StartActivity((ViewManagerInteropTraceLogging::CloseUnRecoveredViews *)v11);
  for ( i = 0LL; i < this[36].Ptr; ++i )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this[35].Ptr + (_QWORD)i) + 800LL))(*((_QWORD *)this[35].Ptr
                                                                                       + (_QWORD)i));
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&this[35]);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, 0);
  v11[0] = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetCachedFeatureEnabledState(v3);
  v7 = 0;
  LOBYTE(v8) = 3;
  LODWORD(j) = 0;
  WORD2(j) = v8;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetFeaturePropertyCache'::`2'::data,
    10147494LL,
    (const struct FEATURE_LOGGED_TRAITS *)&j,
    1,
    3);
  AcquireSRWLockExclusive(this + 22);
  v10[4] = this + 22;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"RecoverComponentRelationships");
  v11[0] = &ViewManagerInteropTraceLogging::RecoverComponentRelationships::`vftable';
  ViewManagerInteropTraceLogging::RecoverComponentRelationships::StartActivity((ViewManagerInteropTraceLogging::RecoverComponentRelationships *)v11);
  v4 = 0LL;
  for ( j = 0LL; v4 < this[32].Ptr; j = v4 )
  {
    v5 = *((_QWORD *)this[31].Ptr + (_QWORD)v4);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 856LL))(v5);
    if ( v7 )
    {
      v10[0] = this - 15;
      v10[1] = &j;
      v10[2] = &v7;
      lambda_2042965200248d0a427160a096d62bcd_::operator()((__int64)v10);
    }
    v4 = j + 1;
  }
  LOBYTE(this[23].Ptr) = 1;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, 0);
  v11[0] = &ViewManagerInteropTraceLogging::RecoverComponentRelationships::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  if ( this != (RTL_SRWLOCK *)-176LL )
    ReleaseSRWLockExclusive(this + 22);
  return 0LL;
}
