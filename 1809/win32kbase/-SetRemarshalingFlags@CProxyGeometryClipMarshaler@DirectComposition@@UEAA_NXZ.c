/*
 * XREFs of ?SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C017E140
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0174D40 (-SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProxyGeometryClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CProxyGeometryClipMarshaler *this)
{
  char result; // al

  result = DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 10) )
  {
    *((_DWORD *)this + 4) |= 0x800u;
    result = 1;
  }
  if ( *((_QWORD *)this + 11) )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    return 1;
  }
  return result;
}
