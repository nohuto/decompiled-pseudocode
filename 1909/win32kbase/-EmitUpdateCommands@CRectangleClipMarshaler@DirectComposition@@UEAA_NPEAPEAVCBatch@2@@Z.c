/*
 * XREFs of ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007AF0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9d___ @ 0x1C0006914 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bb34648711a931ab5ad1c149860d250a___ @ 0x1C000783C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bb34648711a931ab5ad1c149860d250.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1c1a09fe0a8665e2e9f0d097516b5cc3___ @ 0x1C00078A8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1c1a09fe0a8665e2e9f0d097516b5cc.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_17e7e5f163a05a9809000ff61a5037c8___ @ 0x1C0007914 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_17e7e5f163a05a9809000ff61a5037c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1e021b8262ef7ca9dfd23d962b3a4e29___ @ 0x1C0007980 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1e021b8262ef7ca9dfd23d962b3a4e2.c)
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007C20 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb5297425___ @ 0x1C01BB7D0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb529742.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f146___ @ 0x1C01BB840 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f14.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitUpdateCommands(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  bool updated; // al
  char v6; // si
  int v7; // eax
  int v8; // ebx
  char v9; // al
  int v11; // eax
  DirectComposition::CRectangleClipMarshaler *v12; // [rsp+40h] [rbp+20h] BYREF

  v2 = *((_BYTE *)this + 129);
  updated = DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2);
  v6 = 0;
  if ( v2 )
  {
    if ( !updated )
      return v6;
    v11 = *((_DWORD *)this + 4);
    v12 = this;
    if ( (v11 & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9d___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x800u;
      v11 = *((_DWORD *)this + 4);
    }
    v12 = this;
    if ( (v11 & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb5297425___(
                               this,
                               a2,
                               &v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x1000u;
      v11 = *((_DWORD *)this + 4);
    }
    v8 = 0x4000;
    v12 = this;
    if ( (v11 & 0x4000) != 0 )
      return 1;
    v9 = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f146___(
           this,
           a2,
           &v12);
  }
  else
  {
    if ( !updated )
      return v6;
    v7 = *((_DWORD *)this + 4);
    v12 = this;
    if ( (v7 & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9d___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x800u;
      v7 = *((_DWORD *)this + 4);
    }
    v12 = this;
    if ( (v7 & 0x1000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bb34648711a931ab5ad1c149860d250a___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x1000u;
      v7 = *((_DWORD *)this + 4);
    }
    v12 = this;
    if ( (v7 & 0x2000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1c1a09fe0a8665e2e9f0d097516b5cc3___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x2000u;
      v7 = *((_DWORD *)this + 4);
    }
    v12 = this;
    if ( (v7 & 0x4000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_17e7e5f163a05a9809000ff61a5037c8___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x4000u;
      v7 = *((_DWORD *)this + 4);
    }
    v8 = 0x8000;
    v12 = this;
    if ( (v7 & 0x8000) != 0 )
      return 1;
    v9 = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1e021b8262ef7ca9dfd23d962b3a4e29___(
           (__int64)this,
           a2,
           (__int64)&v12);
  }
  if ( v9 )
  {
    *((_DWORD *)this + 4) |= v8;
    return 1;
  }
  return v6;
}
