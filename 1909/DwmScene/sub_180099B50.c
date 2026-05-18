/*
 * XREFs of sub_180099B50 @ 0x180099B50
 * Callers:
 *     sub_1800EBDF0 @ 0x1800EBDF0 (sub_1800EBDF0.c)
 *     sub_1800EFF30 @ 0x1800EFF30 (sub_1800EFF30.c)
 *     sub_1801115E0 @ 0x1801115E0 (sub_1801115E0.c)
 *     sub_180111660 @ 0x180111660 (sub_180111660.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180099B50(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 96);
  }
  *a2 = *(_QWORD *)(a1 + 88);
  result = a2;
  a2[1] = v2;
  return result;
}
