/*
 * XREFs of ??0?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18020BC44
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x18020ADB0 (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18020C050 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Numerics::float2>::vector<Windows::Foundation::Numerics::float2>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rbx
  SIZE_T v5; // rbx
  char *v6; // rax
  char *v7; // rdi
  size_t v8; // rbx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v5 = 8 * v4;
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
    *(_QWORD *)a1 = v6;
    v7 = v6;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = &v6[v5];
    v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0(v6, *(const void **)a2, v8);
    *(_QWORD *)(a1 + 8) = &v7[v8];
  }
  return a1;
}
