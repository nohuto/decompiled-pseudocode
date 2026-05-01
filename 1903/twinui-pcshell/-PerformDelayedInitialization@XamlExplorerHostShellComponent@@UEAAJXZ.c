/*
 * XREFs of ?PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ @ 0x1802B2330
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A45B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800A45B0.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___ @ 0x1802B01CC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B265C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4Rep.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabWin32@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B272C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabWin32@@@wil@@CAX_NW4Report.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostShellComponent::PerformDelayedInitialization(XamlExplorerHostShellComponent *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // r8
  char *v4; // rdx
  __int64 v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v13; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsageToService(this);
  v4 = (char *)this - 48;
  v5 = (__int64)v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)v4 + 22);
    while ( 1 )
    {
      v2 = (unsigned __int64)v6 >> 63;
      if ( v6 < 0 )
        break;
      v2 = v6 + 1;
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 22, v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_7:
    v5 = (__int64)v4;
  }
  v13 = v4;
  v14 = v5;
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 176);
    while ( 1 )
    {
      v2 = (unsigned __int64)v8 >> 63;
      if ( v8 < 0 )
        break;
      v2 = v8 + 1;
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 176), v8 + 1, v8);
      if ( v9 == v8 )
        goto LABEL_14;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
LABEL_14:
    v5 = (__int64)v4;
  }
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___(
    v2,
    (__int64)v4,
    v3,
    &v13);
  v11 = v14;
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release(v14);
  wil::Feature<__WilFeatureTraits_Feature_XamlAltTabWin32>::ReportUsageToService(v11, v10);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release(v5);
  return 0LL;
}
