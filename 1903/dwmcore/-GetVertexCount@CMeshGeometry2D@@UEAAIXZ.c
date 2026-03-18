/*
 * XREFs of ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x180217C40
 * Callers:
 *     ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x180217A10 (-GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z.c)
 *     ?GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180217B60 (-GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV-$CRectF@UBaseSampling@CoordinateSpace@@@@@Z.c)
 *     ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x180217CA0 (-GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z.c)
 *     ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x180217DD0 (-ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2D::GetVertexCount(CMeshGeometry2D *this)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 4) != 0 )
  {
    v2 = *((_DWORD *)this + 28) / 0xCu;
    if ( v2 >= *((_DWORD *)this + 36) >> 2 )
      v2 = *((_DWORD *)this + 36) >> 2;
    if ( v2 >= *((_DWORD *)this + 32) >> 4 )
      v2 = *((_DWORD *)this + 32) >> 4;
    *((_DWORD *)this + 18) = v1 & 0xFFFFFFFB;
    *((_DWORD *)this + 19) = v2;
  }
  else
  {
    return *((unsigned int *)this + 19);
  }
  return v2;
}
