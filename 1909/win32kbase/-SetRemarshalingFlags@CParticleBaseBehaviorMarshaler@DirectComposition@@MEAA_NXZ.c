/*
 * XREFs of ?SetRemarshalingFlags@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01AF770
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A717C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleBaseBehaviorMarshaler *this)
{
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((_DWORD *)this + 19) = 0;
  }
  if ( *((_DWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x80u;
  return 1;
}
