/*
 * XREFs of ?SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BFB90
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
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12) || *((float *)this + 22) != 0.0 )
    return 1;
  return result;
}
