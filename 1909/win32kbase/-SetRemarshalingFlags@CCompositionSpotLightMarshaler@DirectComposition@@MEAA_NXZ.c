/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B3420
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AC350 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  if ( *((float *)this + 20) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 21) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 22) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((float *)this + 29) != 0.0 || *((float *)this + 30) != 0.0 || *((float *)this + 31) != -1.0 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 26) != 0.0 || *((float *)this + 27) != 0.0 || *((float *)this + 28) != 100.0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( *((float *)this + 32) != 0.52359879 )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((float *)this + 33) != 1.5707964 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((float *)this + 34) != 1.0 || *((float *)this + 35) != 1.0 || *((float *)this + 36) != 1.0 )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 38) != 1.0 || *((float *)this + 39) != 1.0 || *((float *)this + 40) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( *((float *)this + 42) != 1.0 )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((float *)this + 43) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( *((float *)this + 44) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100000u;
  if ( *((float *)this + 45) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200000u;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
