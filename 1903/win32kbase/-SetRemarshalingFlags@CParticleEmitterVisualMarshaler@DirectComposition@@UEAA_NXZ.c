/*
 * XREFs of ?SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01B6F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A8FE0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleEmitterVisualMarshaler *this)
{
  char v1; // di
  char v3; // al

  v1 = 0;
  if ( *((_QWORD *)this + 43) )
    *((_DWORD *)this + 125) |= 8u;
  if ( *((_QWORD *)this + 44) )
    *((_DWORD *)this + 125) |= 0x400000u;
  if ( *((_QWORD *)this + 45) )
    *((_DWORD *)this + 125) |= 0x10u;
  if ( *((_QWORD *)this + 46) )
    *((_DWORD *)this + 125) |= 0x80u;
  if ( *((_QWORD *)this + 47) )
    *((_DWORD *)this + 125) |= 0x20000u;
  if ( *((_QWORD *)this + 48) )
    *((_DWORD *)this + 125) |= 0x40000u;
  if ( *((_DWORD *)this + 122) )
  {
    *((_DWORD *)this + 125) |= 0x100000u;
    *((_DWORD *)this + 123) = 0;
  }
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 125) || v3 )
    return 1;
  return v1;
}
