/*
 * XREFs of ?SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017F0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHueRotationEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CHueRotationEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14) || *((float *)this + 24) != 0.0 )
    return 1;
  return result;
}
