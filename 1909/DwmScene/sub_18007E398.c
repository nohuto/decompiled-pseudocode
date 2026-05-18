/*
 * XREFs of sub_18007E398 @ 0x18007E398
 * Callers:
 *     sub_18007E398 @ 0x18007E398 (sub_18007E398.c)
 *     sub_18007E8D0 @ 0x18007E8D0 (sub_18007E8D0.c)
 *     sub_18012E470 @ 0x18012E470 (sub_18012E470.c)
 * Callees:
 *     sub_180074770 @ 0x180074770 (sub_180074770.c)
 *     sub_18007E398 @ 0x18007E398 (sub_18007E398.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18007E398(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E398(a1, i[2]);
    i = (__int64 *)*i;
    sub_180074770(v2 + 4);
    result = j_j__o_free(v2);
  }
  return result;
}
