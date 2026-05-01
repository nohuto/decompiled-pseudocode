/*
 * XREFs of ??$Make@VUwpAppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpAppStateManager@@@12@XZ @ 0x1800B55BC
 * Callers:
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x1800B4790 (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??0UwpAppStateManager@@QEAA@XZ @ 0x1800B62E8 (--0UwpAppStateManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B6EA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 */

// Hidden C++ exception states: #wind=3
UwpAppStateManager **__fastcall Microsoft::WRL::Details::Make<UwpAppStateManager,>(UwpAppStateManager **a1)
{
  UwpAppStateManager *v2; // rax
  UwpAppStateManager *v3; // rbx
  __int64 v4; // rdx
  UwpAppStateManager *v5; // rbx

  *a1 = 0LL;
  v2 = (UwpAppStateManager *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x48uLL);
    v5 = UwpAppStateManager::UwpAppStateManager(v3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v4);
    *a1 = v5;
    v3 = 0LL;
  }
  if ( v3 )
    operator delete(v3, (const struct std::nothrow_t *)1);
  return a1;
}
