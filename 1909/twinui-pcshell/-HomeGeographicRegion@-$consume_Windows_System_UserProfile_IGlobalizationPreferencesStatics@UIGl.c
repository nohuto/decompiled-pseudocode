/*
 * XREFs of ?HomeGeographicRegion@?$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800C77EC
 * Callers:
 *     winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852__&_ @ 0x1800C6414 (winrt--impl--factory_cache_entry_winrt--Windows--System--UserProfile--GlobalizationPreferences_w.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::HomeGeographicRegion(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax

  *a2 = 0LL;
  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 80LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  return a2;
}
