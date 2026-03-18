/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowReceiverMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0173060
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AEF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_025b13ed1ecb035caa5c2a369f9d42fb___ @ 0x1C0172E60 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_025b13ed1ecb035caa5c2a369f9d42f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1ac4f32caaa3f9ef1f1d66809cc5749e___ @ 0x1C0172ED8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1ac4f32caaa3f9ef1f1d66809cc5749.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43aebe94607f8db642fae6d3b0f9fa35___ @ 0x1C0172F44 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_43aebe94607f8db642fae6d3b0f9fa3.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_91e73054727983dd0c7f638435acbf42___ @ 0x1C0172FB0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_91e73054727983dd0c7f638435acbf4.c)
 */

char __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProjectedShadowReceiverMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_025b13ed1ecb035caa5c2a369f9d42fb___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1ac4f32caaa3f9ef1f1d66809cc5749e___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43aebe94607f8db642fae6d3b0f9fa35___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_91e73054727983dd0c7f638435acbf42___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x400u;
      return 1;
    }
  }
  return v4;
}
