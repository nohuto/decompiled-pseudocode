/*
 * XREFs of ?EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008420
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_11688ceda91aae2628d29c038e59b078___ @ 0x1C0004A88 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_11688ceda91aae2628d29c038e59b07.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_494684728630587b3dd76e3bf1e0d976___ @ 0x1C000832C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_494684728630587b3dd76e3bf1e0d97.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8c877d84863cd987b7f24acaee746258___ @ 0x1C00083AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8c877d84863cd987b7f24acaee74625.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9786e05e9c7eca17e9f4f7e905400aa9___ @ 0x1C000853C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9786e05e9c7eca17e9f4f7e905400aa.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1a86feb452a1147b26df5cd035df9111___ @ 0x1C00085A8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1a86feb452a1147b26df5cd035df911.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AEF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_357e01a1ac8aba050799654776ce6193___ @ 0x1C0170DE8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_357e01a1ac8aba050799654776ce619.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::EmitUpdateCommands(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CDropShadowMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9786e05e9c7eca17e9f4f7e905400aa9___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1a86feb452a1147b26df5cd035df9111___(
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
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_357e01a1ac8aba050799654776ce6193___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_494684728630587b3dd76e3bf1e0d976___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8c877d84863cd987b7f24acaee746258___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_11688ceda91aae2628d29c038e59b078___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
    }
    return 1;
  }
  return v4;
}
