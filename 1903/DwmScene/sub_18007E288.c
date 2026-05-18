/*
 * XREFs of sub_18007E288 @ 0x18007E288
 * Callers:
 *     sub_18007E288 @ 0x18007E288 (sub_18007E288.c)
 *     sub_18007E7C0 @ 0x18007E7C0 (sub_18007E7C0.c)
 *     sub_18012E360 @ 0x18012E360 (sub_18012E360.c)
 * Callees:
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_18007E288 @ 0x18007E288 (sub_18007E288.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E288(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E288(a1, i[2]);
    i = (__int64 *)*i;
    sub_180074660(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
