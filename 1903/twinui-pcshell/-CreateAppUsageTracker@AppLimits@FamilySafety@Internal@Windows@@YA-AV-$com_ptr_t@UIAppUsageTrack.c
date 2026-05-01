/*
 * XREFs of ?CreateAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$com_ptr_t@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@1234@W4ViewTrackingOption@1234@@Z @ 0x1800A6278
 * Callers:
 *     ?SubscribeToServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A5150 (-SubscribeToServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUISe.c)
 * Callees:
 *     ??$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppUsageTracker@@@12@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x1800A5948 (--$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A68B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Windows::Internal::FamilySafety::AppLimits::CreateAppUsageTracker(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v4; // rax
  const char *v5; // r9
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v14; // [rsp+58h] [rbp+18h] BYREF
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF

  v15 = a3;
  v14 = a2;
  v12[1] = -2LL;
  v11 = 0;
  v10 = 0;
  v4 = Microsoft::WRL::Details::Make<AppUsageTracker,IServiceProvider * &,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification * &,enum Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption &>(
         v12,
         &v14,
         &v15,
         &v10);
  v6 = v4;
  v11 = 2;
  if ( !v12[0] )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x2F,
      (unsigned int)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  v7 = *v4;
  *v6 = 0LL;
  *a1 = v7;
  v8 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(v8);
  }
  return a1;
}
