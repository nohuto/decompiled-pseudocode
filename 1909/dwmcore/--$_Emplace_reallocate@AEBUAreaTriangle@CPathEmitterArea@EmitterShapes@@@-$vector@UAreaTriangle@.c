/*
 * XREFs of ??$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@QEAAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180209554
 * Callers:
 *     ?AddTriangles@CPathEmitterArea@EmitterShapes@@EEAAXPEBUD2D1_TRIANGLE@@I@Z @ 0x18020A860 (-AddTriangles@CPathEmitterArea@EmitterShapes@@EEAAXPEBUD2D1_TRIANGLE@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@AEAAXQEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_K1@Z @ 0x18020B554 (-_Change_array@-$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V-$allocator@UAreaTriangle.c)
 */

__int64 __fastcall std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Emplace_reallocate<EmitterShapes::CPathEmitterArea::AreaTriangle const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  signed __int64 v4; // r9
  signed __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  SIZE_T v13; // rcx
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // r14
  char *v17; // rcx
  _BYTE *v18; // r8
  _BYTE *v19; // rdx
  size_t v20; // r8

  v4 = a2 - (_BYTE *)*a1;
  v7 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v8 = v4 / 28;
  if ( v7 / 28 == 0x924924924924924LL )
    std::_Xlength_error((const char *)v7);
  v9 = v7 / 28 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 28;
  v11 = v10 >> 1;
  if ( v10 <= 0x924924924924924LL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 28 * v12;
  if ( v12 > 0x924924924924924LL )
    v13 = -1LL;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = v14;
  v16 = 28 * v8;
  *(_OWORD *)&v14[v16] = *(_OWORD *)a3;
  *(_QWORD *)&v14[v16 + 16] = *(_QWORD *)(a3 + 16);
  *(_DWORD *)&v14[v16 + 24] = *(_DWORD *)(a3 + 24);
  v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  if ( a2 == v18 )
  {
    v20 = v18 - v19;
  }
  else
  {
    memmove_0(v14, v19, a2 - (_BYTE *)*a1);
    v20 = (_BYTE *)a1[1] - a2;
    v19 = a2;
    v17 = &v15[v16 + 28];
  }
  memmove_0(v17, v19, v20);
  std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Change_array(a1, v15, v9, v12);
  return (__int64)*a1 + v16;
}
