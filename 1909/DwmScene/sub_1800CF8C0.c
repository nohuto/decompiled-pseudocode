/*
 * XREFs of sub_1800CF8C0 @ 0x1800CF8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF154 @ 0x1800CF154 (sub_1800CF154.c)
 *     sub_1800CF94C @ 0x1800CF94C (sub_1800CF94C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CF8C0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  sub_1800CF154(a3, &v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  sub_1800CF94C(v8, v6);
  *a2 = v8;
  a2[1] = v9;
  return a2;
}
