/*
 * XREFs of ?SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0170F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BEA8 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::SetRemarshalingFlags(
        DirectComposition::CDropShadowMarshaler *this)
{
  int v2; // eax
  bool v3; // zf
  int v4; // eax

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4) | 0x180;
  v3 = *((_QWORD *)this + 7) == 0LL;
  *((_DWORD *)this + 4) = v2;
  if ( !v3 )
  {
    v2 |= 0x200u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((float *)this + 21) != 0.0 || *((float *)this + 22) != 0.0 || *((float *)this + 23) != 0.0 )
  {
    v2 |= 0x400u;
    *((_DWORD *)this + 4) = v2;
  }
  v4 = v2 | 0x800;
  v3 = *((_DWORD *)this + 25) == 0;
  *((_DWORD *)this + 4) = v4;
  if ( !v3 )
    *((_DWORD *)this + 4) = v4 | 0x1000;
  return 1;
}
