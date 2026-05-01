/*
 * XREFs of ??$_Buynode@AEAKAEAUDisplayRegionInfo@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x1802AD7B0
 * Callers:
 *     _lambda_e5434191a426e1e6c5461e9f90ae0298_::operator() @ 0x1802AE2C4 (_lambda_e5434191a426e1e6c5461e9f90ae0298_--operator().c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@XZ @ 0x1802AF990 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Buynode<unsigned long &,DisplayRegionInfo &>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = *a2;
  *(_OWORD *)(result + 32) = *(_OWORD *)a3;
  *(_QWORD *)(result + 48) = *(_QWORD *)(a3 + 16);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a3 + 24);
  return result;
}
