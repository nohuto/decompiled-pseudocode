/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004150
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_734b591989f81d80bd815dbe5a0542de___ @ 0x1C00041FC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_734b591989f81d80bd815dbe5a0542d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7168859f3a17fd1956cafa84b90a28e0___ @ 0x1C0004274 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7168859f3a17fd1956cafa84b90a28e.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CF38 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6dd72b464171e298fe81e6619aceac6f___ @ 0x1C01AF958 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6dd72b464171e298fe81e6619aceac6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_71fbb6bf059fb285cfd505449d814680___ @ 0x1C01AF9D0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_71fbb6bf059fb285cfd505449d81468.c)
 */

char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProjectedShadowCasterMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_734b591989f81d80bd815dbe5a0542de___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7168859f3a17fd1956cafa84b90a28e0___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6dd72b464171e298fe81e6619aceac6f___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_71fbb6bf059fb285cfd505449d814680___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    return 1;
  }
  return v4;
}
