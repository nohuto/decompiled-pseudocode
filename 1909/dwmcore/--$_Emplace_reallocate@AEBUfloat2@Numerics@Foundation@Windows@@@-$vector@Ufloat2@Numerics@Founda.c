/*
 * XREFs of ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801E912C
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EC9E8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z.c)
 *     ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18020A6E0 (-AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18020A960 (-BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x180019FE4 (-_Calculate_growth@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@F.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001C0CC (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // rsi
  char *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8

  v4 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v6 + 1;
  v9 = std::vector<Windows::Foundation::Numerics::float2>::_Calculate_growth((_QWORD *)a1, v6 + 1);
  v10 = 8 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = v12;
  *(_QWORD *)&v12[8 * v4] = *a3;
  v14 = *(_BYTE **)(a1 + 8);
  v15 = *(_BYTE **)a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, (size_t)&a2[-*(_QWORD *)a1]);
    v16 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v13 = &v12[8 * v4 + 8];
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<CVectorShape *>::_Change_array((__int64 *)a1, (__int64)v12, v8, v9);
  return *(_QWORD *)a1 + 8 * v4;
}
