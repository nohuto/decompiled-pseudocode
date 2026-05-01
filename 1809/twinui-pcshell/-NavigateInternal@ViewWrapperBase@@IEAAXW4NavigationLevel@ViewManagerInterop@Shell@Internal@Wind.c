/*
 * XREFs of ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180242888
 * Callers:
 *     ?v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x18023C940 (-v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ.c)
 *     _lambda_75db349d5f52eefc6c9ecc704b0db118_::operator() @ 0x18023CDC0 (_lambda_75db349d5f52eefc6c9ecc704b0db118_--operator().c)
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023D740 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x18023DA10 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023DB44 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 520LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL),
               *(unsigned int *)(a1 + 148),
               a2);
  }
  return result;
}
