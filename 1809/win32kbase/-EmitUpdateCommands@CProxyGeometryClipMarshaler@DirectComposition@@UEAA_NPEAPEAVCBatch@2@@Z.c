/*
 * XREFs of ?EmitUpdateCommands@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017DF70
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008E40 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_19bffa6f9ea53a52ab9b06333929ef19___ @ 0x1C017DE7C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_19bffa6f9ea53a52ab9b06333929ef1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c1feae7655e16b7d19d6bd670d4efb4a___ @ 0x1C017DEF4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c1feae7655e16b7d19d6bd670d4efb4.c)
 */

char __fastcall DirectComposition::CProxyGeometryClipMarshaler::EmitUpdateCommands(
        DirectComposition::CProxyGeometryClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProxyGeometryClipMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_19bffa6f9ea53a52ab9b06333929ef19___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c1feae7655e16b7d19d6bd670d4efb4a___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
