/*
 * XREFs of ?SetRemarshalingFlags@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01792C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleEmitterVisualMarshaler *this)
{
  char v1; // bl
  char v3; // al

  v1 = 0;
  if ( *((_QWORD *)this + 44) )
    *((_DWORD *)this + 4) |= 0x40000000u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x40000000) != 0 || v3 )
    return 1;
  return v1;
}
