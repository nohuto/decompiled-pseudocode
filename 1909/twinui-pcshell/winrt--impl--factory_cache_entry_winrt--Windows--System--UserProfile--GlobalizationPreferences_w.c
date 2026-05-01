/*
 * XREFs of winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852__&_ @ 0x1800C6414
 * Callers:
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800C7174 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18008E785 (WINRT_InterlockedPushEntrySList.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18009BCC0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ @ 0x18009FDF8 (-get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@winrt@@YA?AUIGlobalizationPreferencesStatics@UserProfile@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C6764 (--$get_activation_factory@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@w.c)
 *     ?HomeGeographicRegion@?$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800C77EC (-HomeGeographicRegion@-$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGl.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852____(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  bool v4; // di
  winrt::impl *v5; // rcx
  union _SLIST_HEADER *factory_cache; // rax
  winrt::impl **v7; // rcx
  winrt::impl *v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v11[2] = -2LL;
  v10 = a2;
  v11[3] = &qword_1805C1E28;
  _InterlockedIncrement64(&qword_1805C1E28);
  if ( winrt::impl::factory_storage<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::factory )
  {
    winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
      &winrt::impl::factory_storage<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::factory,
      a2);
    _InterlockedDecrement64(&qword_1805C1E28);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805C1E28);
    v11[0] = L"Windows.System.UserProfile.GlobalizationPreferences";
    v11[1] = 51LL;
    winrt::param::hstring::hstring(string, (__int64)v11);
    winrt::get_activation_factory<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>(&v9, string);
    v3 = 0LL;
    v10 = 0LL;
    if ( v9 )
    {
      (**(void (__fastcall ***)(winrt::impl *, void *, __int64 *))v9)(
        v9,
        &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value,
        &v10);
      v3 = v10;
    }
    v4 = v3 != 0;
    if ( v3 )
      winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(&v10);
    if ( v4 )
    {
      v11[4] = &qword_1805C1E28;
      _InterlockedIncrement64(&qword_1805C1E28);
      v5 = v9;
      if ( _InterlockedCompareExchange64(
             &winrt::impl::factory_storage<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::factory,
             (signed __int64)v9,
             0LL) )
      {
        v7 = &v9;
      }
      else
      {
        v9 = 0LL;
        factory_cache = winrt::impl::get_factory_cache(v5);
        WINRT_InterlockedPushEntrySList(factory_cache, &stru_1805C1E30);
        v7 = (winrt::impl **)&winrt::impl::factory_storage<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::factory;
      }
      winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
        v7,
        a2);
      _InterlockedDecrement64(&qword_1805C1E28);
    }
    else
    {
      winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
        &v9,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
  }
  return a2;
}
