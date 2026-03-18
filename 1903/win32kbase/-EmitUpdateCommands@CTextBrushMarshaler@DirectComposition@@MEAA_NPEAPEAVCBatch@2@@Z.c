/*
 * XREFs of ?EmitUpdateCommands@CTextBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B7DF0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1c937bbf4cdee88434bb505aced350b4___ @ 0x1C01B7B90 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1c937bbf4cdee88434bb505aced350b.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_322325c2e4fc2523de5bfd2fcb59db7b___ @ 0x1C01B7BFC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_322325c2e4fc2523de5bfd2fcb59db7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cb3b7304ad05c1db41b596a171816a8___ @ 0x1C01B7C68 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7cb3b7304ad05c1db41b596a171816a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8cfe644102fa91a287b5ef4cfdcbedf9___ @ 0x1C01B7CD4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8cfe644102fa91a287b5ef4cfdcbedf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c7ace4afd60670039d1282f8ded8494c___ @ 0x1C01B7D40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c7ace4afd60670039d1282f8ded8494.c)
 *     ?EmitUpdateFontNameCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B7F14 (-EmitUpdateFontNameCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateTextCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8004 (-EmitUpdateTextCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cb3b7304ad05c1db41b596a171816a8___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c7ace4afd60670039d1282f8ded8494c___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1c937bbf4cdee88434bb505aced350b4___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_322325c2e4fc2523de5bfd2fcb59db7b___(
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
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8cfe644102fa91a287b5ef4cfdcbedf9___(
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
