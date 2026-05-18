/*
 * XREFs of sub_18007F5EC @ 0x18007F5EC
 * Callers:
 *     sub_18006F084 @ 0x18006F084 (sub_18006F084.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 * Callees:
 *     sub_18007F6C8 @ 0x18007F6C8 (sub_18007F6C8.c)
 *     __std_type_info_compare @ 0x180125BB2 (__std_type_info_compare.c)
 */

_QWORD *__fastcall sub_18007F5EC(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  _QWORD *result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  sub_18007F6C8(a1, &v8);
  v6 = v8;
  if ( v8 == *a1 || (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(v8 + 32) + 8LL) < 0 )
    v6 = *a1;
  result = a2;
  *a2 = v6;
  return result;
}
