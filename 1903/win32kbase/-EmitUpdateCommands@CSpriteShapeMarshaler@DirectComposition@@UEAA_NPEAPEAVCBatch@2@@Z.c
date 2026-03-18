/*
 * XREFs of ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B32B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484def___ @ 0x1C01B0CCC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484de.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e308___ @ 0x1C01B2DBC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e30.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5ce2fe6f990ac47f2725c8575fa29775___ @ 0x1C01B2E28 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5ce2fe6f990ac47f2725c8575fa2977.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4cf___ @ 0x1C01B2EA0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___ @ 0x1C01B2F0C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38e___ @ 0x1C01B3028 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b3200f5ab0f8d2eca74dd741cf5a562d___ @ 0x1C01B3098 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b3200f5ab0f8d2eca74dd741cf5a562.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c2137752e009b9f25848dcb36ca92aaa___ @ 0x1C01B3110 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c2137752e009b9f25848dcb36ca92aa.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1e___ @ 0x1C01B3188 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e5493___ @ 0x1C01B3214 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e549.c)
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  void *v7; // [rsp+20h] [rbp-10h]
  DirectComposition::CSpriteShapeMarshaler *v8; // [rsp+40h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484def___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c2137752e009b9f25848dcb36ca92aaa___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5ce2fe6f990ac47f2725c8575fa29775___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b3200f5ab0f8d2eca74dd741cf5a562d___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1e___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___(
            (__int64)this,
            a2,
            (unsigned int *)this + 21,
            *((_DWORD *)this + 20),
            v7,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e5493___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x1000) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4cf___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x2000) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e308___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x2000u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x4000) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38e___(
         (__int64)this,
         a2,
         (__int64)&v8) )
  {
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return v3;
}
