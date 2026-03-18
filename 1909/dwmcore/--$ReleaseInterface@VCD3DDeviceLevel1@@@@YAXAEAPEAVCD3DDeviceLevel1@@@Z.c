/*
 * XREFs of ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x180027BA0
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800276C0 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800EFEF8 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801CE698 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CD3DDeviceLevel1>(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILPoolResource::Release((CMILPoolResource *)(v2 + 496));
    *a1 = 0LL;
  }
  return result;
}
