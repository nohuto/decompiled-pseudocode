/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01AFA50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A941C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x400u;
  return 1;
}
