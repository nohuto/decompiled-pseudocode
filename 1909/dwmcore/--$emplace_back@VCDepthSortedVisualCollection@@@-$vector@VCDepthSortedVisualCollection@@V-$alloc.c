/*
 * XREFs of ??$emplace_back@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAAEAVCDepthSortedVisualCollection@@$$QEAV2@@Z @ 0x180253F68
 * Callers:
 *     ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1802540DC (-PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CDepthSortedVisualCollection>::emplace_back<CDepthSortedVisualCollection>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = a1[1];
  if ( a1[2] == v3 )
    return std::vector<CDepthSortedVisualCollection>::_Emplace_reallocate<CDepthSortedVisualCollection>(
             a1,
             (_QWORD *)v3,
             a2);
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
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(v3 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  result = a1[1];
  a1[1] = result + 56;
  return result;
}
