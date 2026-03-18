/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0013860 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0017730 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C001A670 (GreExtCreateRegion.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C001BAA4 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00240D0 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0029190 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C006AF70 (NtGdiCreateRectRgn.c)
 *     vRestoreRegion @ 0x1C006E890 (vRestoreRegion.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C0073CA0 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C00824A0 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C008840C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C009FC3C (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C00F82C0 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00FA8E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00FACBC (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00FAD84 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0108BB8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  __int64 v2; // rdi

  if ( this && this != prgnDefault )
  {
    if ( *((__int16 *)this + 7) >= 0 )
    {
      Win32FreePool(this);
    }
    else
    {
      v2 = qword_1C01CCE30;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v2, this);
    }
  }
}
