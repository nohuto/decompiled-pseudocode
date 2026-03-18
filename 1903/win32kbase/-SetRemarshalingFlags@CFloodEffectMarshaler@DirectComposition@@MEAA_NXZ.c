/*
 * XREFs of ?SetRemarshalingFlags@CFloodEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01C20B0
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
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || *((float *)this + 22) != 0.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || 1.0 != *((float *)this + 25) )
  {
    return 1;
  }
  return result;
}
