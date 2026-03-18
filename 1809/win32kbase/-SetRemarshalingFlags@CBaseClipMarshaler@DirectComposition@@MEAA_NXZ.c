/*
 * XREFs of ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0174D40
 * Callers:
 *     ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0174F80 (-SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01777B0 (-SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C017B390 (-SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C017B590 (-SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C017E140 (-SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BEA8 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseClipMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 7) )
  {
    v1 |= 0x80u;
    *((_DWORD *)this + 4) = v1;
  }
  *((_DWORD *)this + 4) = v1 | 0x700;
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
