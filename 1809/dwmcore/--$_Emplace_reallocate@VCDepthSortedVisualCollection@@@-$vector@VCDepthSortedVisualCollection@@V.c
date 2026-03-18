/*
 * XREFs of ??$_Emplace_reallocate@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAPEAVCDepthSortedVisualCollection@@QEAV2@$$QEAV2@@Z @ 0x1802251FC
 * Callers:
 *     ??$emplace_back@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAX$$QEAVCDepthSortedVisualCollection@@@Z @ 0x180225524 (--$emplace_back@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V-$alloc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x18022571C (-_Change_array@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollectio.c)
 */

__int64 __fastcall std::vector<CDepthSortedVisualCollection>::_Emplace_reallocate<CDepthSortedVisualCollection>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  SIZE_T v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  _QWORD *v16; // r9
  _QWORD *v17; // rdx
  _QWORD *v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (__int64)a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v4 / 56;
  if ( v7 / 56 == 0x492492492492492LL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  v9 = v7 / 56 + 1;
  v10 = (a1[2] - *a1) / 56LL;
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 56 * v12;
  if ( v12 > 0x492492492492492LL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = 56 * v8;
  *(_QWORD *)(v15 + v14) = 0LL;
  *(_QWORD *)(v15 + v14 + 8) = 0LL;
  *(_QWORD *)(v15 + v14 + 16) = 0LL;
  *(_QWORD *)(v15 + v14) = *(_QWORD *)a3;
  *(_QWORD *)(v15 + v14 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v15 + v14 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(v15 + v14 + 24) = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(v15 + v14 + 32) = 0LL;
  *(_QWORD *)(v15 + v14 + 40) = 0LL;
  *(_QWORD *)(v15 + v14 + 48) = 0LL;
  *(_QWORD *)(v15 + v14 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(v15 + v14 + 40) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(v15 + v14 + 48) = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = v17 + 6;
      v19 = (_QWORD *)(v14 + 48);
      do
      {
        *(v19 - 6) = 0LL;
        *(v19 - 5) = 0LL;
        *(v19 - 4) = 0LL;
        *(v19 - 6) = *v17;
        *(v19 - 5) = *(v18 - 5);
        *(v19 - 4) = *(v18 - 4);
        *v17 = 0LL;
        v17 += 7;
        *(v18 - 5) = 0LL;
        *(v18 - 4) = 0LL;
        *((_DWORD *)v19 - 6) = *((_DWORD *)v18 - 6);
        *(v19 - 2) = 0LL;
        *(v19 - 1) = 0LL;
        *v19 = 0LL;
        *(v19 - 2) = *(v18 - 2);
        *(v19 - 1) = *(v18 - 1);
        *v19 = *v18;
        v19 += 7;
        *(v18 - 2) = 0LL;
        *(v18 - 1) = 0LL;
        *v18 = 0LL;
        v18 += 7;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    if ( v17 != a2 )
    {
      v20 = v17 + 6;
      v21 = (_QWORD *)(v14 + 48);
      do
      {
        *(v21 - 6) = 0LL;
        *(v21 - 5) = 0LL;
        *(v21 - 4) = 0LL;
        *(v21 - 6) = *v17;
        *(v21 - 5) = *(v20 - 5);
        *(v21 - 4) = *(v20 - 4);
        *v17 = 0LL;
        v17 += 7;
        *(v20 - 5) = 0LL;
        *(v20 - 4) = 0LL;
        *((_DWORD *)v21 - 6) = *((_DWORD *)v20 - 6);
        *(v21 - 2) = 0LL;
        *(v21 - 1) = 0LL;
        *v21 = 0LL;
        *(v21 - 2) = *(v20 - 2);
        *(v21 - 1) = *(v20 - 1);
        *v21 = *v20;
        v21 += 7;
        *(v20 - 2) = 0LL;
        *(v20 - 1) = 0LL;
        *v20 = 0LL;
        v20 += 7;
      }
      while ( v17 != a2 );
      v16 = (_QWORD *)a1[1];
    }
    if ( a2 != v16 )
    {
      v22 = (_QWORD *)(v14 + v15 + 104);
      v23 = a2 + 6;
      do
      {
        *(v22 - 6) = 0LL;
        *(v22 - 5) = 0LL;
        *(v22 - 4) = 0LL;
        *(v22 - 6) = *(v23 - 6);
        *(v22 - 5) = *(v23 - 5);
        *(v22 - 4) = *(v23 - 4);
        *(v23 - 6) = 0LL;
        *(v23 - 5) = 0LL;
        *(v23 - 4) = 0LL;
        *((_DWORD *)v22 - 6) = *((_DWORD *)v23 - 6);
        *(v22 - 2) = 0LL;
        *(v22 - 1) = 0LL;
        *v22 = 0LL;
        *(v22 - 2) = *(v23 - 2);
        *(v22 - 1) = *(v23 - 1);
        *v22 = *v23;
        v22 += 7;
        *(v23 - 2) = 0LL;
        *(v23 - 1) = 0LL;
        *v23 = 0LL;
        v23 += 7;
      }
      while ( v23 - 6 != v16 );
    }
  }
  std::vector<CDepthSortedVisualCollection>::_Change_array(a1, v14, v9, v12);
  return v15 + *a1;
}
