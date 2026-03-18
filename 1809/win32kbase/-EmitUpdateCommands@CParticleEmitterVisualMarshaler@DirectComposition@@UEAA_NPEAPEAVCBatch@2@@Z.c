/*
 * XREFs of ?EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0179130
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AFC0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b1e7cfcdbfb9f460400e2024d5211e1c___ @ 0x1C01790AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b1e7cfcdbfb9f460400e2024d5211e1.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CParticleEmitterVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x40000000) == 0;
    v7 = this;
    if ( v5 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b1e7cfcdbfb9f460400e2024d5211e1c___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x40000000u;
      return 1;
    }
  }
  return v4;
}
