/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A8560
 * Callers:
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x1800A5E60 (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 *     ??$Make@VUwpAppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpAppStateManager@@@12@XZ @ 0x1800A6C7C (--$Make@VUwpAppStateManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VUwpAppStateManager@@@12@X.c)
 *     ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A7A70 (--1-$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWin32AppStateManager@@@12@XZ @ 0x1800AA3A0 (--$Make@VWin32AppStateManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VWin32AppStateManager@@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabTransferManager@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800B84C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabTransferMana.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 11);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 88LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
