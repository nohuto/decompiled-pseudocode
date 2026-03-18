/*
 * XREFs of ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18021F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x18021CD94 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1802203C8 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetD2DGeometry(
        CPathData **this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  struct ID2D1Factory *v6; // rdx
  int D2DGeometry; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct ID2D1Geometry *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
  D2DGeometry = CPathData::GetD2DGeometry(this[2], v6, &v13);
  v9 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, D2DGeometry, 0x1Au);
  }
  else
  {
    v10 = CTransformedGeometryHelper::TransformGeometry(a2, v13, a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Cu);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
  return v9;
}
