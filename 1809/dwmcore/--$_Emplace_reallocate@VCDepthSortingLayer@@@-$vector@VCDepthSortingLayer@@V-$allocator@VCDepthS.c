/*
 * XREFs of ??$_Emplace_reallocate@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAPEAVCDepthSortingLayer@@QEAV2@$$QEAV2@@Z @ 0x180231294
 * Callers:
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAX$$QEAVCDepthSortingLayer@@@Z @ 0x18023183C (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x180231C4C (-_Change_array@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAX.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::_Emplace_reallocate<CDepthSortingLayer>(
        __int64 *a1,
        __int64 a2,
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
  __int64 v14; // r10
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  int v19; // eax
  _QWORD *v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v4 / 40;
  if ( v7 / 40 == 0x666666666666666LL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  v9 = v7 / 40 + 1;
  v10 = (a1[2] - *a1) / 40;
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 40 * v12;
  if ( v12 > 0x666666666666666LL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = 5 * v8;
  *(_QWORD *)(v14 + 8 * v15) = 0LL;
  *(_QWORD *)(v14 + 8 * v15 + 8) = 0LL;
  *(_QWORD *)(v14 + 8 * v15 + 16) = 0LL;
  *(_QWORD *)(v14 + 8 * v15) = *(_QWORD *)a3;
  *(_QWORD *)(v14 + 8 * v15 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v14 + 8 * v15 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(v14 + 8 * v15 + 24) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(v14 + 8 * v15 + 28) = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(v14 + 8 * v15 + 32) = *(_DWORD *)(a3 + 32);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = (_QWORD *)(v14 + 16);
      do
      {
        *(v18 - 2) = 0LL;
        *(v18 - 1) = 0LL;
        *v18 = 0LL;
        *(v18 - 2) = *(_QWORD *)v17;
        *(v18 - 1) = *(_QWORD *)(v17 + 8);
        *v18 = *(_QWORD *)(v17 + 16);
        v18 += 5;
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = 0LL;
        *((_DWORD *)v18 - 8) = *(_DWORD *)(v17 + 24);
        *((_DWORD *)v18 - 7) = *(_DWORD *)(v17 + 28);
        v19 = *(_DWORD *)(v17 + 32);
        v17 += 40LL;
        *((_DWORD *)v18 - 6) = v19;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    if ( v17 != a2 )
    {
      v20 = (_QWORD *)(v14 + 16);
      do
      {
        *(v20 - 2) = 0LL;
        *(v20 - 1) = 0LL;
        *v20 = 0LL;
        *(v20 - 2) = *(_QWORD *)v17;
        *(v20 - 1) = *(_QWORD *)(v17 + 8);
        *v20 = *(_QWORD *)(v17 + 16);
        v20 += 5;
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = 0LL;
        *((_DWORD *)v20 - 8) = *(_DWORD *)(v17 + 24);
        *((_DWORD *)v20 - 7) = *(_DWORD *)(v17 + 28);
        v21 = *(_DWORD *)(v17 + 32);
        v17 += 40LL;
        *((_DWORD *)v20 - 6) = v21;
      }
      while ( v17 != a2 );
      v16 = a1[1];
    }
    if ( a2 != v16 )
    {
      v22 = (_QWORD *)(v14 + 8 * (v15 + 7));
      v23 = a2 + 16;
      do
      {
        *(v22 - 2) = 0LL;
        *(v22 - 1) = 0LL;
        *v22 = 0LL;
        *(v22 - 2) = *(_QWORD *)(v23 - 16);
        *(v22 - 1) = *(_QWORD *)(v23 - 8);
        *v22 = *(_QWORD *)v23;
        v22 += 5;
        *(_QWORD *)(v23 - 16) = 0LL;
        *(_QWORD *)(v23 - 8) = 0LL;
        *(_QWORD *)v23 = 0LL;
        v24 = *(_DWORD *)(v23 + 8);
        v23 += 40LL;
        *((_DWORD *)v22 - 8) = v24;
        *((_DWORD *)v22 - 7) = *(_DWORD *)(v23 - 28);
        *((_DWORD *)v22 - 6) = *(_DWORD *)(v23 - 24);
      }
      while ( v23 - 16 != v16 );
    }
  }
  std::vector<CDepthSortingLayer>::_Change_array(a1, v14, v9, v12);
  return *a1 + 8 * v15;
}
