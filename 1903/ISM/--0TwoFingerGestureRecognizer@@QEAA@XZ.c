/*
 * XREFs of ??0TwoFingerGestureRecognizer@@QEAA@XZ @ 0x18010CB70
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x18010A0E8 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18010D040 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 *     ??0TwoFingerClickRecognizer@@QEAA@XZ @ 0x18010D84C (--0TwoFingerClickRecognizer@@QEAA@XZ.c)
 */

TwoFingerGestureRecognizer *__fastcall TwoFingerGestureRecognizer::TwoFingerGestureRecognizer(
        TwoFingerGestureRecognizer *this)
{
  TwoFingerGestureRecognizer *result; // rax

  *((_DWORD *)this + 2) = 31744;
  *(_QWORD *)this = &TwoFingerGestureRecognizer::`vftable';
  TwoFingerClickRecognizer::TwoFingerClickRecognizer((TwoFingerGestureRecognizer *)((char *)this + 16));
  *((_DWORD *)this + 24) = 25600;
  *((_QWORD *)this + 11) = &TwoFingerDragRecognizer::`vftable';
  *((_DWORD *)this + 28) = 0;
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 82) = TwoFingerDragRecognizer::s_twoFingerDistanceThreshold;
  *((_WORD *)this + 83) = TwoFingerDragRecognizer::s_initialDragThreshold;
  *((_WORD *)this + 86) = TwoFingerDragRecognizer::s_twoFingerActionTimeThreshold;
  *((_WORD *)this + 87) = TwoFingerDragRecognizer::s_twoFingerDistanceVariationThreshold;
  *((_WORD *)this + 52) = 0;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  result = this;
  *((_DWORD *)this + 27) = 0;
  *((_WORD *)this + 88) = 0;
  *((_DWORD *)this + 45) = 12;
  *((_DWORD *)this + 48) = 28;
  return result;
}
