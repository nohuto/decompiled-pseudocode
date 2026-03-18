/*
 * XREFs of ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x18016FEF8
 * Callers:
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x18016FDE4 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801C2A28 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800A46E4 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetHeatMapProperties(__int64 a1, _QWORD *a2)
{
  CSparseStorage *v2; // r10
  __int64 v3; // rcx

  v2 = (CSparseStorage *)(a1 + 216);
  v3 = *a2 - `CVisual::SetHeatMapProperties'::`2'::sc_defaultValue;
  if ( *a2 == `CVisual::SetHeatMapProperties'::`2'::sc_defaultValue )
  {
    v3 = a2[1];
    if ( !v3 )
      v3 = *((unsigned int *)a2 + 4);
  }
  if ( v3 )
    CSparseStorage::SetData(v2, 2u, 0x14u, a2);
  else
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x40000000u;
}
