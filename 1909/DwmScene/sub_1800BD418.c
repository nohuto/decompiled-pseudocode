/*
 * XREFs of sub_1800BD418 @ 0x1800BD418
 * Callers:
 *     sub_1800BD388 @ 0x1800BD388 (sub_1800BD388.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_1 @ 0x18013051F (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_1.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800BD418(__int64 a1)
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
      unknown_libname_116(v2 + 2);
      j_j__o_free(v2);
      v3 = *(_QWORD ***)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  return j_j__o_free(v3);
}
