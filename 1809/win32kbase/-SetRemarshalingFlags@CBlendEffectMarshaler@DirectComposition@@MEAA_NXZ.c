/*
 * XREFs of ?SetRemarshalingFlags@CBlendEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017FC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBlendEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBlendEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14) || *((_DWORD *)this + 24) )
    return 1;
  return result;
}
