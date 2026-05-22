/*
 * XREFs of ??1FlickRecognizer@@UEAA@XZ @ 0x1800D53A4
 * Callers:
 *     _GestureSession::GestureSession_::_1_::dtor$0 @ 0x180134487 (_GestureSession--GestureSession_--_1_--dtor$0.c)
 *     _GestureSession::GestureSession_::_1_::dtor$1 @ 0x18013449D (_GestureSession--GestureSession_--_1_--dtor$1.c)
 *     _GestureSession::GestureSession_::_1_::dtor$2 @ 0x1801344B6 (_GestureSession--GestureSession_--_1_--dtor$2.c)
 *     _GestureSession::GestureSession_::_1_::dtor$3 @ 0x1801344CF (_GestureSession--GestureSession_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::~FlickRecognizer(FlickRecognizer *this)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
}
