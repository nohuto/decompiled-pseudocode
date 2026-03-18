/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0010850 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00142F8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0015EE0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0016AE8 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0020A10 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0028890 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002A730 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x1C002BE30 (GreExtCreateRegion.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C002CC7C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00533D0 (NtGdiCreateRectRgn.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C007777C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C007F080 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C008AB10 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C008FD80 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C0095530 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C00A2620 (EngUpdateDeviceSurface.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00B0A74 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C0124E90 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0126D80 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0127140 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     vRestoreRegion @ 0x1C0127210 (vRestoreRegion.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
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
      v2 = qword_1C02158D0;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v2, this);
    }
  }
}
