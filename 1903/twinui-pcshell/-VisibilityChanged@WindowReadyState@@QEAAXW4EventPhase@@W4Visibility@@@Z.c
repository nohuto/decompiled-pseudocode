/*
 * XREFs of ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1802A4668
 * Callers:
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18005DF90 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x18029298C (-SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180293810 (-v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x18029A320 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1802A31F4 (-SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x180035B4C (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180035B84 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180035BD8 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1800364FC (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1802A44A8 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 */

char __fastcall WindowReadyState::VisibilityChanged(WindowReadyState *a1)
{
  int v2; // edx
  __int64 v3; // rcx
  char IsReadyForPresentation; // di
  int v5; // r8d
  int *v6; // rcx
  int v7; // r8d
  HWND *v8; // rcx
  char result; // al

  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(a1);
  if ( v5 != 1 )
  {
    if ( !v2 )
      goto LABEL_11;
    v6 = (int *)(v3 + 8);
    v7 = 1;
    goto LABEL_10;
  }
  if ( !v2 )
  {
    if ( !*(_BYTE *)(v3 + 24) )
      goto LABEL_11;
    v6 = (int *)(v3 + 8);
    if ( (*(_BYTE *)v6 & 1) == 0 )
      goto LABEL_11;
    v7 = 2;
LABEL_10:
    WindowReadyState::WaitFlags::Set(v6, (__int64 *)a1, v7);
    goto LABEL_11;
  }
  WindowReadyState::WaitFlags::Clear((int *)(v3 + 8), (__int64 *)a1, 1);
  if ( WindowReadyState::IsReadyForPresentation(a1) )
    WindowReadyState::_WaitForUnfreezeIfNecessary(v8);
LABEL_11:
  result = WindowReadyState::IsReadyForPresentation(a1);
  if ( IsReadyForPresentation != result )
    return std::_Func_class<void,bool>::operator()((__int64)a1 + 40, result);
  return result;
}
