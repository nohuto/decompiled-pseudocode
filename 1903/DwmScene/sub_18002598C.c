/*
 * XREFs of sub_18002598C @ 0x18002598C
 * Callers:
 *     sub_18002598C @ 0x18002598C (sub_18002598C.c)
 *     sub_18002627C @ 0x18002627C (sub_18002627C.c)
 * Callees:
 *     sub_180021718 @ 0x180021718 (sub_180021718.c)
 *     sub_18002598C @ 0x18002598C (sub_18002598C.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002598C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18002598C(a1, i[2]);
    i = (__int64 *)*i;
    sub_180021718((__int64)(v2 + 4), 0);
    result = j_j__o_free(v2);
  }
  return result;
}
