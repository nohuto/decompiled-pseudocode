/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0172E00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BEA8 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4) | 0x80;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 8) )
  {
    v2 |= 0x100u;
    *((_DWORD *)this + 4) = v2;
  }
  v3 = v2 | 0x200;
  *((_DWORD *)this + 4) = v3;
  if ( *((_QWORD *)this + 10) )
  {
    v3 |= 0x400u;
    *((_DWORD *)this + 4) = v3;
  }
  v4 = v3 | 0x1800;
  *((_DWORD *)this + 4) = v4;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) = v4 | 0x2000;
  return 1;
}
