/*
 * XREFs of sub_1800F899C @ 0x1800F899C
 * Callers:
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 * Callees:
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_1800F8558 @ 0x1800F8558 (sub_1800F8558.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800F899C(_QWORD *a1, int a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 *result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx

  v4 = a2;
  sub_1800F8558(a1, a2);
  result = sub_180011714(&a1[4 * v4 + 24], a3);
  v7 = a3[3];
  if ( v7 >= 0x10 )
  {
    v8 = v7 + 1;
    v9 = *a3;
    if ( v8 >= 0x1000 )
    {
      v10 = v8 + 39;
      v11 = *(_QWORD *)(v9 - 8);
      v12 = v9 - v11;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x1800F8A46LL);
      }
      v9 = v11;
    }
    result = (__int64 *)j_j__o_free(v9);
  }
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  return result;
}
