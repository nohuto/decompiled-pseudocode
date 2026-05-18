/*
 * XREFs of sub_18010DC00 @ 0x18010DC00
 * Callers:
 *     sub_18010DB68 @ 0x18010DB68 (sub_18010DB68.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_4 @ 0x1801334D0 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_4.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18010DC00(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD **v3; // rcx
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD ***)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      sub_1800675A8(v2 + 2, 0);
      j_j__o_free(v2);
      v3 = *(_QWORD ***)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  return j_j__o_free(v3);
}
