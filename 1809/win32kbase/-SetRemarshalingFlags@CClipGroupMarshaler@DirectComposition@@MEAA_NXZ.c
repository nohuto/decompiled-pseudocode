/*
 * XREFs of ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0174F80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0174D40 (-SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CClipGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CClipGroupMarshaler *this)
{
  char result; // al

  result = DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 22) )
  {
    *((_DWORD *)this + 23) = 0;
    return 1;
  }
  return result;
}
