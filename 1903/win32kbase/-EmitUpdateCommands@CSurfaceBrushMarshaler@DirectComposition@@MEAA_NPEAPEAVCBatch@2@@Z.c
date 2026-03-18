/*
 * XREFs of ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C6B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8377ccd3516888714e859ee25d32e064___ @ 0x1C000A8E8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8377ccd3516888714e859ee25d32e06.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8ec5a6a25547275f2a5b1adaececd0af___ @ 0x1C000A960 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8ec5a6a25547275f2a5b1adaececd0a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f10f2e51892fa450f1087e8611bbebfe___ @ 0x1C000AA64 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f10f2e51892fa450f1087e8611bbebf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_77cdd7c4639e0838e5748d2b6255a80a___ @ 0x1C000AAD0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_77cdd7c4639e0838e5748d2b6255a80.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d5b4e224a8459b45f36348a3014f7bb1___ @ 0x1C000C7D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d5b4e224a8459b45f36348a3014f7bb.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc71___ @ 0x1C01B2968 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50d___ @ 0x1C01B29D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CSurfaceBrushMarshaler *v7; // [rsp+30h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d5b4e224a8459b45f36348a3014f7bb1___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8377ccd3516888714e859ee25d32e064___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f10f2e51892fa450f1087e8611bbebfe___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_77cdd7c4639e0838e5748d2b6255a80a___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8ec5a6a25547275f2a5b1adaececd0af___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc71___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50d___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
  }
  return 1;
}
