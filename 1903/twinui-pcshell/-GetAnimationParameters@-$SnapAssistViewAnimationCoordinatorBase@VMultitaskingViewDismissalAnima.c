/*
 * XREFs of ?GetAnimationParameters@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x18035F630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::GetAnimationParameters(
        __int64 a1,
        _OWORD *a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = xmmword_1805987B0;
  *a2 = MultitaskingViewDismissalAnimationCoordinator::animationParameters;
  v4 = xmmword_1805987C0;
  a2[1] = v3;
  v5 = xmmword_1805987D0;
  a2[2] = v4;
  a2[3] = v5;
  v6 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 168LL))(a1, v8);
  result = a2;
  *a2 = v6;
  return result;
}
