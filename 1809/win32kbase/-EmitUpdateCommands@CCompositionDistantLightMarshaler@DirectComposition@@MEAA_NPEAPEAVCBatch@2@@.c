/*
 * XREFs of ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00730D0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b92bb32ca5d06353bb545b00ce7f57df___ @ 0x1C0073180 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b92bb32ca5d06353bb545b00ce7f57d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b6b37b5000020658850d22c286c037cc___ @ 0x1C00731F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b6b37b5000020658850d22c286c037c.c)
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00734A0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5a1a70e2e40db8408cadee406e56e5cb___ @ 0x1C0177E98 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5a1a70e2e40db8408cadee406e56e5c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bc2b8555106c0703183fac629d407b2b___ @ 0x1C0177F04 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bc2b8555106c0703183fac629d407b2.c)
 */

char __fastcall DirectComposition::CCompositionDistantLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionDistantLightMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bc2b8555106c0703183fac629d407b2b___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b92bb32ca5d06353bb545b00ce7f57df___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b6b37b5000020658850d22c286c037cc___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5a1a70e2e40db8408cadee406e56e5cb___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    return 1;
  }
  return v4;
}
