/*
 * XREFs of ?ResetConfigValues@TwoFingerClickRecognizer@@UEAAXXZ @ 0x18000F650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerClickRecognizer::ResetConfigValues(TwoFingerClickRecognizer *this)
{
  *((_WORD *)this + 30) = TwoFingerClickRecognizer::s_twoFingerDistanceThreshold;
  *((_WORD *)this + 31) = TwoFingerClickRecognizer::s_twoFingerActionTimeThreshold;
  *((_WORD *)this + 32) = TwoFingerClickRecognizer::s_twoFingerTapAndHoldTimeThreshold;
  *((_WORD *)this + 33) = TwoFingerClickRecognizer::s_twoFingerTapDistanceThreshold;
  *((_WORD *)this + 35) = TwoFingerClickRecognizer::s_twoFingerDoubleTapTimeThreshold;
  *((_WORD *)this + 34) = TwoFingerClickRecognizer::s_twoFingerDoubleTapDistanceThreshold;
}
