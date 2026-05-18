/*
 * XREFs of sub_1800F5904 @ 0x1800F5904
 * Callers:
 *     sub_1800905F4 @ 0x1800905F4 (sub_1800905F4.c)
 *     sub_1800906FC @ 0x1800906FC (sub_1800906FC.c)
 *     sub_180090F64 @ 0x180090F64 (sub_180090F64.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 *     sub_1800F541C @ 0x1800F541C (sub_1800F541C.c)
 *     sub_1800F56B8 @ 0x1800F56B8 (sub_1800F56B8.c)
 *     sub_180113A30 @ 0x180113A30 (sub_180113A30.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800F5904(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 24);
  }
  *a2 = *(_QWORD *)(a1 + 16);
  result = a2;
  a2[1] = v2;
  return result;
}
