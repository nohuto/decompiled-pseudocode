/*
 * XREFs of ?SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017E4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14) || *((float *)this + 24) != 3.0 || *((_DWORD *)this + 25) != 2 || *((_DWORD *)this + 26) )
    return 1;
  return result;
}
