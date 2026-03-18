/*
 * XREFs of ?SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017E7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBrightnessEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14)
    || *((float *)this + 24) != 1.0
    || *((float *)this + 25) != 1.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0 )
  {
    return 1;
  }
  return result;
}
