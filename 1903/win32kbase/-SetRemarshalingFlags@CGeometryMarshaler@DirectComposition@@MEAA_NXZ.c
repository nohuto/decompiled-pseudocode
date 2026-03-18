/*
 * XREFs of ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B0FC0
 * Callers:
 *     ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B1260 (-SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B3E00 (-SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01BD910 (-SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01BDB10 (-SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01C0BA0 (-SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A941C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CGeometryMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 7) )
    v1 |= 0x80u;
  *((_DWORD *)this + 4) = v1 | 0x700;
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
