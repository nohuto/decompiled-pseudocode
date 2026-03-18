/*
 * XREFs of ?SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAB90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A717C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRotateTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CRotateTransform3DMarshaler *this)
{
  char v2; // al
  char v3; // cl

  if ( *((float *)this + 14) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 15) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 16) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 17) != 1.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 18) != 0.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((float *)this + 19) != 0.0 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x2000u;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x3F80) != 0 )
    return 1;
  return v3;
}
