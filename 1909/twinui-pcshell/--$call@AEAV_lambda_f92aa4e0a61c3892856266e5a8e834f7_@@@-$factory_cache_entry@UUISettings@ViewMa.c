/*
 * XREFs of ??$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@Z @ 0x18009B8F0
 * Callers:
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18009DC90 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18008E785 (WINRT_InterlockedPushEntrySList.c)
 *     ??$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@?$consume_IActivationFactory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUISettings@ViewManagement@UI@Windows@2@XZ @ 0x18009B290 (--$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@-$consume_IActivationFactory@U.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18009BA90 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18009BCC0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ @ 0x18009FDF8 (-get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_f92aa4e0a61c3892856266e5a8e834f7_ &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  bool v4; // di
  winrt::impl *v5; // rcx
  union _SLIST_HEADER *factory_cache; // rax
  __int64 *v7; // rcx
  winrt::impl *v9; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v10[6]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v10[3] = -2LL;
  v10[0] = a2;
  v10[4] = &qword_1805C1DD8;
  _InterlockedIncrement64(&qword_1805C1DD8);
  if ( winrt::impl::factory_storage<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::factory )
  {
    winrt::impl::consume_IActivationFactory<winrt::Windows::Foundation::IActivationFactory>::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
      (__int64)&qword_1805C1DD8,
      a2);
    _InterlockedDecrement64(&qword_1805C1DD8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805C1DD8);
    v10[1] = L"Windows.UI.ViewManagement.UISettings";
    v10[2] = 36LL;
    winrt::param::hstring::hstring(string);
    winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v9, string);
    v3 = 0LL;
    v10[0] = 0LL;
    if ( v9 )
    {
      (**(void (__fastcall ***)(winrt::impl *, void *, _QWORD *))v9)(
        v9,
        &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value,
        v10);
      v3 = v10[0];
    }
    v4 = v3 != 0;
    if ( v3 )
      winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(v10);
    if ( v4 )
    {
      v10[5] = &qword_1805C1DD8;
      _InterlockedIncrement64(&qword_1805C1DD8);
      v5 = v9;
      if ( _InterlockedCompareExchange64(
             &winrt::impl::factory_storage<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::factory,
             (signed __int64)v9,
             0LL) )
      {
        v7 = v10;
      }
      else
      {
        v9 = 0LL;
        factory_cache = (union _SLIST_HEADER *)winrt::impl::get_factory_cache(v5);
        WINRT_InterlockedPushEntrySList(factory_cache, &ListEntry);
        v7 = &qword_1805C1DD8;
      }
      winrt::impl::consume_IActivationFactory<winrt::Windows::Foundation::IActivationFactory>::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
        (__int64)v7,
        a2);
      _InterlockedDecrement64(&qword_1805C1DD8);
    }
    else
    {
      winrt::impl::consume_IActivationFactory<winrt::Windows::Foundation::IActivationFactory>::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
        (__int64)v10,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
  }
  return a2;
}
