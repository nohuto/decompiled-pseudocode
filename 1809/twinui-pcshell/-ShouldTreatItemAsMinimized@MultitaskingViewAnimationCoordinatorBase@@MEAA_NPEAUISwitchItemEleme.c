/*
 * XREFs of ?ShouldTreatItemAsMinimized@MultitaskingViewAnimationCoordinatorBase@@MEAA_NPEAUISwitchItemElement@@@Z @ 0x180312E30
 * Callers:
 *     ?ShouldTreatItemAsMinimized@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@UEAA_NPEAUISwitchItemElement@@@Z @ 0x1802FE9A0 (-ShouldTreatItemAsMinimized@-$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocation.c)
 *     ?ShouldTreatItemAsMinimized@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAA_NPEAUISwitchItemElement@@@Z @ 0x1802FEEA0 (-ShouldTreatItemAsMinimized@-$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsCloaked@MultitaskingViewAnimationCoordinatorBase@@IEAA_NPEAUHWND__@@@Z @ 0x180312A28 (-IsCloaked@MultitaskingViewAnimationCoordinatorBase@@IEAA_NPEAUHWND__@@@Z.c)
 */

char __fastcall MultitaskingViewAnimationCoordinatorBase::ShouldTreatItemAsMinimized(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchItemElement *a2)
{
  char v4; // bl
  HWND v6; // rax
  HWND v7; // rax
  MultitaskingViewAnimationCoordinatorBase *v8; // rcx

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *))(*(_QWORD *)this + 104LL))(this) )
    return 0;
  if ( *((_BYTE *)this + 168) )
    return 1;
  v6 = (HWND)(*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( IsIconic(v6) )
    return 1;
  v7 = (HWND)(*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( MultitaskingViewAnimationCoordinatorBase::IsCloaked(v8, v7) )
    return 1;
  return v4;
}
