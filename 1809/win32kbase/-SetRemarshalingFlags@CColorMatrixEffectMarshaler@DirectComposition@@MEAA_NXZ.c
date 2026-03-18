/*
 * XREFs of ?SetRemarshalingFlags@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017EB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14)
    || *((_DWORD *)this + 44) != 1
    || *((_DWORD *)this + 45)
    || *((float *)this + 24) != 1.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((float *)this + 28) != 0.0
    || *((float *)this + 29) != 1.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0
    || *((float *)this + 34) != 1.0
    || *((float *)this + 35) != 0.0
    || *((float *)this + 36) != 0.0
    || *((float *)this + 37) != 0.0
    || *((float *)this + 38) != 0.0
    || *((float *)this + 39) != 1.0
    || *((float *)this + 40) != 0.0
    || *((float *)this + 41) != 0.0
    || *((float *)this + 42) != 0.0
    || *((float *)this + 43) != 0.0 )
  {
    return 1;
  }
  return result;
}
