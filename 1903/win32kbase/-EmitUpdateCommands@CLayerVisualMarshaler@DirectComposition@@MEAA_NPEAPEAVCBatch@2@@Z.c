/*
 * XREFs of ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008FDA0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3f764717849129ac7430e97b8ddcf14e___ @ 0x1C0003FB4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3f764717849129ac7430e97b8ddcf14.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_88bcb8c81af71e6fca3538bfe1433135___ @ 0x1C00058DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_88bcb8c81af71e6fca3538bfe143313.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a60___ @ 0x1C008FE7C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf85___ @ 0x1C01B22F0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf8.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::EmitUpdateCommands(
        __m128i *this,
        struct DirectComposition::CBatch **a2)
{
  __int32 v4; // eax
  char v5; // di
  __m128i *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = this[22].m128i_i32[3];
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3f764717849129ac7430e97b8ddcf14e___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    this[22].m128i_i32[3] &= ~1u;
    v4 = this[22].m128i_i32[3];
  }
  v7 = this;
  if ( (v4 & 2) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_88bcb8c81af71e6fca3538bfe1433135___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    this[22].m128i_i32[3] &= ~2u;
    v4 = this[22].m128i_i32[3];
  }
  v7 = this;
  if ( (v4 & 4) == 0 )
    goto LABEL_7;
  if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a60___(
                           this,
                           a2,
                           &v7) )
    return 0;
  this[22].m128i_i32[3] &= ~4u;
  v4 = this[22].m128i_i32[3];
LABEL_7:
  v7 = this;
  if ( (v4 & 8) != 0 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf85___(
                            this,
                            a2,
                            &v7) )
    {
      this[22].m128i_i32[3] &= ~8u;
      return v5;
    }
    return 0;
  }
  return v5;
}
