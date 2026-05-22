/*
 * XREFs of ??_GGestureSession@@AEAAPEAXI@Z @ 0x18010A304
 * Callers:
 *     ?Release@GestureSession@@UEAAKXZ @ 0x18010AD70 (-Release@GestureSession@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

GestureSession *__fastcall GestureSession::`scalar deleting destructor'(GestureSession *this)
{
  *(_QWORD *)this = &GestureSession::`vftable';
  *((_QWORD *)this + 71) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 62) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 60) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 52) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 31) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 21) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 4) = &GestureRecognizer::`vftable';
  free(this);
  return this;
}
