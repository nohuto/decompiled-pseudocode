/*
 * XREFs of ??1FlickRecognizer@@UEAA@XZ @ 0x18010A06C
 * Callers:
 *     _GestureSession::GestureSession_::_1_::dtor$0 @ 0x18010A007 (_GestureSession--GestureSession_--_1_--dtor$0.c)
 *     _GestureSession::GestureSession_::_1_::dtor$1 @ 0x18010A017 (_GestureSession--GestureSession_--_1_--dtor$1.c)
 *     _GestureSession::GestureSession_::_1_::dtor$2 @ 0x18010A02A (_GestureSession--GestureSession_--_1_--dtor$2.c)
 *     _GestureSession::GestureSession_::_1_::dtor$3 @ 0x18010A03D (_GestureSession--GestureSession_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::~FlickRecognizer(FlickRecognizer *this)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
}
