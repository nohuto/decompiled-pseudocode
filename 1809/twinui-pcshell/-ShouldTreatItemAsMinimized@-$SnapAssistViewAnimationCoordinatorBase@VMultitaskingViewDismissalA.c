/*
 * XREFs of ?ShouldTreatItemAsMinimized@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAA_NPEAUISwitchItemElement@@@Z @ 0x1802FEEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ShouldTreatItemAsMinimized@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@@Z @ 0x180312E30 (-ShouldTreatItemAsMinimized@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemEleme.c)
 */

char __fastcall SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::ShouldTreatItemAsMinimized(
        MultitaskingViewAnimationCoordinatorBase *a1,
        struct ISwitchItemElement *a2)
{
  char v4; // bl
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( MultitaskingViewAnimationCoordinatorBase::ShouldTreatItemAsMinimized(a1, a2)
    || (*(int (__fastcall **)(struct ISwitchItemElement *, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v6) < 0
    || v6 != *((_QWORD *)a1 + 27) )
  {
    return 1;
  }
  return v4;
}
