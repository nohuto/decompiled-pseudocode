/*
 * XREFs of ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180298948
 * Callers:
 *     ?v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x180292BB0 (-v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ.c)
 *     _lambda_9ec552b8631f150620dbdecd2ecc5d92_::operator() @ 0x1802932D8 (_lambda_9ec552b8631f150620dbdecd2ecc5d92_--operator().c)
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180293920 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x180293C00 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180293D34 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::NavigateInternal(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 292) )
  {
    v2 = *(_DWORD *)(a1 + 344) == 0;
    *(_DWORD *)(a1 + 292) = a2;
    if ( v2 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 504LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 168) + 504LL),
               *(unsigned int *)(a1 + 148),
               a2);
  }
  return result;
}
