/*
 * XREFs of ?SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B8D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionGlyphRunMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionGlyphRunMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 6) )
    v1 |= 0x40u;
  *((_DWORD *)this + 4) = v1 | 0x780;
  return 1;
}
