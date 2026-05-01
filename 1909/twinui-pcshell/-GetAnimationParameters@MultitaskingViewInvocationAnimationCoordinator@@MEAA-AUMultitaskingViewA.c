/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewInvocationAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x1800882B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewInvocationAnimationCoordinator::GetAnimationParameters(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  result = a2;
  v3 = xmmword_1805C0980;
  *a2 = MultitaskingViewInvocationAnimationCoordinator::animationParameters;
  v4 = xmmword_1805C0990;
  a2[1] = v3;
  v5 = xmmword_1805C09A0;
  a2[2] = v4;
  a2[3] = v5;
  return result;
}
