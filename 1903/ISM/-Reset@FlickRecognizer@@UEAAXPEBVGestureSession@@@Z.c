/*
 * XREFs of ?Reset@FlickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x18010B430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::Reset(FlickRecognizer *this, const struct GestureSession *a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 138);
  if ( (v2 & 1) == 0 )
  {
    *((_DWORD *)this + 35) = 0;
    *((_WORD *)this + 68) = 2570;
    *((_BYTE *)this + 138) = v2 & 0xF8 | 1;
  }
}
