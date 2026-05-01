/*
 * XREFs of ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A7A70
 * Callers:
 *     _AppUsageTracker::AppUsageTracker_::_1_::dtor$13 @ 0x1800A60AD (_AppUsageTracker--AppUsageTracker_--_1_--dtor$13.c)
 *     _AppUsageTracker::AppUsageTracker_::_1_::dtor$16 @ 0x1800A60DC (_AppUsageTracker--AppUsageTracker_--_1_--dtor$16.c)
 *     _Microsoft::WRL::Details::Make_UwpAppStateManager__::_1_::dtor$0 @ 0x1800A6D13 (_Microsoft--WRL--Details--Make_UwpAppStateManager__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_Win32AppStateManager__::_1_::dtor$0 @ 0x1800AA426 (_Microsoft--WRL--Details--Make_Win32AppStateManager__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A8560 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Win32AppStateManager>::~ComPtr<Win32AppStateManager>(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
