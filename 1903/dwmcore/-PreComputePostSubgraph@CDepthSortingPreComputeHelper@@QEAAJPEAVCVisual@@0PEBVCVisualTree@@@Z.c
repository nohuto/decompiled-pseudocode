/*
 * XREFs of ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x180255768
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x180087C60 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?CreateDepthSortedList@CVisual@@AEAAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x1801C29B4 (-CreateDepthSortedList@CVisual@@AEAAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x1801C2E5C (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 *     ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x1802559E8 (-pop_back@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollection@@@s.c)
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18025C000 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18025C348 (-SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVis.c)
 */

__int64 __fastcall CDepthSortingPreComputeHelper::PreComputePostSubgraph(
        CDepthSortingPreComputeHelper *this,
        struct CVisual *a2,
        struct CVisual *a3,
        const struct CVisualTree *a4)
{
  _QWORD *DepthSortedList; // rax
  int WorldTransform; // esi
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp-18h]

  if ( *((_DWORD *)a2 + 25) == 3 )
  {
    DepthSortedList = CVisual::CreateDepthSortedList((__int64)a2);
    if ( !(unsigned __int8)CDepthSortedVisualCollection::SortVisuals(*((_QWORD *)this + 1) - 56LL, DepthSortedList) )
      CVisual::DeleteDepthSortedList(a2);
    std::vector<CDepthSortedVisualCollection>::pop_back(this);
  }
  else
  {
    CVisual::DeleteDepthSortedList(a2);
  }
  if ( !a3 || *((_DWORD *)a3 + 25) != 3 )
    return 0LL;
  v12 = 0;
  WorldTransform = CVisual::GetWorldTransform((struct _LIST_ENTRY *)a2, (__int64)a4, 1, (__int64)v11, 0LL, 0LL);
  if ( WorldTransform >= 0 )
  {
    CDepthSortedVisualCollection::AddVisual(
      (CDepthSortedVisualCollection *)(*((_QWORD *)this + 1) - 56LL),
      a2,
      (struct CMILMatrix *)v11);
    return 0LL;
  }
  CVisual::DeleteDepthSortedList(a2);
  if ( *((_DWORD *)a2 + 25) == 3 )
    std::vector<CDepthSortedVisualCollection>::pop_back(this);
  return (unsigned int)WorldTransform;
}
