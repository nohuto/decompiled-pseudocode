/*
 * XREFs of ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x180020A80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801E2F30 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionSpotLight::IsValid(
        CCompositionSpotLight *this,
        const struct CVisual **a2,
        const struct CVisual *a3)
{
  const struct CVisual *v5; // rax
  const struct CVisual *v6; // rcx
  const struct CVisual *v7; // r9
  const struct Windows::Foundation::Numerics::float4x4 *v9; // rdx
  float v10; // xmm0_4
  float v11; // xmm3_4
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  v5 = (const struct CVisual *)(*(__int64 (__fastcall **)(CCompositionSpotLight *))(*(_QWORD *)this + 168LL))(this);
  v6 = v5;
  v7 = v5;
  if ( v5 )
  {
    while ( (*((_BYTE *)v6 + 95) & 8) != 0 )
    {
      if ( v6 == a2[3] )
      {
        if ( a3 == v5 )
        {
LABEL_13:
          v13 = 0;
          if ( (int)CVisual::GetWorldTransform(v5, a2, 3LL, v12, 0LL, 0LL) >= 0 )
          {
            v10 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v12, v9);
            v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - 0.0)) & _xmm);
            if ( v11 >= 0.00000011920929 )
            {
              if ( _finite((float)(1.0 / v10)) )
                return 1;
            }
          }
        }
        else
        {
          while ( a3 )
          {
            a3 = (const struct CVisual *)*((_QWORD *)a3 + 10);
            if ( a3 == v5 )
              goto LABEL_13;
          }
        }
        return 0;
      }
      if ( v7 )
      {
        v7 = (const struct CVisual *)*((_QWORD *)v7 + 10);
        if ( v7 )
          v7 = (const struct CVisual *)*((_QWORD *)v7 + 10);
      }
      if ( v6 != v7 )
      {
        v6 = (const struct CVisual *)*((_QWORD *)v6 + 10);
        if ( v6 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}
