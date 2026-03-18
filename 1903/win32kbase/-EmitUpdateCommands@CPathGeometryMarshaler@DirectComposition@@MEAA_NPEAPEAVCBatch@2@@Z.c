/*
 * XREFs of ?EmitUpdateCommands@CPathGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B3C30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A850 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7b3a3b82b7f39f27af6e35449b019669___ @ 0x1C01B3B98 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7b3a3b82b7f39f27af6e35449b01966.c)
 */

char __fastcall DirectComposition::CPathGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CPathGeometryMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CPathGeometryMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v7 = this;
    if ( v5 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7b3a3b82b7f39f27af6e35449b019669___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x800u;
      return 1;
    }
  }
  return v4;
}
