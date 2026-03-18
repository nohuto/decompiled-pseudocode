/*
 * XREFs of ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B900
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f34c125a416918fcdef64c54903ef373___ @ 0x1C000929C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f34c125a416918fcdef64c54903ef37.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b66204dcb5c2f5f8345eb77005edeb7___ @ 0x1C0009308 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4b66204dcb5c2f5f8345eb77005edeb.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___ @ 0x1C000BB6C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298.c)
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
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b66204dcb5c2f5f8345eb77005edeb7___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
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
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
                             this,
                             a2,
                             &v7) )
      return v4;
    *((_DWORD *)this + 4) &= ~0x2000u;
    v3 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v3 & 0x4000) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f34c125a416918fcdef64c54903ef373___(
         (__int64)this,
         a2,
         (__int64)&v7) )
  {
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return v4;
}
