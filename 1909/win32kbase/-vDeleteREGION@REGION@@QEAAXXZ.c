/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000EAD0 (NtGdiCreateRectRgn.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00116C0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0015D10 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     vRestoreRegion @ 0x1C0016EA0 (vRestoreRegion.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0017350 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreExtCreateRegion @ 0x1C0018220 (GreExtCreateRegion.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C001A124 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C001ADA8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0029230 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002B180 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C002C5CC (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C007B690 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C0086730 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C008B790 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C0093FA0 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C0098F48 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00ADCC4 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C0122620 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01248D0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  __int64 v2; // rdi

  if ( this && this != prgnDefault )
  {
    if ( *((__int16 *)this + 7) >= 0 )
    {
      Win32FreePool((__int64)this);
    }
    else
    {
      v2 = qword_1C02128D0;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v2, this);
    }
  }
}
