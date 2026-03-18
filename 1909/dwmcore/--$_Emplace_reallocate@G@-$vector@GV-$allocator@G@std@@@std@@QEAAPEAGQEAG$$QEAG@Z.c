/*
 * XREFs of ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x1801B718C
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x18003D208 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x180040004 (-_Change_array@-$vector@GV-$allocator@G@std@@@std@@AEAAXQEAG_K1@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(__int64 a1, _BYTE *a2, _WORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  char *v13; // r14
  char *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v4 = (__int64)&a2[-*(_QWORD *)a1] >> 1;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 1;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  else
  {
    v11 = v6 + 1;
  }
  v12 = 2 * v11;
  if ( v11 > 0x7FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_WORD *)&v13[2 * v4] = *a3;
  v14 = v13;
  v15 = *(_BYTE **)(a1 + 8);
  v16 = *(_BYTE **)a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, (size_t)&a2[-*(_QWORD *)a1]);
    v17 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v14 = &v13[2 * v4 + 2];
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<unsigned short>::_Change_array((__int64 *)a1, (__int64)v13, v8, v11);
  return *(_QWORD *)a1 + 2 * v4;
}
