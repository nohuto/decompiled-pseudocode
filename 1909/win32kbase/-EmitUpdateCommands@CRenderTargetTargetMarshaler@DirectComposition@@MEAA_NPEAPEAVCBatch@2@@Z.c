/*
 * XREFs of ?EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009D720 (-EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreate@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009D7A8 (-EmitCreate@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d10e825e451f84c7e0451abf116f1b4c___ @ 0x1C01A97F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d10e825e451f84c7e0451abf116f1b4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fe79cb615085386046192d173337e690___ @ 0x1C01A9864 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fe79cb615085386046192d173337e69.c)
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CRenderTargetTargetMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CRenderTargetTargetMarshaler::EmitCreate(this, a2)
    && DirectComposition::CRenderTargetTargetMarshaler::EmitUpdateTransform(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fe79cb615085386046192d173337e690___(
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
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d10e825e451f84c7e0451abf116f1b4c___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    return 1;
  }
  return v4;
}
