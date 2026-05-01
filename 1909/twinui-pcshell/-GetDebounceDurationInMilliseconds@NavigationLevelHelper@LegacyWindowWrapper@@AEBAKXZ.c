/*
 * XREFs of ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ @ 0x1802C3E6C
 * Callers:
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1802C3E9C (-HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802C3FCC (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(
        LegacyWindowWrapper::NavigationLevelHelper *this)
{
  if ( *((_DWORD *)this + 1) == 1 )
    return *((_BYTE *)this - 40) != 0 ? 10000 : 2000;
  if ( *((_DWORD *)this + 1) == 2 )
    return 300LL;
  return 0LL;
}
