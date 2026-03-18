/*
 * XREFs of ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008810
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6e1fc2826fc1168ae993d94725827cfd___ @ 0x1C0002ABC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6e1fc2826fc1168ae993d94725827cf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d902fc8211c9a6c33e20d09303e7d879___ @ 0x1C00049CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d902fc8211c9a6c33e20d09303e7d87.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5986506e5a5c3cc8d0771cf402cabc68___ @ 0x1C0008794 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5986506e5a5c3cc8d0771cf402cabc6.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AFC0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f0141dbcc496ee2a8c2c7b38f7667488___ @ 0x1C0175C60 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f0141dbcc496ee2a8c2c7b38f766748.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // di
  DirectComposition::CLayerVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 93);
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6e1fc2826fc1168ae993d94725827cfd___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    *((_DWORD *)this + 93) &= ~1u;
    v4 = *((_DWORD *)this + 93);
  }
  v7 = this;
  if ( (v4 & 2) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d902fc8211c9a6c33e20d09303e7d879___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    *((_DWORD *)this + 93) &= ~2u;
    v4 = *((_DWORD *)this + 93);
  }
  v7 = this;
  if ( (v4 & 4) == 0 )
    goto LABEL_7;
  if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5986506e5a5c3cc8d0771cf402cabc68___(
          (__int64)this,
          a2,
          (__int64)&v7) )
    return 0;
  *((_DWORD *)this + 93) &= ~4u;
  v4 = *((_DWORD *)this + 93);
LABEL_7:
  v7 = this;
  if ( (v4 & 8) != 0 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f0141dbcc496ee2a8c2c7b38f7667488___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 93) &= ~8u;
      return v5;
    }
    return 0;
  }
  return v5;
}
