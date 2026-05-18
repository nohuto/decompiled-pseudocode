/*
 * XREFs of sub_180074528 @ 0x180074528
 * Callers:
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     sub_1800A6FDC @ 0x1800A6FDC (sub_1800A6FDC.c)
 *     sub_1800A9E3C @ 0x1800A9E3C (sub_1800A9E3C.c)
 *     sub_1800A9E98 @ 0x1800A9E98 (sub_1800A9E98.c)
 *     sub_1800AA124 @ 0x1800AA124 (sub_1800AA124.c)
 *     sub_18012D8BA @ 0x18012D8BA (sub_18012D8BA.c)
 *     sub_18012DB09 @ 0x18012DB09 (sub_18012DB09.c)
 *     ?dtor$1@?0??Grow@CancellationBeaconStack@ContextBase@details@Concurrency@@AEAAXXZ@4HA_0 @ 0x18012F8FE (-dtor$1@-0--Grow@CancellationBeaconStack@ContextBase@details@Concurrency@@AEAAXXZ@4HA_0.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180074528(__int64 a1)
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
      unknown_libname_115((__int64)(v2 + 2), 0);
      j_j__o_free(v2);
      v3 = *(_QWORD ***)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  return j_j__o_free(v3);
}
