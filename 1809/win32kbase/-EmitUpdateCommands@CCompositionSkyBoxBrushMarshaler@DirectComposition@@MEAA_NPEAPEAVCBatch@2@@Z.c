/*
 * XREFs of ?EmitUpdateCommands@CCompositionSkyBoxBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0172330
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_17f1516bf9dea451f2a3e56d5fea5485___ @ 0x1C017204C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_17f1516bf9dea451f2a3e56d5fea548.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2e42c1755cfb10c2a263ca81167778de___ @ 0x1C01720B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2e42c1755cfb10c2a263ca81167778d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b02f4647791fec3c1ac7c34c4d9463___ @ 0x1C0172130 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_43b02f4647791fec3c1ac7c34c4d946.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fcd48a30ebdcdafb44b04b4dc4b39c0___ @ 0x1C01721D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7fcd48a30ebdcdafb44b04b4dc4b39c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9b15bfb1a3b4d2513dafcb558317474b___ @ 0x1C0172240 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9b15bfb1a3b4d2513dafcb558317474.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d36fcc3cecb704762198487b14a5c919___ @ 0x1C01722B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d36fcc3cecb704762198487b14a5c91.c)
 */

char __fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CCompositionSkyBoxBrushMarshaler *v7; // [rsp+30h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d36fcc3cecb704762198487b14a5c919___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fcd48a30ebdcdafb44b04b4dc4b39c0___(
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
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b02f4647791fec3c1ac7c34c4d9463___(
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
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_17f1516bf9dea451f2a3e56d5fea5485___(
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
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9b15bfb1a3b4d2513dafcb558317474b___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x400) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2e42c1755cfb10c2a263ca81167778de___(
         (__int64)this,
         a2,
         (__int64)&v7) )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return v3;
}
