/*
 * XREFs of sub_18008D46C @ 0x18008D46C
 * Callers:
 *     sub_18008D46C @ 0x18008D46C (sub_18008D46C.c)
 *     sub_18008D74C @ 0x18008D74C (sub_18008D74C.c)
 * Callees:
 *     sub_1800894B4 @ 0x1800894B4 (sub_1800894B4.c)
 *     sub_18008D46C @ 0x18008D46C (sub_18008D46C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18008D46C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18008D46C(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800894B4(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
