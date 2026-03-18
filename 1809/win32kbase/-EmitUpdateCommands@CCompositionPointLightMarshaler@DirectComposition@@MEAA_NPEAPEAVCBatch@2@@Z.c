/*
 * XREFs of ?EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0178460
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00734A0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0a5c7c574f838d795b524a8285656b0c___ @ 0x1C0178054 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0a5c7c574f838d795b524a8285656b0.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1de4f818a1f09ece21074042c9210d33___ @ 0x1C01780CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1de4f818a1f09ece21074042c9210d3.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d492602214428f42790342432e548b0___ @ 0x1C017813C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2d492602214428f42790342432e548b.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_87fe1ee76b6ec0ed06fa31299f815b2c___ @ 0x1C01781A8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_87fe1ee76b6ec0ed06fa31299f815b2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_966e64e8b98a5065296564d3c4ff405d___ @ 0x1C0178214 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_966e64e8b98a5065296564d3c4ff405.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a4527471b23632dc499988fb56c70a45___ @ 0x1C0178284 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a4527471b23632dc499988fb56c70a4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b69d150a44c175d7f3cd7ca8189b0408___ @ 0x1C0178308 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b69d150a44c175d7f3cd7ca8189b040.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ec61e323a127935aabe76e60ce943c23___ @ 0x1C0178378 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ec61e323a127935aabe76e60ce943c2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ff2564ce1b99d5539a61c20bbb68afd8___ @ 0x1C01783EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ff2564ce1b99d5539a61c20bbb68afd.c)
 */

char __fastcall DirectComposition::CCompositionPointLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionPointLightMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d492602214428f42790342432e548b0___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_87fe1ee76b6ec0ed06fa31299f815b2c___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ff2564ce1b99d5539a61c20bbb68afd8___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ec61e323a127935aabe76e60ce943c23___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0a5c7c574f838d795b524a8285656b0c___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a4527471b23632dc499988fb56c70a45___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1de4f818a1f09ece21074042c9210d33___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_966e64e8b98a5065296564d3c4ff405d___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x10000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b69d150a44c175d7f3cd7ca8189b0408___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x10000u;
      return 1;
    }
  }
  return v4;
}
