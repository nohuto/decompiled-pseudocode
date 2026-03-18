/*
 * XREFs of ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01D1058
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C003CA20 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C01159CC (LogicalToPhysicalInPlaceRgnWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TransformRgn(HRGN a1, struct tagXFORM *a2)
{
  __int64 Region; // rbx
  int RegionData; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdi

  Region = 0LL;
  RegionData = GreGetRegionData(a1, 0LL, 0LL);
  v6 = RegionData;
  if ( RegionData > 0 )
  {
    v7 = Win32AllocPool(RegionData, 1919775573LL);
    v8 = v7;
    if ( v7 )
    {
      if ( (unsigned int)GreGetRegionData(a1, v6, v7) )
        Region = GreExtCreateRegion(a2, v6, v8);
      Win32FreePool(v8);
    }
  }
  return Region;
}
