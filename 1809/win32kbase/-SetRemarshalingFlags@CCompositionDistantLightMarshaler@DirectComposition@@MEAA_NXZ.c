/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0177FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0171030 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  if ( *((float *)this + 20) != 1.0 || *((float *)this + 21) != 1.0 || *((float *)this + 22) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 26) != 0.0 || *((float *)this + 27) != 0.0 || *((float *)this + 28) != -1.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 29) != 1.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
