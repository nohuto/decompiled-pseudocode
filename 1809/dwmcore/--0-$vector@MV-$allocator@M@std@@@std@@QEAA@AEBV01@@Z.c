/*
 * XREFs of ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DC090
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterShape@EmitterShapes@@@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterShape@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x1801DBDAC (--$_Emplace_reallocate@AEBUFigure@CPathEmitterShape@EmitterShapes@@@-$vector@UFigure@CPathEmitte.c)
 *     ?BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801DC3E0 (-BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector<float>::vector<float>(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  SIZE_T v5; // rbx
  char *v6; // rax
  char *v7; // rdi
  size_t v8; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v5 = 4 * v4;
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
    *a1 = v6;
    v7 = v6;
    a1[1] = v6;
    a1[2] = &v6[v5];
    v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0(v6, *(const void **)a2, v8);
    a1[1] = &v7[v8];
  }
  return a1;
}
