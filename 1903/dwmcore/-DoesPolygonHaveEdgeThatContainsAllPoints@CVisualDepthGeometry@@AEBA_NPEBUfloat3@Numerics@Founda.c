/*
 * XREFs of ?DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x18020D34C
 * Callers:
 *     ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x18020D1E0 (-AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@.c)
 * Callees:
 *     ?DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z @ 0x18020D2DC (-DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z.c)
 */

char __fastcall CVisualDepthGeometry::DoesPolygonHaveEdgeThatContainsAllPoints(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        int a3)
{
  int v5; // r9d
  __int64 v6; // r11
  const struct Windows::Foundation::Numerics::float2 *v7; // rdx
  const struct Windows::Foundation::Numerics::float2 *v8; // r8
  const struct Windows::Foundation::Numerics::float3 *v9; // r10
  int v10; // xmm1_4
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // r10
  float v14; // xmm1_4
  int v16; // [rsp+58h] [rbp+20h] BYREF
  int v17; // [rsp+5Ch] [rbp+24h]

  v5 = 0;
  v6 = a3;
  do
  {
    v7 = (CVisualDepthGeometry *)((char *)this + 16 * v5 + 84);
    if ( v6 <= 0 )
      return 1;
    v8 = (const struct Windows::Foundation::Numerics::float2 *)((char *)v7 + 8);
    v9 = a2;
    while ( 1 )
    {
      v10 = *((_DWORD *)v9 + 1);
      v16 = *(_DWORD *)v9;
      v17 = v10;
      v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(DistSquaredToLine((const struct Windows::Foundation::Numerics::float2 *)&v16, v7, v8)) & _xmm);
      if ( v14 >= 0.0000011920929 )
        break;
      v9 = (const struct Windows::Foundation::Numerics::float3 *)(v13 + 12);
      if ( v11 + 1 >= v6 )
        return 1;
    }
    v5 = v12 + 1;
  }
  while ( v5 < 4 );
  return 0;
}
