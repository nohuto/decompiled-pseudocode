/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewDismissalAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x1800857B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewDismissalAnimationCoordinator::GetAnimationParameters(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  result = a2;
  v3 = xmmword_1805987B0;
  *a2 = MultitaskingViewDismissalAnimationCoordinator::animationParameters;
  v4 = xmmword_1805987C0;
  a2[1] = v3;
  v5 = xmmword_1805987D0;
  a2[2] = v4;
  a2[3] = v5;
  return result;
}
