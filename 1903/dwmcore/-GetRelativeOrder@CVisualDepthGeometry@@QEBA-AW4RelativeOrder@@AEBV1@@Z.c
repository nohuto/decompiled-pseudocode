/*
 * XREFs of ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008ADC
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180008960 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18025C8E8 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x18020D1E0 (-AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@.c)
 *     ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x18020D3F4 (-FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundati.c)
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18020D5AC (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 *     ?IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x18020D92C (-IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z.c)
 *     ?PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x18020DA34 (-PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z.c)
 *     ?TreeOrder@CVisualDepthGeometry@@AEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x18020DB14 (-TreeOrder@CVisualDepthGeometry@@AEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 */

__int64 __fastcall CVisualDepthGeometry::GetRelativeOrder(__int64 a1, __int64 a2)
{
  const struct CVisualDepthGeometry *v5; // rdx
  CVisualDepthGeometry *v6; // rcx
  int v7; // xmm6_4
  int v8; // xmm7_4
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h]
  int v12; // [rsp+44h] [rbp-C4h]
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh]
  int v15; // [rsp+50h] [rbp-B8h]
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+5Ch] [rbp-ACh]
  int v18; // [rsp+60h] [rbp-A8h] BYREF
  float v19; // [rsp+68h] [rbp-A0h]
  int v20; // [rsp+70h] [rbp-98h] BYREF
  float v21; // [rsp+78h] [rbp-90h]
  _BYTE v22[96]; // [rsp+88h] [rbp-80h] BYREF

  if ( *(float *)(a2 + 20) <= *(float *)(a1 + 8) )
    return 2LL;
  if ( *(float *)(a1 + 20) <= *(float *)(a2 + 8) )
    return 2LL;
  if ( *(float *)(a2 + 24) <= *(float *)(a1 + 12) )
    return 2LL;
  if ( *(float *)(a1 + 24) <= *(float *)(a2 + 12) )
    return 2LL;
  v16 = 0;
  v17 = 0;
  if ( !CVisualDepthGeometry::FindOverlappingPoint(
          (CVisualDepthGeometry *)a1,
          (const struct CVisualDepthGeometry *)a2,
          (struct Windows::Foundation::Numerics::float2 *)&v16) )
    return 2LL;
  if ( *(float *)(a2 + 16) > *(float *)(a1 + 28) )
    return 1LL;
  if ( *(float *)(a1 + 16) <= *(float *)(a2 + 28) )
  {
    if ( CVisualDepthGeometry::IsCoplanar((CVisualDepthGeometry *)a1, (const struct CVisualDepthGeometry *)a2) )
      return CVisualDepthGeometry::TreeOrder(v6, v5);
    v9 = 0;
    CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
      v6,
      v5,
      (struct Windows::Foundation::Numerics::float3 *)v22,
      &v9);
    CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
      (CVisualDepthGeometry *)a2,
      (const struct CVisualDepthGeometry *)a1,
      (struct Windows::Foundation::Numerics::float3 *)v22,
      &v9);
    if ( v9 > 0
      && !CVisualDepthGeometry::AreVisualsAbutting(
            (CVisualDepthGeometry *)a1,
            (const struct CVisualDepthGeometry *)a2,
            (const struct Windows::Foundation::Numerics::float3 *)v22,
            v9) )
    {
LABEL_12:
      v5 = (const struct CVisualDepthGeometry *)a2;
      v6 = (CVisualDepthGeometry *)a1;
      return CVisualDepthGeometry::TreeOrder(v6, v5);
    }
    v7 = v16;
    v8 = v17;
    v19 = 0.0;
    v21 = 0.0;
    v10 = 0;
    v11 = 0;
    v15 = 0;
    v13 = v16;
    v14 = v17;
    v12 = 1065353216;
    if ( PlaneLineIntersection(
           (const struct Windows::Foundation::Numerics::float3 *)(a1 + 148),
           (const struct Windows::Foundation::Numerics::float3 *)(a1 + 160),
           (const struct Windows::Foundation::Numerics::float3 *)&v13,
           (const struct Windows::Foundation::Numerics::float3 *)&v10,
           (struct Windows::Foundation::Numerics::float3 *)&v18) )
    {
      v13 = 0;
      v14 = 0;
      v12 = 0;
      v10 = v7;
      v11 = v8;
      v15 = 1065353216;
      if ( PlaneLineIntersection(
             (const struct Windows::Foundation::Numerics::float3 *)(a2 + 148),
             (const struct Windows::Foundation::Numerics::float3 *)(a2 + 160),
             (const struct Windows::Foundation::Numerics::float3 *)&v10,
             (const struct Windows::Foundation::Numerics::float3 *)&v13,
             (struct Windows::Foundation::Numerics::float3 *)&v20) )
      {
        if ( v19 <= v21 )
        {
          if ( v21 <= v19 )
            goto LABEL_12;
          return 1LL;
        }
        return 0LL;
      }
    }
    return 2LL;
  }
  return 0LL;
}
