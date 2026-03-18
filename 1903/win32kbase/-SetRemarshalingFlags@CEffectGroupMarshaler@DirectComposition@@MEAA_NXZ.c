/*
 * XREFs of ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BCAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A941C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CEffectGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectGroupMarshaler *this)
{
  char v2; // di

  if ( *((float *)this + 14) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  v2 = 0;
  if ( *((_DWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x380) != 0 )
  {
    return 1;
  }
  return v2;
}
