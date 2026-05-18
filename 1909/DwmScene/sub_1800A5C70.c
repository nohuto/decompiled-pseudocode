/*
 * XREFs of sub_1800A5C70 @ 0x1800A5C70
 * Callers:
 *     sub_1800A5C70 @ 0x1800A5C70 (sub_1800A5C70.c)
 *     sub_1800A5DDC @ 0x1800A5DDC (sub_1800A5DDC.c)
 * Callees:
 *     sub_1800A2B6C @ 0x1800A2B6C (sub_1800A2B6C.c)
 *     sub_1800A5C70 @ 0x1800A5C70 (sub_1800A5C70.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A5C70(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800A5C70(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800A2B6C(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
