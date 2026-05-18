/*
 * XREFs of sub_18007E52C @ 0x18007E52C
 * Callers:
 *     sub_18007E52C @ 0x18007E52C (sub_18007E52C.c)
 *     sub_18007EA8C @ 0x18007EA8C (sub_18007EA8C.c)
 * Callees:
 *     sub_180067730 @ 0x180067730 (sub_180067730.c)
 *     sub_18007E52C @ 0x18007E52C (sub_18007E52C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E52C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E52C(a1, i[2]);
    i = (__int64 *)*i;
    sub_180067730(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
