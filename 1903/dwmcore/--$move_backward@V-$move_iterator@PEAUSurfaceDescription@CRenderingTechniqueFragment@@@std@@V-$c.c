/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180259CB4
 * Callers:
 *     ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18000FC78 (-reserve_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vli.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180037D6C (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800389B0 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1800389B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)(__int64)0xD555555555555555uLL) >> 64) >> 1;
  v6 = (v5 >> 63) + v5;
  if ( v6 < 0 && a4[2] < (unsigned __int64)-v6 || v6 > 0 && a4[1] - a4[2] < (unsigned __int64)v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v6, a3, a4);
    __debugbreak();
  }
  v7 = *a4;
  v8 = *a4 + 12 * a4[2];
  while ( a2 != a3 )
  {
    v8 -= 12LL;
    a3 -= 12LL;
    *(_QWORD *)v8 = *(_QWORD *)a3;
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a3 + 8);
  }
  v9 = (__int64)((unsigned __int128)((v8 - v7) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
  result = a1;
  a4[2] = (v9 >> 63) + v9;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
