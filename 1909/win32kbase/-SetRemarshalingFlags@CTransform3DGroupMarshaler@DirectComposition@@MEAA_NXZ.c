/*
 * XREFs of ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A717C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CTransform3DGroupMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 20) = 0;
  }
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    return 1;
  }
  return v1;
}
