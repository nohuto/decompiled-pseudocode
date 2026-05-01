/*
 * XREFs of ?SetAnimationData@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x18035F220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SetAnimationData@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x180373390 (-SetAnimationData@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAUISwitchThumbnailFactory@@PE.c)
 */

void __fastcall SnapAssistViewAnimationCoordinatorBase<MultitaskingViewInvocationAnimationCoordinator>::SetAnimationData(
        MultitaskingViewAnimationCoordinatorBase *a1,
        struct ISwitchThumbnailFactory *a2,
        struct IAnimatableMultitaskingViewFrame *a3,
        struct IDCompThumbnail *a4)
{
  int v6; // eax
  RECT rc; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  MultitaskingViewAnimationCoordinatorBase::SetAnimationData(a1, a2, a3, a4);
  v6 = (*(__int64 (__fastcall **)(struct IAnimatableMultitaskingViewFrame *, RECT *))(*(_QWORD *)a3 + 80LL))(a3, &rc);
  if ( v6 >= 0 )
    *((_QWORD *)a1 + 26) = MonitorFromRect(&rc, 0);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\SnapAssistViewAnimationCoordinatorBase.h",
      (const char *)(unsigned int)v6);
}
