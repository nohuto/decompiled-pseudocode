/*
 * XREFs of ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1802C2900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x1802B3070 (-GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     ?SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z @ 0x1802C263C (-SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1802C2714 (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 */

int __fastcall LegacyWindowWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  int result; // eax
  BOOL Visibility; // eax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 208LL))(*(_QWORD *)(a1 + 288));
  if ( !*(_DWORD *)(a1 + 648) )
    return PostMessageW((HWND)*(int *)(a1 + 304), 0x10u, 0LL, 0LL);
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 609) = 1;
  }
  else
  {
    LegacyWindowWrapper::SendViewStateToWindow((LegacyWindowWrapper *)(a1 - 8), 0);
    Visibility = LegacyViewWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)(a1 + 648));
    return LegacyWindowWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
  }
  return result;
}
