/*
 * XREFs of ?ResetConfigValues@FlickRecognizer@@UEAAXXZ @ 0x18000F510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::ResetConfigValues(FlickRecognizer *this)
{
  *((_WORD *)this + 78) = FlickRecognizer::s_minimumFlickSpeed;
  *((_WORD *)this + 79) = FlickRecognizer::s_minimumFlickDelta;
  *((_WORD *)this + 80) = FlickRecognizer::s_maximumFlickTail;
  *((_WORD *)this + 81) = FlickRecognizer::s_maximumFlickUp;
}
