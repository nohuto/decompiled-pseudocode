/*
 * XREFs of ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01C55F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8FE0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CHostVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CHostVisualMarshaler *this)
{
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 88) |= 1u;
  return 1;
}
