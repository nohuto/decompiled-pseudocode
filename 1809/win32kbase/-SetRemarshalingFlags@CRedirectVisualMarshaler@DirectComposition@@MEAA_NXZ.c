/*
 * XREFs of ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRedirectVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CRedirectVisualMarshaler *this)
{
  char v1; // bl
  char v2; // di

  v1 = 0;
  v2 = 0;
  if ( *((_QWORD *)this + 44) )
  {
    *((_DWORD *)this + 4) |= 0x40000000u;
    v2 = 1;
  }
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || v2 )
    return 1;
  return v1;
}
