/*
 * XREFs of ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8A50
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_29adcac39ea19e6de2da49cd83e4c4e0___ @ 0x1C01B8794 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_29adcac39ea19e6de2da49cd83e4c4e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2caacd5cadbf6d1739fafc6cbb8050e2___ @ 0x1C01B8804 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2caacd5cadbf6d1739fafc6cbb8050e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3e1c0784b5db00eeb07342c46864fefb___ @ 0x1C01B887C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3e1c0784b5db00eeb07342c46864fef.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6cdaba966813d1d56f3a6d55481d2e02___ @ 0x1C01B88F4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6cdaba966813d1d56f3a6d55481d2e0.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_76b508a041e1bc9fb3610448ca41705f___ @ 0x1C01B8964 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_76b508a041e1bc9fb3610448ca41705.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9f46f5a392660f496b40f1744944a1e1___ @ 0x1C01B89D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9f46f5a392660f496b40f1744944a1e.c)
 */

char __fastcall DirectComposition::CCompositionGlyphRunMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionGlyphRunMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CCompositionGlyphRunMarshaler *v7; // [rsp+30h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2caacd5cadbf6d1739fafc6cbb8050e2___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3e1c0784b5db00eeb07342c46864fefb___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_29adcac39ea19e6de2da49cd83e4c4e0___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_76b508a041e1bc9fb3610448ca41705f___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6cdaba966813d1d56f3a6d55481d2e02___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x400) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9f46f5a392660f496b40f1744944a1e1___(
         (__int64)this,
         a2,
         (__int64)&v7) )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return v3;
}
