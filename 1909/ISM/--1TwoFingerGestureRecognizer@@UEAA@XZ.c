/*
 * XREFs of ??1TwoFingerGestureRecognizer@@UEAA@XZ @ 0x18010A080
 * Callers:
 *     _GestureSession::GestureSession_::_1_::dtor$4 @ 0x18010A050 (_GestureSession--GestureSession_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerGestureRecognizer::~TwoFingerGestureRecognizer(TwoFingerGestureRecognizer *this)
{
  *((_QWORD *)this + 11) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 2) = &GestureRecognizer::`vftable';
  *(_QWORD *)this = &GestureRecognizer::`vftable';
}
