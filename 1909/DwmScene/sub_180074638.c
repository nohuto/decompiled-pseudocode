/*
 * XREFs of sub_180074638 @ 0x180074638
 * Callers:
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 *     sub_1800A70EC @ 0x1800A70EC (sub_1800A70EC.c)
 *     sub_1800A9F4C @ 0x1800A9F4C (sub_1800A9F4C.c)
 *     sub_1800A9FA8 @ 0x1800A9FA8 (sub_1800A9FA8.c)
 *     sub_1800AA234 @ 0x1800AA234 (sub_1800AA234.c)
 *     sub_18012D9CA @ 0x18012D9CA (sub_18012D9CA.c)
 *     sub_18012DC19 @ 0x18012DC19 (sub_18012DC19.c)
 *     ?dtor$1@?0??Grow@CancellationBeaconStack@ContextBase@details@Concurrency@@AEAAXXZ@4HA_0 @ 0x18012FA0E (-dtor$1@-0--Grow@CancellationBeaconStack@ContextBase@details@Concurrency@@AEAAXXZ@4HA_0.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180074638(__int64 a1)
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
