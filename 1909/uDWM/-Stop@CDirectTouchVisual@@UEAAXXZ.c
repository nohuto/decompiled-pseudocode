/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180099E80
 * Callers:
 *     <none>
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180045D00 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
