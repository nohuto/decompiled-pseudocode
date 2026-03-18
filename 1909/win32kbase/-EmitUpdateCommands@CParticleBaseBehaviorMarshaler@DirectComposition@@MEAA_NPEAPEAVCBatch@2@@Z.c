/*
 * XREFs of ?EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009FF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_83c24ac4319d7c05c0ce2215df606cdc___ @ 0x1C01AF3D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_83c24ac4319d7c05c0ce2215df606cd.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f61035a10b61a6860e6a4d2ec7fe9148___lambda_106a60d828237c659c12d231609d6441___ @ 0x1C01AF444 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f61035a10b61a6860e6a4d2ec7fe914.c)
 */

char __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  void *v7; // [rsp+20h] [rbp-18h]
  DirectComposition::CParticleBaseBehaviorMarshaler *v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f61035a10b61a6860e6a4d2ec7fe9148___lambda_106a60d828237c659c12d231609d6441___(
              (__int64)this,
              a2,
              (unsigned int *)this + 19,
              *((_DWORD *)this + 18),
              v7,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v5 & 0x80u) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_83c24ac4319d7c05c0ce2215df606cdc___(
           (__int64)this,
           a2,
           (__int64)&v8) )
    {
      *((_DWORD *)this + 4) &= ~0x80u;
      return 1;
    }
  }
  return v4;
}
