/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180042A98
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180042B10 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@X.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800D56A8 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceL.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004F7E0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(
        struct IDeviceResourceNotify *a1)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rbx

  if ( *((_DWORD *)a1 + 10) )
  {
    v3 = *((unsigned int *)a1 + 10);
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(v4 + *((_QWORD *)a1 + 2));
      CD3DResource::RemoveResourceNotifier((CD3DResource *)(v5 + 24), a1);
      CMILPoolResource::Release((CMILPoolResource *)v5);
      v4 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  *((_DWORD *)a1 + 10) = 0;
  return DynArrayImpl<0>::ShrinkToSize((char *)a1 + 16, 8LL);
}
