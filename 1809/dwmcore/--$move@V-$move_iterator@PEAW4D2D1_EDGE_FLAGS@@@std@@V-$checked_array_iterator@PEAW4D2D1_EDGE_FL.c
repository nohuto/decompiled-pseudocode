/*
 * XREFs of ??$move@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x180059A84
 * Callers:
 *     ?clear_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE968 (-clear_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EED94 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  _DWORD *v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = (_DWORD *)(*(_QWORD *)a4 + 4LL * *((_QWORD *)a4 + 2));
  while ( a2 != a3 )
    *v5++ = *a2++;
  result = a1;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = (__int64)((__int64)v5 - v4) >> 2;
  return result;
}
