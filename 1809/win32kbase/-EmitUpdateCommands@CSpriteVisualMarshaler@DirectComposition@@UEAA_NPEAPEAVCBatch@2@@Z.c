/*
 * XREFs of ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AE60
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_821346ee0aa757109843575bda7d790f___ @ 0x1C0008694 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_821346ee0aa757109843575bda7d790.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_55a2937be0383dca6b00eef3dd1cade6___ @ 0x1C000A208 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_55a2937be0383dca6b00eef3dd1cade.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AFC0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // di
  DirectComposition::CSpriteVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 92);
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_55a2937be0383dca6b00eef3dd1cade6___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    *((_DWORD *)this + 92) &= ~1u;
    v4 = *((_DWORD *)this + 92);
  }
  v7 = this;
  if ( (v4 & 2) != 0 )
  {
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_821346ee0aa757109843575bda7d790f___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 92) &= ~2u;
      return v5;
    }
    return 0;
  }
  return v5;
}
