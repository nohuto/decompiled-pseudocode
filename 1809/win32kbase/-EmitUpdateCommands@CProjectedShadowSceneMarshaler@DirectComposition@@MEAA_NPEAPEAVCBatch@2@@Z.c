/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0173950
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AEF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4bed6b8915b3a91b4b25eb67a8154c52___ @ 0x1C0173334 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4bed6b8915b3a91b4b25eb67a8154c5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_545d074d2e47b65875f9e3cf6d247f5a___ @ 0x1C01733A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_545d074d2e47b65875f9e3cf6d247f5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6eedff45713b6053505f8ee34f3bccd8___ @ 0x1C017340C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6eedff45713b6053505f8ee34f3bccd.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6faf365bd1adf44ee58bbf315483cfb6___ @ 0x1C0173478 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6faf365bd1adf44ee58bbf315483cfb.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8eacb1990b0e892e00fe35f178aa3903___ @ 0x1C01734E4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8eacb1990b0e892e00fe35f178aa390.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9eabfe9683fd12cec90d25d74e3aca73___ @ 0x1C0173550 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9eabfe9683fd12cec90d25d74e3aca7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e22d0ec4d224b06fe90ac419f6c312a3___ @ 0x1C01735BC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e22d0ec4d224b06fe90ac419f6c312a.c)
 *     ?EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017366C (-EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017376C (-EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017386C (-EmitClearCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01738D8 (-EmitClearReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProjectedShadowSceneMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitClearCasters(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitClearReceivers(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitAddCasters(this, (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitAddReceivers(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_545d074d2e47b65875f9e3cf6d247f5a___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4bed6b8915b3a91b4b25eb67a8154c52___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6eedff45713b6053505f8ee34f3bccd8___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6faf365bd1adf44ee58bbf315483cfb6___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x8000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9eabfe9683fd12cec90d25d74e3aca73___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8eacb1990b0e892e00fe35f178aa3903___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e22d0ec4d224b06fe90ac419f6c312a3___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x100u;
      return 1;
    }
  }
  return v4;
}
