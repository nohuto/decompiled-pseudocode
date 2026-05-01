/*
 * XREFs of ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x18024CDC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x18023D9B0 (-GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x18024CC34 (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 */

void __fastcall LegacyWindowWrapper::v_HandleActivationRequested(LegacyWindowWrapper *this)
{
  BOOL Visibility; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 593) )
  {
    *((_BYTE *)this + 593) = 1;
    Visibility = LegacyViewWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)this + 158);
    LegacyWindowWrapper::SendVisibilityToWindow((__int64)this - 8, Visibility);
  }
}
