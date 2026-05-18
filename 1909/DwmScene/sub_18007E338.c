/*
 * XREFs of sub_18007E338 @ 0x18007E338
 * Callers:
 *     sub_18007E338 @ 0x18007E338 (sub_18007E338.c)
 *     sub_18007E838 @ 0x18007E838 (sub_18007E838.c)
 *     sub_180130B7B @ 0x180130B7B (sub_180130B7B.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 *     sub_18007E338 @ 0x18007E338 (sub_18007E338.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E338(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E338(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800676B8(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
