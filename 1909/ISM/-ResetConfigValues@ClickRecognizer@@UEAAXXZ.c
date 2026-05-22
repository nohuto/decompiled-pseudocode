/*
 * XREFs of ?ResetConfigValues@ClickRecognizer@@UEAAXXZ @ 0x18000F560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ClickRecognizer::ResetConfigValues(ClickRecognizer *this)
{
  *((_WORD *)this + 13) = ClickRecognizer::s_doubleTapTimeThreshold;
  *((_WORD *)this + 12) = ClickRecognizer::s_doubleTapDistanceThreshold;
  *((_WORD *)this + 14) = ClickRecognizer::s_tapAndShortHoldTimeThreshold;
  *((_WORD *)this + 17) = ClickRecognizer::s_tapAndLongHoldTimeThreshold;
  *((_WORD *)this + 15) = ClickRecognizer::s_tapAndHoldStartTimeThreshold;
  *((_WORD *)this + 16) = ClickRecognizer::s_tapAndHoldDurationThreshold;
  *((_WORD *)this + 18) = ClickRecognizer::s_tapAndHoldDistanceThreshold;
}
