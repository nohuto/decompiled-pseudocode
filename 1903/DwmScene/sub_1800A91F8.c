/*
 * XREFs of sub_1800A91F8 @ 0x1800A91F8
 * Callers:
 *     sub_1800A9230 @ 0x1800A9230 (sub_1800A9230.c)
 *     sub_1800EB6E0 @ 0x1800EB6E0 (sub_1800EB6E0.c)
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A91F8(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // rdx
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 16 * (a3 + 16LL) + 8);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a1 + 16 * (a3 + 16LL) + 8);
  }
  *a2 = *(_QWORD *)(a1 + 16 * (a3 + 16LL));
  result = a2;
  a2[1] = v4;
  return result;
}
