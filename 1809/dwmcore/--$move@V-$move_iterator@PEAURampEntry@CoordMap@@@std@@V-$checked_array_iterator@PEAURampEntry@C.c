/*
 * XREFs of ??$move@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x180070050
 * Callers:
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EF36C (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_.c)
 *     ?clear_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EF404 (-clear_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  _OWORD *v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = (_OWORD *)(*(_QWORD *)a4 + 16LL * *((_QWORD *)a4 + 2));
  while ( a2 != a3 )
    *v5++ = *a2++;
  result = a1;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = (__int64)((__int64)v5 - v4) >> 4;
  return result;
}
