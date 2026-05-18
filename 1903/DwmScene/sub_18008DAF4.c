/*
 * XREFs of sub_18008DAF4 @ 0x18008DAF4
 * Callers:
 *     sub_18008A714 @ 0x18008A714 (sub_18008A714.c)
 * Callees:
 *     sub_18008D884 @ 0x18008D884 (sub_18008D884.c)
 *     sub_18008D98C @ 0x18008D98C (sub_18008D98C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008DAF4(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v3; // rbx
  _QWORD *i; // rdx
  _QWORD *v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-20h]

  sub_18008D884(a1, &v6, a2);
  v3 = 0LL;
  for ( i = v6; i != v7; ++v3 )
    i = (_QWORD *)*i;
  sub_18008D98C(a1, &v6, v6, v7);
  return v3;
}
