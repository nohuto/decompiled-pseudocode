/*
 * XREFs of ?SetRemarshalingFlags@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017FF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14)
    || 1.0 != *((float *)this + 24)
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((_DWORD *)this + 28) )
  {
    return 1;
  }
  return result;
}
