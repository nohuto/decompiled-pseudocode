/*
 * XREFs of ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800A8B9C
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800A87A0 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800EC234 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801CFE38 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
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
