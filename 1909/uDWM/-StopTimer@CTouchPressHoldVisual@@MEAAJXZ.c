/*
 * XREFs of ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B0FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18004DD10 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B0F2C (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StopTimer(CTouchPressHoldVisual *this)
{
  CTouchVisual *v1; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  CTouchVisual::UnRegisterGlobalTimer(v1);
  return 0LL;
}
