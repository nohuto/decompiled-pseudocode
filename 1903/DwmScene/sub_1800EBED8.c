/*
 * XREFs of sub_1800EBED8 @ 0x1800EBED8
 * Callers:
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800F0340 @ 0x1800F0340 (sub_1800F0340.c)
 *     sub_1801107D0 @ 0x1801107D0 (sub_1801107D0.c)
 * Callees:
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800EBED8(__int64 a1, __int64 *a2)
{
  __int64 *result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx

  result = sub_180011714((__int64 *)(a1 + 496), a2);
  v4 = a2[3];
  if ( v4 >= 0x10 )
  {
    v5 = v4 + 1;
    v6 = *a2;
    if ( v5 >= 0x1000 )
    {
      v7 = v5 + 39;
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v6 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        JUMPOUT(0x1800EBF6ALL);
      }
      v6 = v8;
    }
    result = (__int64 *)j_j__o_free(v6);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
