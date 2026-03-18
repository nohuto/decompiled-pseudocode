/*
 * XREFs of ??$_Emplace_reallocate@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAPEAUProperty@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x18017469C
 * Callers:
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x1801750A4 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAUProperty@CTreeDumpNodeData@@_K1@Z @ 0x180175944 (-_Change_array@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator@UProperty@CTreeDumpNodeData@@@.c)
 */

unsigned __int64 __fastcall std::vector<CTreeDumpNodeData::Property>::_Emplace_reallocate<CTreeDumpNodeData::Property>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // r10
  _OWORD *v15; // r8
  _OWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx

  v4 = a2 - *(_QWORD *)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 6;
  if ( v5 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v5 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 6;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = v11 << 6;
  if ( v11 > 0x3FFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFC0uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_QWORD *)(v13 + v14 + 16) = 0LL;
  *(_QWORD *)(v13 + v14 + 24) = 0LL;
  *(_OWORD *)(v13 + v14) = *(_OWORD *)a3;
  *(_OWORD *)(v13 + v14 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_QWORD *)(v13 + v14 + 48) = 0LL;
  *(_QWORD *)(v13 + v14 + 56) = 0LL;
  *(_OWORD *)(v13 + v14 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(v13 + v14 + 48) = *(_OWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_QWORD *)(a3 + 56) = 15LL;
  *(_BYTE *)(a3 + 32) = 0;
  v15 = *(_OWORD **)(a1 + 8);
  v16 = *(_OWORD **)a1;
  if ( (_OWORD *)a2 == v15 )
  {
    if ( v16 != v15 )
    {
      v17 = (_QWORD *)v16 + 7;
      v18 = (_QWORD *)(v14 + 56);
      do
      {
        *(v18 - 5) = 0LL;
        *(v18 - 4) = 0LL;
        *(_OWORD *)(v18 - 7) = *v16;
        *(_OWORD *)(v18 - 5) = v16[1];
        *(v17 - 5) = 0LL;
        *(v17 - 4) = 15LL;
        *(_BYTE *)v16 = 0;
        v16 += 4;
        *(v18 - 1) = 0LL;
        *v18 = 0LL;
        v18 += 8;
        *(_OWORD *)(v18 - 11) = *(_OWORD *)(v17 - 3);
        *(_OWORD *)(v18 - 9) = *(_OWORD *)(v17 - 1);
        *(v17 - 1) = 0LL;
        *v17 = 15LL;
        *((_BYTE *)v17 - 24) = 0;
        v17 += 8;
      }
      while ( v16 != v15 );
    }
  }
  else
  {
    if ( v16 != (_OWORD *)a2 )
    {
      v19 = (_QWORD *)v16 + 7;
      v20 = (_QWORD *)(v14 + 56);
      do
      {
        *(v20 - 5) = 0LL;
        *(v20 - 4) = 0LL;
        *(_OWORD *)(v20 - 7) = *v16;
        *(_OWORD *)(v20 - 5) = v16[1];
        *(v19 - 5) = 0LL;
        *(v19 - 4) = 15LL;
        *(_BYTE *)v16 = 0;
        v16 += 4;
        *(v20 - 1) = 0LL;
        *v20 = 0LL;
        v20 += 8;
        *(_OWORD *)(v20 - 11) = *(_OWORD *)(v19 - 3);
        *(_OWORD *)(v20 - 9) = *(_OWORD *)(v19 - 1);
        *(v19 - 1) = 0LL;
        *v19 = 15LL;
        *((_BYTE *)v19 - 24) = 0;
        v19 += 8;
      }
      while ( v16 != (_OWORD *)a2 );
      v15 = *(_OWORD **)(a1 + 8);
    }
    if ( (_OWORD *)a2 != v15 )
    {
      v21 = (_QWORD *)(v14 + v13 + 120);
      v22 = (_QWORD *)(a2 + 56);
      do
      {
        *(v21 - 5) = 0LL;
        *(v21 - 4) = 0LL;
        *(_OWORD *)(v21 - 7) = *(_OWORD *)(v22 - 7);
        *(_OWORD *)(v21 - 5) = *(_OWORD *)(v22 - 5);
        *(v22 - 5) = 0LL;
        *(v22 - 4) = 15LL;
        *((_BYTE *)v22 - 56) = 0;
        *(v21 - 1) = 0LL;
        *v21 = 0LL;
        v21 += 8;
        *(_OWORD *)(v21 - 11) = *(_OWORD *)(v22 - 3);
        *(_OWORD *)(v21 - 9) = *(_OWORD *)(v22 - 1);
        *(v22 - 1) = 0LL;
        *v22 = 15LL;
        *((_BYTE *)v22 - 24) = 0;
        v22 += 8;
      }
      while ( v22 - 7 != (_QWORD *)v15 );
    }
  }
  std::vector<CTreeDumpNodeData::Property>::_Change_array(a1, v14, v8, v11);
  return v13 + *(_QWORD *)a1;
}
