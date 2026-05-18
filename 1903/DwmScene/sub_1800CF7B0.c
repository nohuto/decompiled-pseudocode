/*
 * XREFs of sub_1800CF7B0 @ 0x1800CF7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF044 @ 0x1800CF044 (sub_1800CF044.c)
 *     sub_1800CF83C @ 0x1800CF83C (sub_1800CF83C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CF7B0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  sub_1800CF044(a3, &v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  sub_1800CF83C(v8, v6);
  *a2 = v8;
  a2[1] = v9;
  return a2;
}
