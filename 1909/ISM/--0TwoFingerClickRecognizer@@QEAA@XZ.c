/*
 * XREFs of ??0TwoFingerClickRecognizer@@QEAA@XZ @ 0x18010D61C
 * Callers:
 *     ??0TwoFingerGestureRecognizer@@QEAA@XZ @ 0x18010C940 (--0TwoFingerGestureRecognizer@@QEAA@XZ.c)
 * Callees:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18010CE10 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

TwoFingerClickRecognizer *__fastcall TwoFingerClickRecognizer::TwoFingerClickRecognizer(TwoFingerClickRecognizer *this)
{
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &TwoFingerClickRecognizer::`vftable';
  *((_DWORD *)this + 2) = 23552;
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 8) &= 0x14u;
  *((_WORD *)this + 30) = TwoFingerClickRecognizer::s_twoFingerDistanceThreshold;
  *((_WORD *)this + 31) = TwoFingerClickRecognizer::s_twoFingerActionTimeThreshold;
  *((_WORD *)this + 32) = TwoFingerClickRecognizer::s_twoFingerTapAndHoldTimeThreshold;
  *((_WORD *)this + 33) = TwoFingerClickRecognizer::s_twoFingerTapDistanceThreshold;
  *((_WORD *)this + 35) = TwoFingerClickRecognizer::s_twoFingerDoubleTapTimeThreshold;
  *((_WORD *)this + 34) = TwoFingerClickRecognizer::s_twoFingerDoubleTapDistanceThreshold;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 5) = 0;
  return this;
}
