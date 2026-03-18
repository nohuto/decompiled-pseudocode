/*
 * XREFs of ?EmitAttractors@CParticleEmitterVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B4174
 * Callers:
 *     ?EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B41D0 (-EmitUpdateCommands@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_09133e3938d82d7e833b314fbe5372d1___lambda_0de7e8b49aabdfd91187b0359fd6d078___ @ 0x1C01B35BC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_09133e3938d82d7e833b314fbe5372d.c)
 */

char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::EmitAttractors(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  unsigned int v4; // r9d
  char updated; // al
  char v6; // cl
  void *v8; // [rsp+20h] [rbp-18h]
  DirectComposition::CParticleEmitterVisualMarshaler *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 127) & 0x100000) == 0;
  v4 = *((_DWORD *)this + 124);
  v9 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_09133e3938d82d7e833b314fbe5372d1___lambda_0de7e8b49aabdfd91187b0359fd6d078___(
              (__int64)this,
              a2,
              (unsigned int *)this + 125,
              v4,
              v8,
              (__int64)&v9);
  v6 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 127) &= ~0x100000u;
    return 1;
  }
  return v6;
}
