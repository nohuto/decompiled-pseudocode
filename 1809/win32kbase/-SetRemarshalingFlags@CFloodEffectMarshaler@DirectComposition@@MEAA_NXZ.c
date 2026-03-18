/*
 * XREFs of ?SetRemarshalingFlags@CFloodEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017F650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CFloodEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFloodEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14)
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || 1.0 != *((float *)this + 27) )
  {
    return 1;
  }
  return result;
}
