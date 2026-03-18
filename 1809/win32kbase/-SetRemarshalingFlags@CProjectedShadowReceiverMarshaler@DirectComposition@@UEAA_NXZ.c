/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01732F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BEA8 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowReceiverMarshaler *this)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 7) )
  {
    v2 |= 0x80u;
    *((_DWORD *)this + 4) = v2;
  }
  v3 = v2 | 0x300;
  v4 = *((_QWORD *)this + 9) == 0LL;
  *((_DWORD *)this + 4) = v3;
  if ( !v4 )
    *((_DWORD *)this + 4) = v3 | 0x400;
  return 1;
}
