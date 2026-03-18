/*
 * XREFs of ?EmitUpdateCommands@CTextBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0179570
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_723b5cbe0e245933e50d3d61f9d81982___ @ 0x1C0179308 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_723b5cbe0e245933e50d3d61f9d8198.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b21b463bed82e6ea97835b73e3b36cdf___ @ 0x1C0179374 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b21b463bed82e6ea97835b73e3b36cd.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d2896d53fcc3c3cbb5e22aadc39d5960___ @ 0x1C01793E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d2896d53fcc3c3cbb5e22aadc39d596.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f4dcb65d757ae1567cbf9415f49b4869___ @ 0x1C017944C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f4dcb65d757ae1567cbf9415f49b486.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f916c96bf036f6ff76b93b361034be05___ @ 0x1C01794C0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f916c96bf036f6ff76b93b361034be0.c)
 *     ?EmitUpdateFontNameCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0179694 (-EmitUpdateFontNameCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateTextCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0179784 (-EmitUpdateTextCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CTextBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CTextBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CTextBrushMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CTextBrushMarshaler::EmitUpdateTextCommand(this, a2)
    && DirectComposition::CTextBrushMarshaler::EmitUpdateFontNameCommand(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b21b463bed82e6ea97835b73e3b36cdf___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f4dcb65d757ae1567cbf9415f49b4869___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f916c96bf036f6ff76b93b361034be05___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_723b5cbe0e245933e50d3d61f9d81982___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d2896d53fcc3c3cbb5e22aadc39d5960___(
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
