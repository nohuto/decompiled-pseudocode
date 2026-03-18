/*
 * XREFs of ??$_Emplace_reallocate@AEBUFigure@CPathEmitterShape@EmitterShapes@@@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterShape@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x1801DBDAC
 * Callers:
 *     ?BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801DC3E0 (-BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DC090 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DC14C (--0-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@Window.c)
 *     ?_Change_array@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@AEAAXQEAUFigure@CPathEmitterShape@EmitterShapes@@_K1@Z @ 0x1801DCC44 (-_Change_array@-$vector@UFigure@CPathEmitterShape@EmitterShapes@@V-$allocator@UFigure@CPathEmitt.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<EmitterShapes::CPathEmitterShape::Figure>::_Emplace_reallocate<EmitterShapes::CPathEmitterShape::Figure const &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  SIZE_T v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r15
  _QWORD *v17; // r10
  _QWORD *v18; // rdx
  _QWORD *v19; // r9
  _QWORD *v20; // r8
  _QWORD *v21; // r9
  _QWORD *v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (__int64)a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v4 / 56;
  if ( v7 / 56 == 0x492492492492492LL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
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
  v14 = 56 * v8;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v16 = 56 * v8 + v15;
  std::vector<Windows::Foundation::Numerics::float2>::vector<Windows::Foundation::Numerics::float2>(v16, a3);
  std::vector<float>::vector<float>(v16 + 24, a3 + 24);
  *(_DWORD *)(v16 + 48) = *(_DWORD *)(a3 + 48);
  v17 = (_QWORD *)a1[1];
  v18 = (_QWORD *)*a1;
  if ( a2 == v17 )
  {
    if ( v18 != v17 )
    {
      v19 = v18 + 5;
      v20 = (_QWORD *)(v15 + 40);
      do
      {
        *(v20 - 5) = 0LL;
        *(v20 - 4) = 0LL;
        *(v20 - 3) = 0LL;
        *(v20 - 5) = *v18;
        *(v20 - 4) = *(v19 - 4);
        *(v20 - 3) = *(v19 - 3);
        *v18 = 0LL;
        v18 += 7;
        *(v19 - 4) = 0LL;
        *(v19 - 3) = 0LL;
        *(v20 - 2) = 0LL;
        *(v20 - 1) = 0LL;
        *v20 = 0LL;
        *(v20 - 2) = *(v19 - 2);
        *(v20 - 1) = *(v19 - 1);
        *v20 = *v19;
        v20 += 7;
        *((_DWORD *)v20 - 12) = *((_DWORD *)v19 + 2);
        *(v19 - 2) = 0LL;
        *(v19 - 1) = 0LL;
        *v19 = 0LL;
        v19 += 7;
      }
      while ( v18 != v17 );
    }
  }
  else
  {
    if ( v18 != a2 )
    {
      v21 = v18 + 5;
      v22 = (_QWORD *)(v15 + 40);
      do
      {
        *(v22 - 5) = 0LL;
        *(v22 - 4) = 0LL;
        *(v22 - 3) = 0LL;
        *(v22 - 5) = *v18;
        *(v22 - 4) = *(v21 - 4);
        *(v22 - 3) = *(v21 - 3);
        *v18 = 0LL;
        v18 += 7;
        *(v21 - 4) = 0LL;
        *(v21 - 3) = 0LL;
        *(v22 - 2) = 0LL;
        *(v22 - 1) = 0LL;
        *v22 = 0LL;
        *(v22 - 2) = *(v21 - 2);
        *(v22 - 1) = *(v21 - 1);
        *v22 = *v21;
        v22 += 7;
        *((_DWORD *)v22 - 12) = *((_DWORD *)v21 + 2);
        *(v21 - 2) = 0LL;
        *(v21 - 1) = 0LL;
        *v21 = 0LL;
        v21 += 7;
      }
      while ( v18 != a2 );
      v17 = (_QWORD *)a1[1];
    }
    if ( a2 != v17 )
    {
      v23 = a2 + 5;
      v24 = (_QWORD *)(v16 + 96);
      do
      {
        *(v24 - 5) = 0LL;
        *(v24 - 4) = 0LL;
        *(v24 - 3) = 0LL;
        *(v24 - 5) = *(v23 - 5);
        *(v24 - 4) = *(v23 - 4);
        *(v24 - 3) = *(v23 - 3);
        *(v23 - 5) = 0LL;
        *(v23 - 4) = 0LL;
        *(v23 - 3) = 0LL;
        *(v24 - 2) = 0LL;
        *(v24 - 1) = 0LL;
        *v24 = 0LL;
        *(v24 - 2) = *(v23 - 2);
        *(v24 - 1) = *(v23 - 1);
        *v24 = *v23;
        v24 += 7;
        *((_DWORD *)v24 - 12) = *((_DWORD *)v23 + 2);
        *(v23 - 2) = 0LL;
        *(v23 - 1) = 0LL;
        *v23 = 0LL;
        v23 += 7;
      }
      while ( v23 - 5 != v17 );
    }
  }
  std::vector<EmitterShapes::CPathEmitterShape::Figure>::_Change_array(a1, v15, v9, v12);
  return v14 + *a1;
}
