/*
 * XREFs of ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801DEA58
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z @ 0x1801CB5B4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z.c)
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x180231FA0 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1801DE404 (-AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@.c)
 *     ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x1801DE618 (-FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundati.c)
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801DE7D0 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 *     ?IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x1801DF068 (-IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z.c)
 *     ?PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x1801DF170 (-PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z.c)
 */

__int64 __fastcall CVisualDepthGeometry::GetRelativeOrder(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  const struct CVisualDepthGeometry *v5; // rdx
  CVisualDepthGeometry *v6; // rcx
  bool v7; // cf
  int v9; // xmm6_4
  int v10; // xmm7_4
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C8h]
  int v14; // [rsp+44h] [rbp-C4h]
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh]
  int v17; // [rsp+50h] [rbp-B8h]
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+5Ch] [rbp-ACh]
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  float v21; // [rsp+68h] [rbp-A0h]
  int v22; // [rsp+70h] [rbp-98h] BYREF
  float v23; // [rsp+78h] [rbp-90h]
  _BYTE v24[96]; // [rsp+88h] [rbp-80h] BYREF

  if ( *(float *)(a2 + 20) > *(float *)(a1 + 8)
    && *(float *)(a1 + 20) > *(float *)(a2 + 8)
    && *(float *)(a2 + 24) > *(float *)(a1 + 12)
    && *(float *)(a1 + 24) > *(float *)(a2 + 12) )
  {
    v18 = 0;
    v19 = 0;
    v4 = 0;
    if ( CVisualDepthGeometry::FindOverlappingPoint(
           (CVisualDepthGeometry *)a1,
           (const struct CVisualDepthGeometry *)a2,
           (struct Windows::Foundation::Numerics::float2 *)&v18) )
    {
      if ( *(float *)(a2 + 16) > *(float *)(a1 + 28) )
        return 1LL;
      if ( *(float *)(a1 + 16) > *(float *)(a2 + 28) )
        return 0LL;
      if ( CVisualDepthGeometry::IsCoplanar((CVisualDepthGeometry *)a1, (const struct CVisualDepthGeometry *)a2)
        || (v11 = 0,
            CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
              v6,
              v5,
              (struct Windows::Foundation::Numerics::float3 *)v24,
              &v11),
            CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
              (CVisualDepthGeometry *)a2,
              (const struct CVisualDepthGeometry *)a1,
              (struct Windows::Foundation::Numerics::float3 *)v24,
              &v11),
            v11 > 0)
        && !CVisualDepthGeometry::AreVisualsAbutting(
              (CVisualDepthGeometry *)a1,
              (const struct CVisualDepthGeometry *)a2,
              (const struct Windows::Foundation::Numerics::float3 *)v24,
              v11) )
      {
        v7 = *(_DWORD *)(a1 + 32) < *(_DWORD *)(a2 + 32);
LABEL_10:
        LOBYTE(v4) = v7;
        return v4;
      }
      v9 = v18;
      v10 = v19;
      v21 = 0.0;
      v23 = 0.0;
      v12 = 0;
      v13 = 0;
      v17 = 0;
      v15 = v18;
      v16 = v19;
      v14 = 1065353216;
      if ( PlaneLineIntersection(
             (const struct Windows::Foundation::Numerics::float3 *)(a1 + 148),
             (const struct Windows::Foundation::Numerics::float3 *)(a1 + 160),
             (const struct Windows::Foundation::Numerics::float3 *)&v15,
             (const struct Windows::Foundation::Numerics::float3 *)&v12,
             (struct Windows::Foundation::Numerics::float3 *)&v20) )
      {
        v15 = 0;
        v16 = 0;
        v14 = 0;
        v12 = v9;
        v13 = v10;
        v17 = 1065353216;
        if ( PlaneLineIntersection(
               (const struct Windows::Foundation::Numerics::float3 *)(a2 + 148),
               (const struct Windows::Foundation::Numerics::float3 *)(a2 + 160),
               (const struct Windows::Foundation::Numerics::float3 *)&v12,
               (const struct Windows::Foundation::Numerics::float3 *)&v15,
               (struct Windows::Foundation::Numerics::float3 *)&v22) )
        {
          if ( v21 <= v23 )
          {
            if ( v23 <= v21 )
            {
              v7 = *(_DWORD *)(a1 + 32) < *(_DWORD *)(a2 + 32);
              goto LABEL_10;
            }
            return 1LL;
          }
          return 0LL;
        }
      }
    }
  }
  return 2LL;
}
