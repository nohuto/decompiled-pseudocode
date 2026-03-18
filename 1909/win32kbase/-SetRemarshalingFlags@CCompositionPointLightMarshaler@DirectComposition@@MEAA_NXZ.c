/*
 * XREFs of ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B2F90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AC350 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionPointLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  if ( *((float *)this + 20) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 21) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 22) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 23) != 1.0 || *((float *)this + 24) != 1.0 || *((float *)this + 25) != 1.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 30) != 0.0 || *((float *)this + 31) != 0.0 || *((float *)this + 32) != 100.0 )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((float *)this + 33) != 1.0 )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 34) != 0.0 )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((float *)this + 35) != 0.0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
