/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B51E0
 * Callers:
 *     ??$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppUsageTracker@@@12@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x1800B4278 (--$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@.c)
 *     ??1?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B4A40 (--1-$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CreateAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$com_ptr_t@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@1234@W4ViewTrackingOption@1234@@Z @ 0x1800B4BA8 (-CreateAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$com_ptr_t@UIAppUsageTrack.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800E4020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800E4020.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800E4030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800E4030.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 52), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 96LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
