/*
 * XREFs of ??1?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B4A40
 * Callers:
 *     _Microsoft::WRL::Details::Make_AppUsageTracker_IServiceProvider___&_Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification___&_enum_Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption_&__::_1_::dtor$0 @ 0x1800B432B (_Microsoft--WRL--Details--Make_AppUsageTracker_IServiceProvider___-_Windows--Internal--FamilySaf.c)
 *     _Windows::Internal::FamilySafety::AppLimits::CreateAppUsageTracker_::_1_::dtor$2 @ 0x1800B4C39 (_Windows--Internal--FamilySafety--AppLimits--CreateAppUsageTracker_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B51E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppUsageTracker>::~ComPtr<AppUsageTracker>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
