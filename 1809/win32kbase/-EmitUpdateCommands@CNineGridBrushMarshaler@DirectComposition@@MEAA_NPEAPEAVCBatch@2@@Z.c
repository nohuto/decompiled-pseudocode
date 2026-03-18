/*
 * XREFs of ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AB30
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_39d47258e4267dae8e6289b7b970073c___ @ 0x1C00088EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_39d47258e4267dae8e6289b7b970073.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b2334d708dd4af744423568a4d3c8ab2___ @ 0x1C0008958 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b2334d708dd4af744423568a4d3c8ab.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___ @ 0x1C000ADA0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v3; // ecx
  char v4; // di
  DirectComposition::CNineGridBrushMarshaler *v7; // [rsp+30h] [rbp+10h] BYREF

  v7 = this;
  v3 = *((_DWORD *)this + 4);
  v4 = 0;
  if ( (v3 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b2334d708dd4af744423568a4d3c8ab2___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x20u;
    v3 = *((_DWORD *)this + 4);
  }
  HIDWORD(v7) = *((_DWORD *)this + 16);
  LODWORD(v7) = 3;
  if ( (v3 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x40u;
    v3 = *((_DWORD *)this + 4);
  }
  HIDWORD(v7) = *((_DWORD *)this + 18);
  LODWORD(v7) = 8;
  if ( (v3 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x80u;
    v3 = *((_DWORD *)this + 4);
  }
  HIDWORD(v7) = *((_DWORD *)this + 20);
  LODWORD(v7) = 5;
  if ( (v3 & 0x100) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x100u;
    v3 = *((_DWORD *)this + 4);
  }
  HIDWORD(v7) = *((_DWORD *)this + 22);
  LODWORD(v7) = 0;
  if ( (v3 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x200u;
    v3 = *((_DWORD *)this + 4);
  }
  HIDWORD(v7) = *((_DWORD *)this + 17);
  LODWORD(v7) = 4;
  if ( (v3 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x400u;
    v3 = *((_DWORD *)this + 4);
  }
  HIDWORD(v7) = *((_DWORD *)this + 19);
  LODWORD(v7) = 9;
  if ( (v3 & 0x800) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x800u;
    v3 = *((_DWORD *)this + 4);
  }
  HIDWORD(v7) = *((_DWORD *)this + 21);
  LODWORD(v7) = 6;
  if ( (v3 & 0x1000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v3 = *((_DWORD *)this + 4);
  }
  HIDWORD(v7) = *((_DWORD *)this + 23);
  LODWORD(v7) = 1;
  if ( (v3 & 0x2000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x2000u;
    v3 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v3 & 0x4000) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_39d47258e4267dae8e6289b7b970073c___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x4000u;
  }
  return 1;
}
