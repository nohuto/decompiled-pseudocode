/*
 * XREFs of sub_18008DC04 @ 0x18008DC04
 * Callers:
 *     sub_18008A824 @ 0x18008A824 (sub_18008A824.c)
 * Callees:
 *     sub_18008D994 @ 0x18008D994 (sub_18008D994.c)
 *     sub_18008DA9C @ 0x18008DA9C (sub_18008DA9C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008DC04(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v3; // rbx
  _QWORD *i; // rdx
  _QWORD *v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-20h]

  sub_18008D994(a1, &v6, a2);
  v3 = 0LL;
  for ( i = v6; i != v7; ++v3 )
    i = (_QWORD *)*i;
  sub_18008DA9C(a1, &v6, v6, v7);
  return v3;
}
