/*
 * XREFs of sub_180112084 @ 0x180112084
 * Callers:
 *     sub_18011201C @ 0x18011201C (sub_18011201C.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_5 @ 0x180133B17 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_5.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180112084(__int64 a1)
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
      j_j__o_free(v2);
      v3 = *(_QWORD ***)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  return j_j__o_free(v3);
}
