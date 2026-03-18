/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0172A70
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AEF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_00262b49523650e09d1e1aed4def448c___ @ 0x1C01726F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_00262b49523650e09d1e1aed4def448.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12236cd2b54459241b1fd3a22154e386___ @ 0x1C0172764 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_12236cd2b54459241b1fd3a22154e38.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_15ca84bc231ebbc84736ef8e23efc0d9___ @ 0x1C01727D0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_15ca84bc231ebbc84736ef8e23efc0d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_821c3da96d3851801441906b23bf8415___ @ 0x1C017283C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_821c3da96d3851801441906b23bf841.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b0f3af987ca900b80e7372c67919419c___ @ 0x1C01728B4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b0f3af987ca900b80e7372c67919419.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bd50c7104244a13b2df4a229a9ea3c53___ @ 0x1C017292C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bd50c7104244a13b2df4a229a9ea3c5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e3e6ac87be48555833e3fc42910ddc58___ @ 0x1C0172998 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e3e6ac87be48555833e3fc42910ddc5.c)
 */

char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProjectedShadowCasterMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12236cd2b54459241b1fd3a22154e386___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_821c3da96d3851801441906b23bf8415___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_15ca84bc231ebbc84736ef8e23efc0d9___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b0f3af987ca900b80e7372c67919419c___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_00262b49523650e09d1e1aed4def448c___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bd50c7104244a13b2df4a229a9ea3c53___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e3e6ac87be48555833e3fc42910ddc58___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x2000u;
      return 1;
    }
  }
  return v4;
}
