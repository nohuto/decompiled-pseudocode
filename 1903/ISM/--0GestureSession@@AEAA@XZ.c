/*
 * XREFs of ??0GestureSession@@AEAA@XZ @ 0x18010A0E8
 * Callers:
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x18010A5D4 (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 * Callees:
 *     ?Reset@GestureSession@@UEAAJXZ @ 0x18010ADA0 (-Reset@GestureSession@@UEAAJXZ.c)
 *     ??0ClickRecognizer@@QEAA@XZ @ 0x18010B8E0 (--0ClickRecognizer@@QEAA@XZ.c)
 *     ?ResetConfigValues@DragRecognizer@@UEAAXXZ @ 0x18010C830 (-ResetConfigValues@DragRecognizer@@UEAAXXZ.c)
 *     ??0TwoFingerGestureRecognizer@@QEAA@XZ @ 0x18010CB70 (--0TwoFingerGestureRecognizer@@QEAA@XZ.c)
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18010D040 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
GestureSession *__fastcall GestureSession::GestureSession(GestureSession *this)
{
  char *v2; // rbp

  *(_QWORD *)this = &GestureSession::`vftable';
  v2 = (char *)this + 32;
  ClickRecognizer::ClickRecognizer((GestureSession *)((char *)this + 32));
  *((_DWORD *)this + 44) = 112;
  *((_QWORD *)this + 21) = &DragRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  DragRecognizer::ResetConfigValues((GestureSession *)((char *)this + 168));
  *((_DWORD *)this + 64) = 256;
  *((_QWORD *)this + 31) = &FlickRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 202) = FlickRecognizer::s_minimumFlickSpeed;
  *((_WORD *)this + 203) = FlickRecognizer::s_minimumFlickDelta;
  *((_WORD *)this + 204) = FlickRecognizer::s_maximumFlickTail;
  *((_WORD *)this + 205) = FlickRecognizer::s_maximumFlickUp;
  *((_DWORD *)this + 106) = 128;
  *((_QWORD *)this + 52) = &PinchStretchRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 237) = PinchStretchRecognizer::s_minimumUpdateThreshold;
  TwoFingerGestureRecognizer::TwoFingerGestureRecognizer((GestureSession *)((char *)this + 480));
  *((_WORD *)this + 577) = -1;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 88) = v2;
  *((_QWORD *)this + 89) = (char *)this + 168;
  *((_QWORD *)this + 90) = (char *)this + 248;
  *((_QWORD *)this + 91) = (char *)this + 416;
  *((_QWORD *)this + 92) = (char *)this + 480;
  GestureSession::Reset(this);
  return this;
}
