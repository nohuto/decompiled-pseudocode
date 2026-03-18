/*
 * XREFs of ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAX$$QEAVCDepthSortingLayer@@@Z @ 0x18023183C
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1802318A0 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = a1[1];
  if ( a1[2] == v3 )
    return std::vector<CDepthSortingLayer>::_Emplace_reallocate<CDepthSortingLayer>(a1, v3, a2);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)v3 = *(_QWORD *)a2;
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(v3 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(v3 + 28) = *(_DWORD *)(a2 + 28);
  result = *(unsigned int *)(a2 + 32);
  *(_DWORD *)(v3 + 32) = result;
  a1[1] += 40LL;
  return result;
}
