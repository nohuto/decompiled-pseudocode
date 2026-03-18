/*
 * XREFs of ??$_Emplace_reallocate@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAPEAVCDepthSortingLayer@@QEAV2@$$QEAV2@@Z @ 0x18025BA00
 * Callers:
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAAEAVCDepthSortingLayer@@$$QEAV2@@Z @ 0x18025BF94 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x18025C3B4 (-_Change_array@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAX.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::_Emplace_reallocate<CDepthSortingLayer>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  int v18; // eax
  _QWORD *v19; // rdx
  int v20; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  int v23; // eax

  v4 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 / 40 == 0x666666666666666LL )
    std::_Xlength_error((const char *)v7);
  v8 = v7 / 40 + 1;
  v9 = (a1[2] - *a1) / 40;
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 40 * v11;
  if ( v11 > 0x666666666666666LL )
    v12 = -1LL;
  v13 = 5 * (v4 / 40);
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_QWORD *)(v14 + 8 * v13) = 0LL;
  *(_QWORD *)(v14 + 8 * v13 + 8) = 0LL;
  *(_QWORD *)(v14 + 8 * v13 + 16) = 0LL;
  *(_QWORD *)(v14 + 8 * v13) = *(_QWORD *)a3;
  *(_QWORD *)(v14 + 8 * v13 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v14 + 8 * v13 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(v14 + 8 * v13 + 24) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(v14 + 8 * v13 + 28) = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(v14 + 8 * v13 + 32) = *(_DWORD *)(a3 + 32);
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    if ( v16 != v15 )
    {
      v17 = (_QWORD *)(v14 + 16);
      do
      {
        *(v17 - 2) = 0LL;
        *(v17 - 1) = 0LL;
        *v17 = 0LL;
        *(v17 - 2) = *(_QWORD *)v16;
        *(v17 - 1) = *(_QWORD *)(v16 + 8);
        *v17 = *(_QWORD *)(v16 + 16);
        v17 += 5;
        *(_QWORD *)v16 = 0LL;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = 0LL;
        *((_DWORD *)v17 - 8) = *(_DWORD *)(v16 + 24);
        *((_DWORD *)v17 - 7) = *(_DWORD *)(v16 + 28);
        v18 = *(_DWORD *)(v16 + 32);
        v16 += 40LL;
        *((_DWORD *)v17 - 6) = v18;
      }
      while ( v16 != v15 );
    }
  }
  else
  {
    if ( v16 != a2 )
    {
      v19 = (_QWORD *)(v14 + 16);
      do
      {
        *(v19 - 2) = 0LL;
        *(v19 - 1) = 0LL;
        *v19 = 0LL;
        *(v19 - 2) = *(_QWORD *)v16;
        *(v19 - 1) = *(_QWORD *)(v16 + 8);
        *v19 = *(_QWORD *)(v16 + 16);
        v19 += 5;
        *(_QWORD *)v16 = 0LL;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = 0LL;
        *((_DWORD *)v19 - 8) = *(_DWORD *)(v16 + 24);
        *((_DWORD *)v19 - 7) = *(_DWORD *)(v16 + 28);
        v20 = *(_DWORD *)(v16 + 32);
        v16 += 40LL;
        *((_DWORD *)v19 - 6) = v20;
      }
      while ( v16 != a2 );
      v15 = a1[1];
    }
    if ( a2 != v15 )
    {
      v21 = (_QWORD *)(v14 + 8 * (v13 + 7));
      v22 = a2 + 16;
      do
      {
        *(v21 - 2) = 0LL;
        *(v21 - 1) = 0LL;
        *v21 = 0LL;
        *(v21 - 2) = *(_QWORD *)(v22 - 16);
        *(v21 - 1) = *(_QWORD *)(v22 - 8);
        *v21 = *(_QWORD *)v22;
        v21 += 5;
        *(_QWORD *)(v22 - 16) = 0LL;
        *(_QWORD *)(v22 - 8) = 0LL;
        *(_QWORD *)v22 = 0LL;
        v23 = *(_DWORD *)(v22 + 8);
        v22 += 40LL;
        *((_DWORD *)v21 - 8) = v23;
        *((_DWORD *)v21 - 7) = *(_DWORD *)(v22 - 28);
        *((_DWORD *)v21 - 6) = *(_DWORD *)(v22 - 24);
      }
      while ( v22 - 16 != v15 );
    }
  }
  std::vector<CDepthSortingLayer>::_Change_array(a1, v14, v8, v11);
  return *a1 + 8 * v13;
}
