/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewInvocationAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x180082B30
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
  v3 = xmmword_18050E6A0;
  *a2 = MultitaskingViewInvocationAnimationCoordinator::animationParameters;
  v4 = xmmword_18050E6B0;
  a2[1] = v3;
  v5 = xmmword_18050E6C0;
  a2[2] = v4;
  a2[3] = v5;
  return result;
}
