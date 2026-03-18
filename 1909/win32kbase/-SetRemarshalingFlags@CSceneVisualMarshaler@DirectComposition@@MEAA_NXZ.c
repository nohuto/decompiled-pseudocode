/*
 * XREFs of ?SetRemarshalingFlags@CSceneVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A6D40 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSceneVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneVisualMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_QWORD *)this + 44) )
    *((_DWORD *)this + 90) |= 2u;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 90) & 2) != 0 )
    return 1;
  return v1;
}
