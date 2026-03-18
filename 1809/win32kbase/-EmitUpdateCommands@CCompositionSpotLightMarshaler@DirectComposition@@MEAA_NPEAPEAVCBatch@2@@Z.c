/*
 * XREFs of ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0073300
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00734A0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed26dc4558b545ac7fd802dbdce56adb___ @ 0x1C0073734 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ed26dc4558b545ac7fd802dbdce56ad.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_611c2d247658ce5b747d7b0ec076ff9a___ @ 0x1C00737A4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_611c2d247658ce5b747d7b0ec076ff9.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d2c239b96c010858d8198edff56f29de___ @ 0x1C0073814 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d2c239b96c010858d8198edff56f29d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e30eee62978dd3bcb1287638ba2c31b5___ @ 0x1C007388C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e30eee62978dd3bcb1287638ba2c31b.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_07b7358b6c833044707b1e043eb45112___ @ 0x1C01789D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_07b7358b6c833044707b1e043eb4511.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2ec43e7a0f608a81a5f650be1c28b60f___ @ 0x1C0178A40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2ec43e7a0f608a81a5f650be1c28b60.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_48e427cb93712b5508a6496a2d3d31db___ @ 0x1C0178AB0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_48e427cb93712b5508a6496a2d3d31d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_53800ea0410bae59dd2eb569d0d90e85___ @ 0x1C0178B28 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_53800ea0410bae59dd2eb569d0d90e8.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9f39bb051d838eb97bf84367ce2fb8b6___ @ 0x1C0178B98 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9f39bb051d838eb97bf84367ce2fb8b.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a0697ee2515f329a79557201539cc733___ @ 0x1C0178C08 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a0697ee2515f329a79557201539cc73.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d06dcd6275fd82bf146c94f047ba67f8___ @ 0x1C0178C88 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d06dcd6275fd82bf146c94f047ba67f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d3e873a4a78e3ec57fc9c029066176a4___ @ 0x1C0178CF4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d3e873a4a78e3ec57fc9c029066176a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d5842fc3b23def99b4920fc8e2a0eef4___ @ 0x1C0178D74 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d5842fc3b23def99b4920fc8e2a0eef.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d87071e350df8be9b08f987133abb6b5___ @ 0x1C0178DE4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d87071e350df8be9b08f987133abb6b.c)
 */

char __fastcall DirectComposition::CCompositionSpotLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionSpotLightMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_07b7358b6c833044707b1e043eb45112___(
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
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e30eee62978dd3bcb1287638ba2c31b5___(
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
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d06dcd6275fd82bf146c94f047ba67f8___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a0697ee2515f329a79557201539cc733___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d2c239b96c010858d8198edff56f29de___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_611c2d247658ce5b747d7b0ec076ff9a___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d87071e350df8be9b08f987133abb6b5___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x8000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2ec43e7a0f608a81a5f650be1c28b60f___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x10000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d3e873a4a78e3ec57fc9c029066176a4___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x10000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x20000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed26dc4558b545ac7fd802dbdce56adb___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x20000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x40000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_48e427cb93712b5508a6496a2d3d31db___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x80000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d5842fc3b23def99b4920fc8e2a0eef4___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9f39bb051d838eb97bf84367ce2fb8b6___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_53800ea0410bae59dd2eb569d0d90e85___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200000u;
    }
    return 1;
  }
  return v4;
}
