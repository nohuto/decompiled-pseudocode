/*
 * XREFs of ?SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAD50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A717C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CScaleTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CScaleTransformMarshaler *this)
{
  char v2; // al
  char v3; // cl

  if ( *((float *)this + 14) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 15) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 16) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 17) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x780) != 0 )
    return 1;
  return v3;
}
